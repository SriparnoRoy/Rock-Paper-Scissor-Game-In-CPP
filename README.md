## 🗿📄✂️ Stone Paper Scissor Game (C++)

This is a simple console-based **Stone Paper Scissor** game written in C++.
The player competes against the computer, which makes a random choice each round.

---

### 🎯 Features

* Simple and beginner-friendly C++ program
* Uses `rand()` and `srand()` for random computer moves
* Interactive console input/output
* Displays both player and computer choices
* Determines win, lose, or tie

---

### 🧩 How It Works

1. The program displays 3 choices:

   * `1` → Rock
   * `2` → Paper
   * `3` → Scissor
2. You enter your choice.
3. The computer randomly picks one using `rand()`.
4. The program compares both and prints the result.

---

### ⚙️ How to Run

1. Save the code as `stone_paper_scissor.cpp`.
2. Open a terminal or command prompt in that folder.
3. Compile and run using:

   ```bash
   g++ stone_paper_scissor.cpp -o game
   ./game
   ```
4. Play and enjoy! 🎮

---

### 🧠 Concepts Used

* Random number generation (`rand()`, `srand()`, `time(NULL)`)
* Conditional statements (`if`, `else if`)
* Basic I/O with `cin` and `cout`

---

Would you like me to make it **loop automatically** so you can play multiple rounds without restarting the program?
