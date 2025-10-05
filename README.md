# 🧭 C++ Developer Learning Journey  

## 📘 PHASE 1 — Foundations of Computing (Months 1–6)

---

### 🧠 Module 1: Boolean Logic & Reasoning

#### Topics
- Truth tables and logical equivalences  
- De Morgan’s laws  
- Implications and contradictions  
- Canonical forms (CNF, DNF)  
- Simplification and logic circuits

#### 🧩 Exercises
1. Build truth tables for `(A ∧ B) ∨ (¬A ∧ C)` and `(A ⇒ B) ∧ (B ⇒ C) ⇒ (A ⇒ C)`.  
2. Prove De Morgan’s laws by table and algebraic reasoning.  
3. Convert any logical expression into CNF and DNF.  
4. Simplify compound Boolean expressions using algebra.  
5. Construct logic gate equivalents for expressions.  
6. Write a mini truth-table generator in pseudocode.  
7. Design a logic puzzle (knights/knaves) and solve it logically.  
8. Represent simple logical circuits in binary.  
9. Combine multiple conditions into one minimized Boolean formula.  
10. Explain why tautologies always evaluate to true (with proof).

#### 🏗️ Project
**Boolean Simplifier CLI** — input a Boolean expression, output simplified form with step-by-step reductions.

---

### 🧮 Module 2: Time Complexity & Algorithmic Thinking

#### Topics
- Big O, Ω, Θ  
- Common patterns: loops, recursion, logarithms  
- Master theorem  
- Trade-offs: time vs space  
- Algorithm paradigms (divide & conquer, greedy, DP, backtracking)

#### 🧩 Exercises
1. Analyze time complexity of nested loops.  
2. Solve recurrence: `T(n)=2T(n/2)+n`.  
3. Compare two sorting algorithms by complexity.  
4. Prove that linear search is O(n).  
5. Derive Big-O of recursive Fibonacci.  
6. Identify bottlenecks in sample pseudocode.  
7. Draw recursion trees for merge sort and quick sort.  
8. Contrast O(1) vs O(log n) vs O(n) examples.  
9. Classify algorithm steps as constant, linear, or quadratic.  
10. Predict runtime behavior when input doubles.

#### 🏗️ Project
**Algorithm Benchmarker** — implement and time multiple sorting/search algorithms; display graphs of performance.

---

### 🧩 Module 3: Data Structures & Memory Layout

#### Topics
- Arrays, linked lists, stacks, queues  
- Binary trees and traversals  
- Hashing and collisions  
- Pointers and heap vs stack memory  
- Object lifetime and ownership

#### 🧩 Exercises
1. Draw memory diagrams for arrays, linked lists, and binary trees.  
2. Write pseudocode for insert/delete in a linked list.  
3. Implement a stack with array and with list.  
4. Build a queue and simulate a printer job queue.  
5. Hash names into a table with chaining for collisions.  
6. Trace pointer changes during insertion/deletion.  
7. Traverse a binary tree recursively and iteratively.  
8. Compute memory usage per node type.  
9. Demonstrate difference between shallow and deep copy.  
10. Debug a memory leak scenario by tracing allocations.

#### 🏗️ Project
**Mini Key-Value Store** — implement hash + binary tree storage supporting `insert`, `find`, and `delete` operations.

---

### 💾 Module 4: Operating Systems & File Systems

#### Topics
- What an OS does: scheduling, memory, I/O  
- Process states, context switching  
- File system hierarchy and inodes  
- System calls and permissions

#### 🧩 Exercises
1. Diagram process state transitions.  
2. Simulate round-robin scheduling manually.  
3. Compute average waiting time for given workloads.  
4. Explain difference between paging and segmentation.  
5. Build simple page-replacement simulation (FIFO vs LRU).  
6. Map virtual address → physical address manually.  
7. Describe how `read()` and `write()` work in system calls.  
8. Sketch an inode structure with metadata.  
9. Explain journaling and crash recovery.  
10. Compare FAT vs NTFS vs EXT4 at a high level.

