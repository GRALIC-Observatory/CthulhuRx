# 硬件功能规划

## 正式版
1. **调试与存储：**  
   - 需要FTx232，Type-C，接JTAG、UART
   - ARM使用 TF 卡和 Flash  

2. **射频与时钟：**  
   - 8T8R，SSMA，单侧
   - 10 MHz  
   - 1 PPS  
   - 时钟输出信号由射频接口输出，以便调试
   - 考虑MMCX接口

3. **高速接口：**  
   - 双路 100 GbE  

4. **低速IO：**  
   - Alarm IO  
   - 




from BI1MNG:

1. ps的gem连到ps-gtr上，以便连到一个千兆sfp模拟上，走光纤出去。
好处：方便野外部署;可以省一个eth phy芯片(当然也可以不省)，如果仍需要rj45，可以插一个sfp-rj45的模块代替

from fxzjshm

## 核心
*通过某些方法(选贴元件 ?)实现兼容 27dr 47dr 67dr，参考真为电子的板，防止后续27dr 缺货或有人要求核心芯片是新品
## 时钟，1PPS
时间参考输入，10 MHz，1PPS 输入，用SMA 或类似的射频接口壳
1PPS 为5V TTL 电平，需要 buffer:接入 high performance 区
可能有人需要 GNSS 芯片的 10 MHz 和 1PPS
*时钟芯片，类似 LMK04828，LMK04832，时钟芯片到 PL 的引脚应当在 highperformance 区
*时钟芯片的其中一路输出用比如 SMA 输出到板外，用于外接示波器方便调试
*时钟芯片的 LED，最好2个PLL 都有 locked
*VCX0 最好类似 100 MHz，通信可能用 122.88 MHz 但天文不喜欢
(待调研)white rabbit 集成;或分立，移植到比如spectan /artix ?*ADC，DAC reference clock与 pl clock 可在时钟芯片上分开配置，不互相牵制
## 网络
*2个QSFP28，100 GbE
# PS /PL
*PS 千兆网口用于控制
PS 有 DDR 用于 CPU 运行
可选 PL有 DDR，可能有人会用到
*SD card 连线，不能速率烂到默认设置没法正常启动系统，速率实在太慢也不是不能用*可能有人需要闪存芯片，QSPI，EMMC，M.2?
*LMK 芯片的 SPI 接口连到 PS，PL 均可，看是否很多人需要连到 P!*PL LED 个数，4 ?2?8?*USB 转 JTAG + PS UART，可选 +PL UART
## 供电
*供电接口:12V 圆口，PCIe 6 pin /8 pin光宽幅电压输入，12--18 V?或外置电源提供稳压
## misc
给原理图光
最好能在未来某个时间点开源
