Truth_Seeker - Operational
# 🛡️ Truth-Seeker

**Truth-Seeker** is a C++ based security tool designed to monitor and shield Facebook-related interactions. This project is built to identify and blacklist suspicious patterns.

## 🚀 Features
* **FB Shield:** Active monitoring of Facebook connection strings.
* **Blacklist System:** Automatically references `blacklist.txt` to block known threats.
* **Clean Build:** Optimized for Linux/WSL2 environments.

## 🛠️ How to Build
To compile the Truth-Seeker from source, use `g++`:
```bash
g++ fb_shield.cpp -o fb_shield
