# 🚗 Assignment 04 - Auto Sales Record System (Structs & File I/O)

## 📋 Description
This program simulates a car dealership inventory system, allowing the user to add, delete, and display automobile records. It uses a `struct` to store details for each car and handles data persistence via file I/O operations.

## 🧠 Features
- 🚘 **Add an automobile** to the inventory and save it to `autos.txt`
- 🗑️ **Delete an automobile** by its Auto ID
- 📄 **Display all autos** currently stored in the file
- 🗂️ All autos are stored in a plain text file (`autos.txt`) for persistent storage

## 📑 Struct Fields
Each automobile has the following data:
- Brand (e.g., Toyota)
- Model (e.g., Corolla)
- Year of Production
- Price
- Unique Auto ID

## 🛠️ How to Run
1. Compile the program:
   ```bash
   gcc -o autos main.c
   ./autos
# 👤 Author
Akin Korkmaz
