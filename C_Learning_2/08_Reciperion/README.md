# 📺 Assignment 08 - TV Series Collection Manager (Dynamic, Genre-based, Stats & Persistence)

## 📋 Description
A comprehensive management system for TV series collections using **dynamic memory**, **binary file persistence**, **sorting**, **searching**, and **genre classification**. This system enables users to maintain a customizable database of TV shows with full CRUD operations, statistics, and data analysis.

## 🧠 Features
- 🆕 **Create or load** a TV series collection from file
- ➕ **Add** new shows (title, director, genre, year, IMDB rating)
- 🗑️ **Delete** by title
- 🔍 **Search** by title
- 📊 **Sort**:
  - Alphabetically by title
  - By IMDB rating (high to low)
  - By year (newest to oldest)
- 📈 **Stats Module**:
  - Count of shows per genre
  - Average release year
  - Average IMDB rating
  - Genre **Shannon entropy** (variation index)

## 🧱 Data Fields
Each series includes:
- `title` (string)
- `director` (string)
- `genre` (mapped via ID to name)
- `release_year` (int)
- `IMDB_rating` (int)

Genres are selected using a numeric list provided by a custom header `genre.h`.

## 🛠️ How to Run
1. Ensure `genre.h` is in the same directory.
2. Compile the code:
   ```bash
   gcc -o tv_series_manager main.c -lm
   ./tv_series_manager
# 👤 Author
Akin Korkmaz
