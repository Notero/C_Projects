# 💾 Assignment 05 - Auto Sales Record with Binary File I/O

## 📋 Description
This version of the VASE (Valencia Auto Sales Enterprise) system uses **binary file storage** (`autos.dat`) to persist automobile records. The user can add and view vehicles, with all data stored in and loaded from a binary file using structs.

## 🧠 Features
- 🚘 **Add automobile** records with brand, model, year, and price
- 💾 **Save data** to `autos.dat` in binary format
- 📂 **Load and display** all saved automobile records
- Menu-driven interface with options for adding, viewing, and exiting

## 🧱 Struct Fields
Each automobile record includes:
- Brand (char[20])
- Model (char[20])
- Year (int)
- Price (double)

## 🛠️ How to Run
1. Compile the code:
   ```bash
   gcc -o binary_autos main.c
   ./binary_autos
# 👤 Author
Akin Korkmaz
