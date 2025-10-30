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

### 💻 Code Example

```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int user = 0;
    int computer = 0;
    cout << "Stone Paper Scissor Game" << endl;
    cout << "1) Rock\n2) Paper\n3) Scissor" << endl;
    cin >> user;

    if(user == 1) cout << "You choose Rock" << endl;
    else if(user == 2) cout << "You choose Paper" << endl;
    else cout << "You choose Scissor" << endl;

    computer = rand() % 3 + 1;

    if(computer == 1) cout << "Computer chooses Rock" << endl;
    else if(computer == 2) cout << "Computer chooses Paper" << endl;
    else cout << "Computer chooses Scissor" << endl;

    if(user == computer) cout << "Match Tie" << endl;
    else if((user == 1 && computer == 3) || 
            (user == 2 && computer == 1) || 
            (user == 3 && computer == 2))
        cout << "You win!" << endl;
    else
        cout << "You lose!" << endl;

    return 0;
}
```

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
