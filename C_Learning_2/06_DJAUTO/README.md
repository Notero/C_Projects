# 🗂️ Assignment 06 - Dynamic Auto Record System with Binary I/O

## 📋 Description
This advanced automobile record system uses **dynamic memory allocation** and **binary file storage** to manage car inventory. Users can add, view, and sort vehicle data, with the system automatically saving and loading data using `automobile_records.bin`.

## 🧠 Features
- 🧠 **Dynamic allocation** using array of pointers to structs
- 💾 **Binary file saving/loading** with record count and size
- ➕ **Add automobiles** to the system
- 📊 **Display and sort** by:
  - Cost (ascending)
  - Make/model (alphabetical)
- 🔁 **Main menu** interface for smooth interaction

## 📦 Data Structure
Each `Automobile` record includes:
- `make`: brand/manufacturer
- `model`: car model
- `year_built`: year of manufacture2
- `cost`: integer value of price

## 🛠️ How to Run
1. Compile the code:
   ```bash
   gcc -o dynamic_autos main.c
   ./dynamic_autos
# 👤 Author
Akin Korkmaz
