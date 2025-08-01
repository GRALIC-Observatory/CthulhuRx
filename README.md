# 🌌 CthulhuRx

> **“The most merciful thing in the world... is the inability of the human mind to correlate all its contents.”**

> — *H.P. Lovecraft*

**CthulhuRx** 是一个基于 **RFSoC** 的射电天文信号采集后端系统。该项目融合了开源硬件设计、可复用 FPGA 模块、预构建比特流和上位机数据接收工具，旨在提供一个完整、可扩展的射电天文后端方案。


---

## 📁 项目结构

- `hardware/`：RFSoC 硬件设计，包括原理图、PCB 和物料清单
- `bitstreams/`：预编译比特流（.bit / .xsa）
- `blocks/`：可复用 Vivado 模块（如 FFT、通道化、封包器等）
- `host/`：上位机程序，包括 UDP 接收与控制脚本（Python/C++）
- `examples/`：完整接收系统示例工程
- `docs/`：开发文档、安装说明等
- `scripts/`：打包、烧写、调试等自动化工具
- `README.md`：项目说明文档

---

## 🚀 功能亮点

- 📡 基于 Xilinx RFSoC 构建，支持高速采样与内建 ADC/DAC；
- 🧱 提供模块化可复用 Block，加速自定义接收机设计；
- 🧠 包含稳定比特流，开机即用；
- 🧬 提供 上位机 UDP 接包程序，快速调试与开发；
- 🛠️ 支持开源硬件复现；

---

## 🧰 快速开始（Coming Soon）

项目文档正在建设中，将涵盖以下内容：

- 硬件部署说明
- 比特流烧录方法
- Block 复用方式
- UDP 接收与数据处理
- 示例工程运行

---

## 📜 协议 & 贡献

本项目将在回本之后进行开源。



