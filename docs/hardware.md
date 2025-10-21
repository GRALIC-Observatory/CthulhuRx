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
