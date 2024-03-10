# Overview

What I want to accomplish as a software engineer major is familiaze myself with different programming language and it's framework and Syntax.

For this project, I learned to build a console base to-do list application using C++ language and it's purpose to demonstrate the use of variables, expression, conditionals, loops, functions, classes and also do a stretch challenge of read and write to a file in the program.

# Program Component and Functionality.

. Private Data Member: A std::vector<std::string> to store tasks.
Public Member Functions:
. loadTasks(): Loads tasks from a file named tasks.txt into the vector. Each task is stored on a new line.
. saveTasks(): Saves tasks from the vector back to the file tasks.txt, each on a new line.
. addTask(const std::string& task): Adds a new task to the vector.
. removeTask(int index): Removes a task at a given index (1-based indexing) from the vector.
. viewTasks() const: Displays all tasks in the vector to the console.

Main Function
Creates an instance of ToDoList and loads tasks from the file into the program.
Enters a loop that displays a menu with options to add a task, remove a task, view all tasks, or exit the program.
Performs actions based on the user's choice, such as adding or removing tasks, and viewing tasks. After each action, the tasks are saved back to the file.
The loop continues until the user chooses to exit.

Key Concepts Demonstrated
. File I/O: Uses std::ifstream for reading from a file and std::ofstream for writing to a file, demonstrating basic file input and output operations.
. Vector Manipulation: Demonstrates adding to and removing items from a std::vector, as well as iterating over its elements.
. Class Design: Shows how to encapsulate related data (tasks) and operations (add, remove, load, save, view) into a class, following the Object-Oriented Programming (OOP) principles.
. Input Validation: Basic validation is performed for the removal of tasks, ensuring the index provided is within the valid range.
. Input/Output: Demonstrates the use of std::cout for printing to the console and std::cin for reading user input, including handling the newline character left in the input stream after reading numbers.

[Software Demo Video](https://youtu.be/R03YlSQ-u5c)

# Development Environment

Standard Libraries
.iostream: used for the input and output operation.The program uses std::cout for writing output to the standard output (typically the console) and std::cin for reading input from the standard input.
.fstream: Part of the C++ Standard Library that deals with file input and output operations. std::ifstream is used for reading from a file, and std::ofstream is used for writing to a file, enabling the program to load and save tasks.
.vector: A template class that provides a way to use dynamic arrays in C++. The program uses std::vector<std::string> to store the list of tasks dynamically. std::vector is chosen for its ease of use in adding, removing, and iterating over elements.
.string: This library is used to utilize the std::string class in C++. std::string offers a convenient and safer alternative to traditional C-style strings. It is used to represent tasks in the program.
{Describe the tools that you used to develop the software}

Development Tools
.IDE: Visual Studio Code
.Complier: Microsoft Visual C++(MVSC)
.Debugger:
.Version Control System:  Git
.Collaboration and Version Control: GitHub

# Useful Websites

- [W3Schools - Tutorial Site](https://www.w3schools.com/cpp/)
- [C++ Wikipedia - Open Collaboration Site](https://en.wikipedia.org/wiki/C%2B%2B)
- [C++ STL Containers-CPLUSPLUS ](http://www.cplusplus.com/reference/stl/)

# Future Work

- Adding Prioritize Task Feature
- Adding Deadline Feature
- Adding Error Checking for file operation
