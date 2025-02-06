
# RSA

RSA encryption with QTGUI as optional interface.

## Table of Contents
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Setup and Installation](#setup-and-installation)
- [How to Use](#how-to-use)
- [Screenshots](#screenshots)
- [Future Improvements](#future-improvements)

---

## Features
- Ability to encrypt messages using RSA
- Ability to decrypt messages using RSA

---

## Technologies Used
- **C++**: Core language for application logic.
- **QT6GUI**: For GUI design and interaction.
- **CMAKE**: For building

---

## Setup and Installation

### Prerequisites
Ensure you have the following installed:
- C++17 or Higher
- QT6.22GUI or Higher
- CMake 3.2 or Higher
- GUI: X11 or Wayland (Linux)

### Steps to Run Locally Linux
1. Clone this repository:
   ```bash
   git clone https://github.com/AFamiliarQueasySensation/RSA

2. Navigate to the project directory: (If not created make a new folder)
    ```bash
    cd RSA/build
3. Compile using the location of CMakeLists.txt: 
   ```bash
    cmake ..
5. Build:
   ```bash
    make
6. Run a compatable GUI (X11 or Wayland)
7. Run the newly created executable:
   ```bash
    ./RSA

### Steps to Run Locally Windows
1. Clone this repository:
   ```bash
   git clone https://github.com/AFamiliarQueasySensation/RSA

2. Navigate to the project directory: (If not created make a new folder)
    ```bash
    cd RSA/build
3. Compile using the location of CMakeLists.txt: 
   ```bash
    cmake ..
5. Build:
   ```bash
    make
7. Run the newly created executable:
   ```bash
    ./RSA

**Main Class**: main.cpp <br>
**Project**: MineSweep<br>

## How To Use
1. Input a message that will be encrypted with a public key
2. Press Decrypt to decrypt the message

## Screenshots
_Main Window_ <br>
<img src="" alt="Main Window" width="300">


## Future Improvements
- Implementation of encryption for strings of text
- GUI
- Stress testing

---

_**RSA created by:** Grant Von Hagen_
