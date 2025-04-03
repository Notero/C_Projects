# 📚 C Programming Projects – Complete Collection

## 🧾 Overview
This repository contains a complete set of **10 structured C programming assignments and projects**, each showcasing essential and advanced programming concepts such as I/O handling, loops, arrays, file manipulation, structs, dynamic memory allocation, binary file operations, and game development. Designed and programmed by **Akin Korkmaz**, this directory represents a progressive journey from basic programming exercises to a fully interactive final project.

---

## 💡 Skills Demonstrated
- ✅ File I/O (text + binary)
- ✅ Structs and memory management
- ✅ Dynamic arrays and pointer arrays
- ✅ Sorting algorithms (bubble sort)
- ✅ Data validation and input handling
- ✅ Game loop mechanics
- ✅ Statistical calculations (averages, entropy)
- ✅ Modular design and user menus

---

## 📁 Project Breakdown

### `00_Review_Assignment.c`
✅ **Random Sales Analyzer**  
- Generates up to 10,000 random sales values  
- Displays them in rows of 10  
- Outputs highest, lowest, and average values

### `01_2D_Grades.c`
✅ **2D Grade Management System**  
- Manage multiple students' 4-exam scores  
- View student & exam averages  
- Dynamically add students and display data

### `02_String_Tools.c`
✅ **String Pattern Printer**  
- Reads full-line input  
- Prints it forward, backward, vertically, and in a triangle  
- Reports string length

### `03_Banking_Menu.c`
✅ **Deposit Tracker**  
- Menu-driven deposit system  
- Sort deposits descending  
- View total, average, and lowest deposit

### `04_Structs_AutoSales.c`
✅ **File-based Struct Storage**  
- Add/Delete autos via structured text files  
- Structs include brand, model, year, price, and ID  
- Display autos using formatted file reads

### `05_Binary_File_Autos.c`
✅ **Binary File Auto Saver**  
- Use `fwrite()`/`fread()` to persist struct records  
- Store brand, model, year, and price  
- Fast and compact save/load

### `06_Dynamic_AutoManager.c`
✅ **Dynamic Memory with Sorting**  
- Autos are managed using `malloc()`/`calloc()`  
- Sort by cost or make  
- Save and load from binary file

### `07_Inventory_Manager.c`
✅ **Inventory Tracker**  
- Manage item name, cost, price, and quantity  
- Calculate:
  - Total quantity
  - Most expensive item
  - Estimated profit

### `08_TV_Series_Collection.c`  
✅ **TV Series Database Manager**  
- Add, delete, sort, and search shows  
- Use genre list from external `genre.h`  
- Collect and calculate:
  - Genre stats
  - Shannon entropy (variation)
  - IMDB & year averages  
- Data persisted in `.bin` files

### `09_Final_Project_Battleship.c`  
✅ **Interactive Battleship Game**  
- Full game with:
  - Dynamic board
  - Smart ship placement
  - Player missile interface
  - Save/load feature via `Save.txt`
- Tracks hit/miss/sunk ships with real-time UI

---

## 🛠️ How to Run
Each `.c` file is standalone and can be compiled with:

    gcc -o programName filename.c
    ./programName

👨‍💻 Author
Akin Korkmaz
📅 2023
🛠️ Built entirely in C for academic and personal mastery of programming fundamentals and project development.
