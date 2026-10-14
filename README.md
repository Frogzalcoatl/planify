# Planify
A travel planner in C++ using the QT Framework.

## Setup
1. **C++ Compiler:**
    * **Windows:** Included with Qt 6 installer below
    * **Linux:** GCC or Clang (``sudo apt install build-essential libgl1-mesa-dev`` on Ubuntu/Debian)
    * **MacOS:** Apple Clang (``xcode-select --install``)
2. **Qt 6 Framework:** [Download](https://www.qt.io/development/download-qt-installer-oss)
3. **Editor Setup:** You can use qt creator, which is included with the installer listed above, and/or vscode. If you decide to use vscode, install the recommended extensions in ``.vscode/extensions.json``. 

## Project Overview
* Plan activities for future trips
* Add proposed activities for your travel group
* Vote on activities you would like to attend
* Pie chart showing the cost of all planned activities

### Activities
Activities can be added by any member.
Every activity will include following:
* Name
* Description
* Location (Address)
* Date, time, and duration
* Cost