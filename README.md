# Skyscrapers resolver
![release](https://img.shields.io/github/v/release/valfur03/skyscrapers-resolver?style=flat)
![language](https://img.shields.io/badge/language-C-35d435)
![size](https://img.shields.io/github/languages/code-size/valfur03/skyscrapers-resolver)

A program that can resolve the skyscrapers game

## Context
This program was created for a project during my pool at Ecole 42.
## Installation
### Linux / MacOS
Clone this repository on your computer.
```bash
git clone https://github.com/valfur03/skyscrapers-resolver
```
Go in the program directory.
```bash
cd skyscrapers-resolver
```
## How to use
You can use this program to solve puzzles [here](https://www.puzzle-skyscrapers.com/).
To execute the program:
```bash
cc -Wall -Wextra -Werror -o resolver *.c
./resolver "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"
```
Just put your configuration into the quotes.
For example:
```bash
./resolver "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```
