# Number Guessing Game (Python)

This is the Python implementation of a number guessing game.

The program generates a random number and prompts the user to guess it, providing feedback until the correct number is entered.

## Features
- User-defined difficulty level (range is based on input)
- Unlimited guesses
- Robust input validation using `try/except`
- Clear feedback for each guess

## How It Works
1. The user is prompted to enter a positive integer as the level.
2. A random number between 1 and the given level is generated.
3. The user repeatedly guesses the number.
4. The program responds with:
   - "Too small!" if the guess is low
   - "Too large!" if the guess is high
   - "Just right!" when the correct number is guessed

## Purpose
This version focuses on demonstrating Pythonic input handling, control flow, and exception-based validation.
