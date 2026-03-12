# ⚙️ C++ Quest — 30-Day C++ Challenge

> A self-directed, project-based journey from C++ beginner to confident developer — one day at a time.

---

## 📖 About

**C++ Quest** is a 30-day coding challenge I built to systematically learn C++ from the ground up. Each day features a focused project that introduces a new concept, building on everything learned before. The challenge is structured into three phases:

| Phase | Days | Focus |
|-------|------|-------|
| 🟢 Beginner | 1 – 8 | Fundamentals: I/O, variables, loops, functions, arrays, strings |
| 🔵 Intermediate | 9 – 18 | OOP: pointers, classes, inheritance, polymorphism, file I/O, STL vectors |
| 🟣 Advanced | 19 – 30 | Modern C++: templates, lambdas, smart pointers, move semantics, data structures |

---

## 🗂️ Repository Structure

```
30-days-of-cpp/
│
├── Day01_HelloWorld/
│   └── main.cpp
├── Day02_Variables/
│   └── main.cpp
├── Day03_Operators/
│   └── main.cpp
│   ...
├── Day30_StudentManagementSystem/
│   └── main.cpp
│
└── README.md
```

Each folder contains a single `main.cpp` with that day's solution.

---

## 📅 The 30-Day Roadmap

| Day | Project | Concept | Difficulty |
|-----|---------|---------|------------|
| 1 | Hello World & Basic I/O | `cin` / `cout`, program structure | 🟢 Beginner |
| 2 | Variables & Data Types | `int`, `double`, `char`, `bool`, `string` | 🟢 Beginner |
| 3 | Operators & Expressions | Arithmetic, relational, logical operators | 🟢 Beginner |
| 4 | If/Else Conditionals | Control flow, grade classifier | 🟢 Beginner |
| 5 | Loops | `for`, `while`, `do-while`, multiplication table | 🟢 Beginner |
| 6 | Functions | Parameters, return values, `isPrime`, `factorial`, Fibonacci | 🟢 Beginner |
| 7 | Arrays | C-style arrays, min/max/average | 🟢 Beginner |
| 8 | Strings & String Methods | `std::string`, reverse, palindrome, vowel count | 🟢 Beginner |
| 9 | Pointers Basics | Memory addresses, dereferencing, pointer swap | 🔵 Intermediate |
| 10 | References & const | Aliases, `const` correctness, in-place mutation | 🔵 Intermediate |
| 11 | Structs | Grouped data, `Student` struct | 🔵 Intermediate |
| 12 | Classes & Objects | Encapsulation, `BankAccount` class | 🔵 Intermediate |
| 13 | Constructors & Destructors | Object lifecycle, static members, initializer lists | 🔵 Intermediate |
| 14 | Inheritance | Base/derived classes, `Shape → Circle/Rectangle` | 🔵 Intermediate |
| 15 | Polymorphism & Virtual Functions | Runtime dispatch, `virtual`, `vector<Shape*>` | 🔵 Intermediate |
| 16 | File I/O | `fstream`, reading/writing student records | 🔵 Intermediate |
| 17 | Exception Handling | `try/catch/throw`, `std::runtime_error` | 🔵 Intermediate |
| 18 | STL Vectors | `std::vector`, to-do list app | 🔵 Intermediate |
| 19 | STL Maps & Sets | `std::map`, word frequency counter | 🟣 Advanced |
| 20 | STL Algorithms | `sort`, `transform`, `count_if`, `binary_search` | 🟣 Advanced |
| 21 | Templates | Function & class templates, generic `Stack<T>` | 🟣 Advanced |
| 22 | Lambda Functions | Anonymous functions, captures, use with STL | 🟣 Advanced |
| 23 | Smart Pointers | `unique_ptr`, `shared_ptr`, no manual `delete` | 🟣 Advanced |
| 24 | Move Semantics | Rvalue refs, move constructor, move assignment | 🟣 Advanced |
| 25 | Operator Overloading | `+`, `-`, `==`, `<<` on a `Vector2D` class | 🟣 Advanced |
| 26 | Abstract Classes & Interfaces | Pure virtual functions, `Animal` hierarchy | 🟣 Advanced |
| 27 | Recursion | Tower of Hanoi, binary search, `power(base, exp)` | 🟣 Advanced |
| 28 | Linked List | `Node`, insert, delete, search, reverse | 🟣 Advanced |
| 29 | Stack & Queue | LIFO/FIFO from scratch, balanced parentheses | 🟣 Advanced |
| 30 | Student Management System | Final project — classes, vectors, file I/O, exceptions | 🟣 Advanced |

---

## ⚙️ How to Compile & Run

You need a C++17-compatible compiler.

**Linux / macOS**
```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o main
./main
```

**Windows (MinGW)**
```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o main.exe
main.exe
```

**Recommended IDEs:** VS Code (with C/C++ extension), CLion, or any terminal editor.

---

## 🏆 Progress Tracker

I built a custom interactive progress tracker for this challenge using React and the Claude API. It includes:

- ✅ Day-by-day completion tracking with XP rewards
- 📈 Rank progression system (Rookie → Apprentice → Developer → Engineer → Expert → Architect → Master)
- 🤖 AI-powered code review — paste your solution and get instant feedback
- 💬 AI C++ tutor chat for concept questions
- 💡 Progressive hints system (reveal one at a time)
- 💾 Persistent progress saved across sessions

---

## 🧠 What I Learned

This challenge covers the **full core C++ curriculum**:

- ✔️ Procedural programming fundamentals
- ✔️ The four pillars of OOP: encapsulation, inheritance, polymorphism, abstraction
- ✔️ Memory management: raw pointers → smart pointers
- ✔️ Modern C++ (C++11/14/17): move semantics, lambdas, `auto`, range-for
- ✔️ The Standard Template Library (STL): vectors, maps, sets, algorithms
- ✔️ Classic data structures: linked list, stack, queue

---

## 📌 My Daily Commit Convention

```
git commit -m "Day X: <Project Title>"
```

Example:
```
git commit -m "Day 15: Polymorphism & Virtual Functions"
```

---

## 🔧 Tools & Environment

- **Language:** C++17
- **Compiler:** GCC (g++)
- **Editor:** VS Code
- **Version Control:** Git & GitHub

---

## 📬 Connect

Feel free to fork this repo and run your own C++ Quest. If you have feedback or spot improvements, open an issue!

---

*Built as part of a self-directed AI & programming learning journey.*