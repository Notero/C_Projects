# 🚢 Assignment 09 - Final Project: Battleship Simulation Game

## 📋 Description
This is a complete console-based **Battleship game simulation**. The player targets a hidden 10x10 grid of ships using coordinate-based attacks. Game state is dynamically updated with **real-time visuals**, **status display**, and **persistent saving**. The game includes random ship placement, shot validation, status tracking, and save/load capability.

## 🎮 Game Features
- 🧠 **Smart ship placement** algorithm ensures no overlap or out-of-bounds errors.
- 🔁 **Replayable gameplay** with saving and resuming from `Save.txt`.
- 📦 **Five uniquely named ships** with varying sizes:
  - Victory (5 cells)
  - Western (4 cells)
  - Yellow, Xray (3 cells each)
  - Zebra (2 cells)
- 💥 **Missile-based attack system** with:
  - Hit and Miss logic
  - Sinking detection (updates board status with ship initials)
  - Real-time **HUD and board display**
- 💾 **Game persistence** via `Save.txt`, including:
  - Main board (ship locations)
  - Player board (H/M/~)
  - Shot count
  - Sunk ships

## 🧱 Game Structure
- `iBoard[10][10]`: Actual ship locations
- `cDummyBoard[10][10]`: What player sees (misses, hits, sunk)
- `SunkShips[5]`: Tracker of which ships are sunk
- Each ship is placed randomly in one of four directions
- Game continues until all ships are sunk or player quits

## 📜 Menu
- `1`: New Game
- `2`: Load Game *(if available)*
- `3`: Quit

## 💡 Technical Highlights
- 🧠 **Modular design**: Split into sections (UI, logic, ship placement, file I/O)
- 🗃️ Save file `Save.txt` stores complete board and status data
- 🚀 Supports restart with prompt after victory
- 🧪 Coordinate input like `B4`, validation and repeat-shot prevention
- 🎯 Real-time board rendering with stats panel

## 🛠️ How to Compile & Run
    gcc -o battleship final_project.c
    ./battleship
⚠️ Notes
Works best in Windows (due to system("cls") and system("pause"))

No support for 2-player mode

Relies on pseudo-random placement; not seeded multiple times for performance

👤 Author
Akin Korkmaz
