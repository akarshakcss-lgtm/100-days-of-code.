# Compilation & Execution Outputs Log 🖥️

This document compiles the verified GCC compilation and runtime outputs for the preparation and deep-dive practice modules in this repository.

---

## 📑 Index of Outputs

### Foundational Preparation (August 1 – 9)

1. [Prep Day 1: Hello World](#prep-day-1-hello-world)
2. [Prep Day 2: Data Types & Sizes](#prep-day-2-data-types--sizes)
3. [Prep Day 3: Operators & Precedence](#prep-day-3-operators--precedence)
4. [Prep Day 4: Format Specifiers](#prep-day-4-format-specifiers)
5. [Prep Day 5: ASCII Table](#prep-day-5-ascii-table)
6. [Prep Day 6: Math Functions](#prep-day-6-math-functions)
7. [Prep Day 7: Control Flow](#prep-day-7-control-flow)
8. [Prep Day 8: Iteration Constructs](#prep-day-8-iteration-constructs)
9. [Prep Day 9: Functions & Pointers](#prep-day-9-functions--pointers)

### Mid-Course & End-of-Month Deep Dives (August & September)

10. [Practice Aug 14: Number Manipulation](#practice-aug-14-number-manipulation)
11. [Practice Aug 20: Prime Factorization](#practice-aug-20-prime-factorization)
12. [Practice Aug 21: Fibonacci Series](#practice-aug-21-fibonacci-series)
13. [Practice Aug 23: Floyd's Triangle](#practice-aug-23-floyds-triangle)
14. [Practice Aug 24: Base Conversions](#practice-aug-24-base-conversions)
15. [Practice Aug 27: Array Frequencies](#practice-aug-27-array-frequencies)
16. [Practice Aug 28: Statistical Computations](#practice-aug-28-statistical-computations)
17. [Practice Aug 29: Selection Sort](#practice-aug-29-selection-sort)
18. [Practice Aug 30: 2D Matrix Rotation](#practice-aug-30-2d-matrix-rotation)
19. [Practice Aug 31: Custom String Utilities](#practice-aug-31-custom-string-utilities)
20. [Practice Sep 02: Sentence Palindrome](#practice-sep-02-sentence-palindrome)
21. [Practice Sep 03: Bitwise Tricks](#practice-sep-03-bitwise-tricks)

---

## 🚀 Execution Outputs

### Prep Day 1: Hello World
**File:** `prep_day1_hello_world.c`
```text
=========================================
 Welcome to 100 Days of Code in C!       
 Setting up GCC environment and headers. 
=========================================
Hello, World from C programming!
```

---

### Prep Day 2: Data Types & Sizes
**File:** `prep_day2_data_types.c`
```text
--- C Fundamental Data Types & Sizes ---
char:        1 bytes | Min: -128, Max: 127
short:       2 bytes | Min: -32768, Max: 32767
int:         4 bytes | Min: -2147483648, Max: 2147483647
long:        4 bytes | Min: -2147483648, Max: 2147483647
long long:   8 bytes | Min: -9223372036854775808, Max: 9223372036854775807
float:       4 bytes | Min: 1.175494e-38, Max: 3.402823e+38
double:      8 bytes | Min: 2.225074e-308, Max: 1.797693e+308
```

---

### Prep Day 3: Operators & Precedence
**File:** `prep_day3_operators.c`
```text
Arithmetic: a + b = 17, a - b = 7, a * b = 60, a / b = 2, a % b = 2
Relational: a > b = 1, a == b = 0, a != b = 1
Logical: (a > 10 && b < 10) = 1, (a < 5 || b > 2) = 1, !(a == b) = 1
Bitwise: a & b = 4, a | b = 13, a ^ b = 9, ~a = -13, a << 1 = 24, a >> 1 = 6
```

---

### Prep Day 4: Format Specifiers
**File:** `prep_day4_format_specifiers.c`
```text
Integer padding: [00042] or [42   ]
Floating point precision: [3.14] or [3.1416]
Scientific notation: [2.718282e+00]
Hexadecimal: [2A] and Octal: [52]
Character: [A], String: [Akarshak]
```

---

### Prep Day 5: ASCII Table
**File:** `prep_day5_ascii_table.c`
```text
--- ASCII Table Sample (32 to 126) ---
 32:    33: !  34: "  35: #  36: $  37: %  
 38: &  39: '  40: (  41: )  42: *  43: +  
 44: ,  45: -  46: .  47: /  48: 0  49: 1  
 50: 2  51: 3  52: 4  53: 5  54: 6  55: 7  
 56: 8  57: 9  58: :  59: ;  60: <  61: =  
 62: >  63: ?  64: @  65: A  66: B  67: C  
 68: D  69: E  70: F  71: G  72: H  73: I  
 74: J  75: K  76: L  77: M  78: N  79: O  
 80: P  81: Q  82: R  83: S  84: T  85: U  
 86: V  87: W  88: X  89: Y  90: Z  91: [  
 92: \  93: ]  94: ^  95: _  96: `  97: a  
 98: b  99: c 100: d 101: e 102: f 103: g  
104: h 105: i 106: j 107: k 108: l 109: m  
110: n 111: o 112: p 113: q 114: r 115: s  
116: t 117: u 118: v 119: w 120: x 121: y  
122: z 123: { 124: | 125: } 126: ~  
```

---

### Prep Day 6: Math Functions
**File:** `prep_day6_math_functions.c`
```text
sqrt(9.00) = 3.00
pow(9.00, 3.00) = 729.00
fabs(-4.75) = 4.75
ceil(-4.75) = -4.00
floor(-4.75) = -5.00
```

---

### Prep Day 7: Control Flow
**File:** `prep_day7_control_flow.c`
```text
Result: PASS
Grade assigned: A
```

---

### Prep Day 8: Iteration Constructs
**File:** `prep_day8_loops_intro.c`
```text
For Loop (1 to 5): 1 2 3 4 5 
While Loop with continue: 1 2 4 5 6 
Do-While Loop: 1 2 3 
```

---

### Prep Day 9: Functions & Pointers
**File:** `prep_day9_functions_intro.c`
```text
add(10, 20) = 30
Before swap: x=10, y=20
After swap:  x=20, y=10
```

---

### Practice Aug 14: Number Manipulation
**File:** `practice_aug14_number_manipulation.c`
```text
Number: 12345
Total Digits: 5
Sum of Digits: 15
Reversed: 54321
```

---

### Practice Aug 20: Prime Factorization
**File:** `practice_aug20_prime_factorization.c`
```text
Prime factors of 315: 3 3 5 7
Prime factors of 84: 2 2 3 7
```

---

### Practice Aug 21: Fibonacci Series
**File:** `practice_aug21_fibonacci_series.c`
```text
First 10 Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
```

---

### Practice Aug 23: Floyd's Triangle
**File:** `practice_aug23_pattern_bonus.c`
```text
--- Floyd's Triangle ---
1   
2   3   
4   5   6   
7   8   9   10  
11  12  13  14  15  
```

---

### Practice Aug 24: Base Conversions
**File:** `practice_aug24_number_systems.c`
```text
Decimal:     42
Octal:       52
Hexadecimal: 2A
32-bit Bin:  00000000000000000000000000101010
```

---

### Practice Aug 27: Array Frequencies
**File:** `practice_aug27_array_frequency.c`
```text
Element Frequencies:
2 appears 3 time(s)
3 appears 2 time(s)
5 appears 1 time(s)
8 appears 2 time(s)
1 appears 1 time(s)
```

---

### Practice Aug 28: Statistical Computations
**File:** `practice_aug28_array_stats.c`
```text
Mean: 20.12
Variance: 49.33
Standard Deviation: 7.02
```

---

### Practice Aug 29: Selection Sort
**File:** `practice_aug29_sorting_algorithms.c`
```text
Selection Sorted Array: 11 12 22 25 64 
```

---

### Practice Aug 30: 2D Matrix Rotation
**File:** `practice_aug30_matrix_transforms.c`
```text
Rotated 90 Degrees Clockwise:
7 4 1 
8 5 2 
9 6 3 
```

---

### Practice Aug 31: Custom String Utilities
**File:** `practice_aug31_string_utilities.c`
```text
Length: 5
Copied string: Hello
Compare with 'Hello': 0
Compare with 'World': -15
```

---

### Practice Sep 02: Sentence Palindrome
**File:** `practice_sep02_palindrome_variations.c`
```text
"A man, a plan, a canal: Panama" -> Palindrome
"race a car" -> Not Palindrome
```

---

### Practice Sep 03: Bitwise Tricks
**File:** `practice_sep03_bitwise_tricks.c`
```text
Is 16 power of two? Yes
Is 18 power of two? No
Set bits in 29: 4
Single unique number in [4, 1, 2, 1, 2]: 4
```
