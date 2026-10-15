# QT 6 C++ Template
Template project for the [QT 6 Framework](https://doc.qt.io/) with C++17.

## Setup
1. **C++ Compiler:**
    * **Windows:** Included with QT 6 installer below
    * **Linux:** GCC or Clang (``sudo apt install build-essential libgl1-mesa-dev`` on Ubuntu/Debian)
    * **MacOS:** Apple Clang (``xcode-select --install``)
2. **QT 6 Framework:** [Download](https://www.qt.io/development/download-qt-installer-oss)
3. **Editor Setup:** You can use QT Creator, which is included with the installer above, and/or [VS Code](https://code.visualstudio.com/download). If you decide to use VS Code, install the recommended extensions in ``.vscode/extensions.json``.

## Workflow
**QT Creator:** The project can be opened from the CMakeLists.txt file. Learn more about using QT Creator [here](https://doc.qt.io/qtcreator/).

**VS Code:** Install the recommended extensions. When the CMake extension requests a kit, select the QT Compiler. If you do not see the QT compilerappear, make sure you have installed the QT C++ extension and gone through setup notifications. When you select a kit, your project will automatically configure. Once it has finished configuring, you can click the triangle run button in the status bar to build/run the project.
