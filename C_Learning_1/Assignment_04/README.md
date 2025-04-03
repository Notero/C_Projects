# 📦 Assignment 04 - Shipping Cost Calculator

## 📋 Description
This program calculates the shipping cost of a package based on its weight and the distance it will travel. It handles multiple conditions to determine the correct price tier and prevents shipping of overweight packages.

## 🚚 Features
- 📥 Takes user input for package weight (lbs) and distance (miles)
- 🧮 Rounds mileage rate up for pricing
- ❌ Disallows shipping if weight is 50 lbs or more
- 💲 Determines shipping cost based on:
  - Weight (≤10 or >10 lbs)
  - Distance (≤1000 or >1000 miles)

## 🛠️ How to Run
1. Compile the code:
   ```bash
   gcc -o shipping_calculator main.c -lm
   ./shipping_calculator

#👤 Author
Akin Korkmaz