#### 🏗️ Project
**Toy File System Simulator** — CLI app that creates, reads, deletes, and lists files in a virtual directory tree.

---

### ⚙️ Module 5: Floating Point & Numeric Precision

#### Topics
- IEEE-754 representation  
- Rounding, overflow, underflow  
- NaN and ∞ values  
- Precision errors and stability

#### 🧩 Exercises
1. Decode 32-bit float into sign/exponent/mantissa.  
2. Convert decimal → binary float manually.  
3. Test `(1 + 1e-16) – 1` in C++ and explain result.  
4. Compare float vs double in computation error.  
5. Examine rounding modes.  
6. Explore subnormal numbers.  
7. Simulate floating-point addition in reduced precision.  
8. Plot relative error vs magnitude.  
9. Identify cancellation error cases.  
10. Discuss why 0.1 + 0.2 ≠ 0.3 in binary math.

#### 🏗️ Project
**Floating-Point Visualizer** — tool that displays binary representation and rounding error for user-input numbers.

---

## 💻 PHASE 2 — Modern C++ Mastery (Months 7–18)

### 🎯 Goals
- Gain command of modern C++ (11 → 20).  
- Apply OOP, templates, STL, and concurrency effectively.  
- Build real applications and games with reusable patterns.

---

### 🧩 Module 6: Syntax, Control Flow & Functions

#### Topics
- Variables, types, scope  
- if/else, loops, switch  
- Functions, overloading, recursion  
- Input/output, error handling

#### 🧩 Exercises
1. Write a calculator using all operators.  
2. Implement Fibonacci iteratively and recursively.  
3. Create nested loop pattern generators.  
4. Convert temperature between scales.  
5. Handle input validation for user entries.  
6. Implement leap-year checker.  
7. Debug a simple division-by-zero program.  
8. Write your own `pow()` function.  
9. Practice using break/continue creatively.  
10. Compare recursion vs iteration timing.

#### 🏗️ Project
**Command-Line Utility Suite** — small tools (BMI, loan, converter) organized into a menu system.

---

### 🧩 Module 7: Object-Oriented Programming

#### Topics
- Classes, objects, encapsulation  
- Constructors/destructors  
- Inheritance, polymorphism  
- Abstract classes, virtual functions  
- Rule of Three/Five, copy/move semantics

#### 🧩 Exercises
1. Define a `Rectangle` and `Circle` class with area/perimeter.  
2. Implement constructor overloads and copy semantics.  
3. Create a class hierarchy: `Animal` → `Dog`, `Cat`.  
4. Use virtual functions for different sounds.  
5. Implement a `BankAccount` with deposit/withdraw.  
6. Track object lifetimes using constructors/destructors.  
7. Practice operator overloading (`+`, `==`, `<<`).  
8. Design a class with resource management (file handle).  
9. Experiment with slicing and `virtual` destructors.  
10. Build a small hierarchy demonstrating composition vs inheritance.

#### 🏗️ Project
**Banking System OOP** — base/derived accounts, transaction logs, interest, and transfer system.

---

### 🧩 Module 8: STL Containers & Algorithms

#### Topics
- `vector`, `list`, `map`, `unordered_map`, `set`  
- Iterators, range-based loops  
- Algorithms: `sort`, `find`, `transform`, `accumulate`, `remove_if`  
- Lambda expressions and function objects

#### 🧩 Exercises
1. Manipulate a `vector<int>` (insert/delete/search).  
2. Sort a list of structs by field using lambda.  
3. Count word frequency from input text.  
4. Compare `map` vs `unordered_map` performance.  
5. Implement LRU cache with `list` + `unordered_map`.  
6. Filter even numbers with `remove_if`.  
7. Accumulate totals from custom objects.  
8. Write comparator for custom sorting.  
9. Use `for_each` to transform data.  
10. Practice chaining multiple STL algorithms.

