# Linux.Kernel.Development.LKM

# Linux Kernel Development Project: Process Insight Module

This project is a hands-on journey into Linux kernel development. It is based on the book *Linux Kernel Development, 3rd Edition* by Robert Love, and structured as a daily study plan with practical code contributions every two days.

## 📌 Project Title
**Process Insight Module (PIM)**

This kernel module will monitor and log various process activities like creation, termination, scheduling, and memory allocation. Over the weeks, it will be extended to explore interrupts, system calls, and security hooks within the Linux kernel.

---

## 🧠 Objective
To gain a practical understanding of Linux kernel internals by:
- Building a real-world kernel module from scratch
- Applying theoretical knowledge from the book
- Committing incremental, testable code every two days

---

## 🛠️ Development Setup

### Host System
- **OS**: Ubuntu 22.04 LTS
- **Kernel Version**: `5.x` (custom-compiled)
- **Tools Installed**:
  - `build-essential`
  - `git`
  - `make`
  - `gcc`
  - `qemu`
  - `gdb`
  - `libncurses-dev`
  - `bison`, `flex`
  - `libssl-dev`
  - `bc`

### Getting the Kernel Source
```bash
git clone https://git.kernel.org/pub/scm/linux/kernel/git/stable/linux.git
cd linux
make defconfig
make -j$(nproc)
