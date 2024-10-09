# Stone Paper Scissor Game - README

## Overview
This is a simple **Stone, Paper, Scissor** game written in C++. It allows a user to play against the computer. The game randomly generates the computer's choice and compares it with the user’s choice to determine the winner. The game follows the basic rules of Stone, Paper, Scissor:

- Rock beats Scissors
- Scissors beat Paper
- Paper beats Rock

## Prerequisites
- A C++ compiler (like g++, Visual Studio, etc.)
- Basic knowledge of compiling and running C++ programs

## How to Compile and Run

1. **Compile the code:**
   ```bash
   g++ stone_paper_scissor.cpp -o game
   ```

2. **Run the program:**
   ```bash
   ./game
   ```

## Instructions
1. When you run the program, you will see the following options:
   ```
   Stone Paper Scissor Game
   1) Rock
   2) Paper
   3) Scissor
   ```
2. Input a number between 1 to 3 to choose your option:
   - `1`: Rock
   - `2`: Paper
   - `3`: Scissors

3. The program will display both your choice and the computer’s choice, then declare the result as one of the following:
   - **You win!**: You have defeated the computer.
   - **You lose!**: The computer has defeated you.
   - **Match Tie**: Both you and the computer chose the same option, resulting in a tie.

## Code Explanation

1. **Random Number Generation:**
   - The `srand(time(NULL))` function seeds the random number generator with the current time to ensure different random values every time the program runs.
   - The computer’s choice is generated using `rand()%3+1`, which produces a random integer between 1 and 3.

2. **User Input:**
   - The user inputs a number (`1`, `2`, or `3`) to choose Rock, Paper, or Scissors.

3. **Game Logic:**
   - The program first checks if the user and computer chose the same option, resulting in a tie.
   - Then, based on the user’s choice, it compares against the computer’s choice to determine the winner.

## Example Run

```
Stone Paper Scissor Game
1) Rock
2) Paper
3) Scissor
2
You choose Paper
Computer chooses Rock
You win!
```

## Notes
- The code uses `if` statements to compare choices and determine the outcome of each round.
- The game ends after one round, but it can be easily extended to multiple rounds by using a loop structure.

## License
This project is open-source and free to use.
