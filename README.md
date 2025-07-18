<h1 align = "center"> C Programming Assignment Guide </h1>

Welcome, junior coders!\
This repo contains all the source codes you need for your C programming assignments for your **C programming Lab [ES-CS291]** in second semester. 
Now, let's walk you through how to set up your system and run these `.c` files on **Windows**, **Linux**, or **macOS**.

---

## What You Need

- A C Compiler (like GCC)
- An IDE — I recommend **Visual Studio Code (VS Code)**
- Basic terminal or command line access

---

## ⚙️ Setting Up Your Environment

### Step 1: Install VS Code (Windows/MacOS/Linux)

1. Go to [https://code.visualstudio.com/](https://code.visualstudio.com/)
2. Download and install VS Code for your OS.
3. Launch it and install the **C/C++ Extension**:
   - Press `Ctrl+Shift+X` → Search for `C/C++` → Click **Install** (by Microsoft)

---

## 🪟 Windows Setup

### 🔧 Install GCC Compiler

#### Recommended: Install via MinGW Installation Manager

1. Download from [https://sourceforge.net/projects/mingw/](https://sourceforge.net/projects/mingw/)
2. Run the installer (`mingw-get-setup.exe`) to install the MinGW Installation Manager.
3. Inside the manager:
   - Mark for installation:
     - `mingw32-gcc-g++`
     - `mingw32-base`
     - `mingw32-gcc-objc`
   - Click `Installation → Apply Changes`
4. Add `C:\MinGW\bin` to your **System PATH**:
   - Search "Environment Variables" → Edit PATH → Add the above directory
5. Verify Installation:
   
   ```bash
   gcc --version
   ```

#### Alternative: Install via MSYS2

1. Download MSYS2: [https://www.msys2.org/](https://www.msys2.org/)
2. Install it and run the UCRT64 terminal.
3. Update packages:
   
   ```bash
   pacman -Syu
   pacman -Su
   ```
5. Install GCC:
   
   ```bash
   pacman -S mingw-w64-ucrt-x86_64-gcc
   ```
<br>

> ⚠️ MSYS2 does **not** automatically add its bin directory to PATH. You must do it manually:
> - Search "Environment Variables" → Edit PATH → Add the chosen directory from above

5. Add the appropriate MSYS2 bin directory to your **System PATH**:
   - For **UCRT64**: `C:\msys64\ucrt64\bin`
   - For **MINGW64**: `C:\msys64\mingw64\bin`
   - For **CLANG64**: `C:\msys64\clang64\bin`

>  Also, make sure to use the **MSYS2 MinGW UCRT64 Terminal**, not the default MSYS2 shell.

6. Verify Installation:
   
   ```bash
   gcc --version
   ```
---

## 🐧 Linux Setup (All Distros)

### For Ubuntu/Debian-based

```bash
sudo apt update
sudo apt install build-essential
```

### For Arch-based (Manjaro/EndeavourOS/etc.)

```bash
sudo pacman -Syu
sudo pacman -S base-devel gcc
```

### For Fedora/RHEL-based

```bash
sudo dnf groupinstall "Development Tools"
sudo dnf install gcc
```

Verify installation:

```bash
gcc --version
```

---

## 🍏 macOS Setup

1. Open Terminal.
2. Install the Xcode Command Line Tools:
   
   ```bash
   xcode-select --install
   ```
4. Verify Installation:
   
   ```bash
   gcc --version
   ```

---

## 💻 Writing and Running C Programs

### Write/Edit Your Code

- Open your `.c` file in **VS Code** to view and edit the code.
- Create new file and save the file with a `.c` extension to create your own `c` file.

### 🛠️ Compile & Run

Use the integrated terminal in VS Code (`Ctrl + `` `) or system terminal.

#### 👉 Windows (MinGW or MSYS2)

```bash
gcc filename.c -o filename.exe
./filename.exe
```

#### 👉 Linux / macOS

```bash
gcc filename.c -o filename
./filename
```

> Replace `filename.c` with your actual file name.

---

## 🚀 VS Code Tips for Beginners

1. Open your folder containing `.c` files in VS Code (`File → Open Folder`).
2. Open the terminal inside VS Code:
   - `Ctrl + ~` (tilde) or `View → Terminal`
3. Compile and run as shown above.
4. To quickly run your code, click the ▶️ button in the top-right of the code window (only available after installing the C/C++ extension).
> 🛠️ **First Time Only**: When you click the run button for the first time in a project, VS Code will prompt you to select a compiler.  
>   - Select **`GCC (MinGW)`** if you're on Windows with MinGW  
>   - Select **`g++`** or **`gcc`** based on your platform and install  
>   - This sets up your `tasks.json` and `launch.json` files automatically

---

## Common Errors & Fixes

| Error Message            | Reason / Fix                                             |
| ------------------------ | -------------------------------------------------------- |
| `gcc not found`          | Install GCC properly, and ensure it's in PATH(windows)   |
| `Permission denied`      | On Linux/macOS, use `chmod +x filename`                  |
| Program closes instantly | Add `getchar();` or run from terminal (not double-click) |

---

## Need Help?

Stuck somewhere? Don't worry
- you can always contact me or any other senior for help
- or just try googling your issue haha