#### 🏗️ Project
**Student Information System** — store student/course data, compute GPAs, search and sort records.

---

### 🧩 Module 9: Templates, Exceptions & Smart Pointers

#### Topics
- Function and class templates  
- Variadic templates, specialization  
- RAII and resource management  
- Smart pointers (`unique_ptr`, `shared_ptr`, `weak_ptr`)  
- Exception safety, `try/catch`, `noexcept`

#### 🧩 Exercises
1. Write a `swap<T>` template.  
2. Build generic `Stack<T>` and `Queue<T>`.  
3. Implement `min`, `max`, and `clamp` templates.  
4. Create a template-based linked list.  
5. Use `unique_ptr` to manage dynamic arrays.  
6. Demonstrate shared ownership with `shared_ptr`.  
7. Fix circular reference using `weak_ptr`.  
8. Write and catch a custom exception.  
9. Make a safe file handler using RAII.  
10. Experiment with `constexpr` computations.

#### 🏗️ Project
**Generic Data Library** — template-based containers (Vector, List, Map) with iterators and exception safety.

---

### 🧩 Module 10: Concurrency, Files & Build Systems

#### Topics
- Threads, mutexes, condition variables  
- Atomics and async tasks  
- File I/O streams (`fstream`, `ifstream`, `ofstream`)  
- Build systems (Make, CMake)  
- Debugging and testing

#### 🧩 Exercises
1. Create multiple threads printing messages.  
2. Build producer–consumer queue with mutex.  
3. Solve dining-philosophers problem.  
4. Write async downloader simulation using `std::async`.  
5. Count words in file using multiple threads.  
6. Practice reading/writing CSV files.  
7. Create a Makefile for a small project.  
8. Write CMakeLists for multi-file build.  
9. Debug segmentation fault with GDB.  
10. Write unit tests using Google Test.

#### 🏗️ Projects
- **Web Server (Simplified)** — multithreaded request handler with static file serving.  
- **Task Manager CLI** — CRUD interface, JSON/CSV save/load, built with CMake, tested with Google Test.

---

## 🚀 PHASE 3 — Integration & Portfolio (Months 19–24)

### 🎯 Goals
- Integrate all knowledge into large projects.  
- Showcase engineering maturity: design, documentation, performance.  
- Prepare for job interviews and real-world debugging.

---

### 🧩 Capstone Project 1 – Systems Software
Choose one:  
- **Database Engine** – SQL-like interface, indexing, transactions.  
- **Compiler / Interpreter** – lexer, parser, AST, type checking, evaluation.  
- **Chat Server** – multi-threaded, client–server architecture, encryption.

---

### 🧩 Capstone Project 2 – Game / Simulation
Choose one:  
- **2D Game Engine** – sprites, physics, input, level editor.  
- **MUD (Multi-User Dungeon)** – real-time multiplayer, combat, quest engine.  
- **Chess Engine** – full rule set, AI (minimax), PGN support, replay.

---

### 🧩 Professional Polish
- Add build scripts, README, and documentation.  
- Create unit tests for major modules.  
- Refactor earlier code for modern C++ idioms.  
- Practice 50 LeetCode medium problems.  
- Write technical blog posts summarizing each project.

---

## ✅ Progress Tracker

| Phase | Module | Status |
|:------|:--------|:-------|
| Foundations | Boolean Logic | [ ] |
| Foundations | Algorithms | [ ] |
| Foundations | Data Structures | [ ] |
| Foundations | OS & File Systems | [ ] |
| Foundations | Floating Point | [ ] |
| C++ Core | Syntax & Functions | [ ] |
| C++ Core | OOP | [ ] |
| C++ Core | STL & Algorithms | [ ] |
| C++ Core | Templates & Memory | [ ] |
| C++ Core | Concurrency & Builds | [ ] |
| Integration | Capstone 1 | [ ] |
| Integration | Capstone 2 | [ ] |
| Integration | Interview Prep | [ ] |


