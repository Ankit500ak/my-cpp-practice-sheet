# 🚀 My C++ Journey: From Beginner to Advanced

## 📅 Day 1: The Beginning

```
╔════════════════════════════════════════════════════════╗
║         Welcome to My C++ Learning Adventure!          ║
║                                                        ║
║  "Every expert was once a beginner who never gave up"  ║
╚════════════════════════════════════════════════════════╝
```

Welcome! This repository documents my C++ learning journey, showcasing programs I've built from basic "Hello World" to more complex algorithms and pattern-based solutions. Each program represents a step forward in mastering C++.

---

## 📚 Learning Path Overview

### 🌱 **Level 1: Beginner Basics**
Getting started with C++ fundamentals

### 🌳 **Level 2: Core Concepts**
Building mathematical and logical thinking

### 🌲 **Level 3: Advanced Patterns**
Mastering repetition and complex structures

---

## Table of Contents

### Basic Programs (Level 1: Beginner)
- [Hello](#hello) - Hello World program
- [Add](#add) - Simple addition program
- [Add Function](#add-function) - Addition using functions

### Mathematical Operations (Level 2: Core Concepts)
- [Calculator](#calculator) - Multi-operation calculator (+, -, *, /, %, ^)
- [Factorial](#factorial) - Calculate factorial of a number
- [Pow](#pow) - Power/exponentiation operations
- [Prime](#prime) - Prime number checker
- [Sum of Digits](#sum-of-digits) - Calculate sum of digits in a number

### Number Conversions (Level 2: Core Concepts)
- [Binary to Decimal](#binary-to-decimal) - Convert binary numbers to decimal
- [Decimal to Binary](#decimal-to-binary) - Convert decimal numbers to binary
- [Reverse a Number](#reverse-a-number) - Reverse the digits of a number

### Pattern Programs (Level 3: Advanced)
- [Pattern 1](#pattern-1) - Pattern printing 1
- [Pattern 2](#pattern-2) - Pattern printing 2
- [Pattern 3](#pattern-3) - Pattern printing 3
- [Pattern 4](#pattern-4) - Pattern printing 4
- [Pattern 5](#pattern-5) - Pattern printing 5
- [Pattern 6](#pattern-6) - Pattern printing 6
- [Pattern 7](#pattern-7) - Pattern printing 7
- [Pattern 8](#pattern-8) - Pattern printing 8
- [Pattern 10](#pattern-10) - Pattern printing 10
- [Pattern 11](#pattern-11) - Pattern printing 11
- [Pattern 12](#pattern-12) - Pattern printing 12
- [Pattern 13](#pattern-13) - Pattern printing 13

### String & Character Programs (Level 2: Core Concepts)
- [Alphabets](#alphabets) - Alphabet printing/operations
- [Digits](#digits) - Digit operations

### Real-world Applications (Level 2-3: Core to Advanced)
- [Grade](#grade) - Grade calculation system
- [Maximum](#maximum) - Find maximum value
- [Profit Loss](#profit-loss) - Profit/loss calculation
- [Swap](#swap) - Swap variables/values
- [Series](#series) - Series calculations

---

## Program Details

### Hello
**File:** `hello/hello.cpp`
- **Description:** Basic Hello World program with user input
- **Features:** Takes a number as input and displays greeting with the number

### Add
**File:** `add/add.cpp`
- **Description:** Simple addition of numbers
- **Features:** Basic arithmetic operation

### Add Function
**File:** `add function/addfunction.cpp`
- **Description:** Addition using functions
- **Features:** Demonstrates function usage and return values
- **Example:** Adds 5 and 6

### Calculator
**File:** `calculator/calculator.cpp`
- **Description:** Multi-operation calculator
- **Operations:** 
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
  - Modulus (%)
  - Power (^)
- **Features:** User selects operation with character input

### Factorial
**File:** `factorial/factorial.cpp`
- **Description:** Calculate factorial of a number
- **Features:** Uses loop to calculate factorial and displays each step

### Pow
**File:** `pow/pow.cpp`
- **Description:** Power/exponentiation operations
- **Features:** Calculate powers of numbers

### Prime
**File:** `prime/prime.cpp`
- **Description:** Check if a number is prime
- **Features:** Determines if input number is prime or not

### Sum of Digits
**File:** `sum of digits/sum_of_digits.cpp`
- **Description:** Calculate sum of all digits in a number
- **Features:** Extracts and sums individual digits

### Binary to Decimal
**File:** `binary to decimal/binary_to_decimal.cpp`
- **Description:** Convert binary numbers to decimal
- **Features:** Binary to decimal conversion logic

### Decimal to Binary
**File:** `decimal to binary/decimal_to_binary.cpp`
- **Description:** Convert decimal numbers to binary
- **Features:** Decimal to binary conversion logic

### Reverse a Number
**File:** `reverse a number/reverse_a_number.cpp`
- **Description:** Reverse the digits of a number
- **Features:** Reverses number order

### Alphabets
**File:** `alphabets/alphabets.cpp`
- **Description:** Alphabet printing/operations
- **Features:** Works with alphabetic characters

### Digits
**File:** `digits/digits.cpp`
- **Description:** Digit operations
- **Features:** Performs operations on digits

### Grade
**File:** `Grade/grade.cpp`
- **Description:** Grade calculation system
- **Features:** Calculates grades based on marks/score

### Maximum
**File:** `maximum/maximum.cpp`
- **Description:** Find maximum value
- **Features:** Determines the largest value from inputs

### Profit Loss
**File:** `profitloss/profitloss.cpp`
- **Description:** Profit/loss calculation
- **Features:** Calculates profit or loss based on cost and selling price

### Swap
**File:** `swap/swap.cpp`
- **Description:** Swap variables/values
- **Features:** Exchanges values between variables

### Series
**File:** `series/series.cpp`
- **Description:** Series calculations
- **Features:** Performs mathematical series operations

### Pattern Programs (1-13)
**Files:** `patterns/pattern[N]/pattern[N].cpp`
- **Description:** Various pattern printing programs
- **Features:** Generate ASCII art patterns of different designs

---

## How to Compile and Run

### Using the Build Task
1. Open the desired `.cpp` file in VS Code
2. Use the default build task: `C/C++: cl.exe build active file` (Ctrl+Shift+B)
3. Run the generated `.exe` file from the terminal

### Manual Compilation
```bash
cl.exe /Zi /EHsc /nologo /Fe<filename>.exe <filename>.cpp
```

### Example
```bash
cd hello
cl.exe /Zi /EHsc /nologo /Fehello.exe hello.cpp
hello.exe
```

---

## Program Structure
- Each program is in its own folder (e.g., `hello/`, `calculator/`, etc.)
- Each folder contains the `.cpp` source file and `.ilk` debug information file
- Compiled `.exe` files are generated in the same folder as the source code

---

## Requirements
- C++ Compiler (Microsoft Visual C++ - cl.exe)
- VS Code with C++ extensions

---

## Notes
- All programs use standard input/output (`iostream`)
- Programs demonstrate fundamental C++ concepts
- Suitable for learning and practice
