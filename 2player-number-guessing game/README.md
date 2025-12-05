# 🔢 Two-Player Number Guessing Game (C++)

This is a simple **two-player number guessing game** made in C++.  
Player 1 enters a secret number (1–9) without showing it on the screen using `getch()`,  
and Player 2 tries to guess it.

---

## 🎮 How the Game Works

1. **Player 1** secretly enters a number from **1 to 9**.  
   - The input is hidden because `getch()` is used.
2. **Player 2** keeps guessing the number.
3. The program tells if the guess is:
   - 🔼 **Too high**
   - 🔽 **Too low**
4. When Player 2 guesses correctly, the game shows the total number of attempts.

---

## 🧠 Concepts Used

- `getch()` for hidden input  
- `char` variables  
- `do-while` loop  
- Comparison of characters  
- Basic input/output in C++

---

## 🚀 How to Run

1. Copy the code into a `.cpp` file (like `guess.cpp`).
2. Compile using any C++ compiler:
   ```bash
   g++ guess.cpp -o guess
