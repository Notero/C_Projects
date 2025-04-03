# 📦 Assignment 07 - Dynamic Inventory Management System

## 📋 Description
This inventory program manages product data using **dynamic memory allocation** with an array of pointers to structs. It allows users to input inventory items, view all stored information, and calculate key statistics like total quantity, most expensive item, and estimated total profit.

## 🧠 Features
- 🧾 **Add items** to the inventory (name, cost, price, quantity)
- 📋 **Display** each item’s details in a clean format
- 📊 **Calculate stats**:
  - Total quantity of all items
  - Most expensive item name
  - Estimated total profit if all items are sold

## 💡 Struct Fields
Each `Inventory` record contains:
- `itemName`: Name of the item
- `itemCost`: Cost per item
- `itemPrice`: Sale price per item
- `quantity`: Number of units in stock

## 🛠️ How to Run
1. Compile the code:
   ```bash
   gcc -o inventory_manager main.c
   ./inventory_manager

# 👤 Author
Akin Korkmaz
