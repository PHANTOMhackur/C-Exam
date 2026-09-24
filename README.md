# C++ Exam Programs

This repository contains five C++ programs demonstrating important Object-Oriented Programming (OOP) concepts.

## Programs

### Q1 - Student

**File:** `Q1/student.cpp`

Demonstrates:

* Classes and objects
* Constructor
* Array of objects
* Member functions
* For loop

The program creates three Student objects with their names and roll numbers and displays their details.

---

### Q2 - Car

**File:** `Q2/Car.cpp`

Demonstrates:

* Classes and objects
* Encapsulation
* Private data members
* Setter functions
* Getter functions

The program creates a Car object and stores its model, year and speed using setter functions. The values are displayed using getter functions.

---

### Q3 - Device

**File:** `Q3/Device.cpp`

Demonstrates:

* Inheritance
* Base class
* Derived classes
* Code reuse

`Device` is the base class, while `Laptop` and `Smartphone` are derived classes.

Both derived classes use the functions of the Device class and provide their own `display()` functions.

---

### Q4 - Device Discount

**File:** `Q4/Device-1.cpp`

Demonstrates:

* Inheritance
* Function overriding
* Virtual functions
* Runtime polymorphism
* Base class pointers

`Device` contains a virtual `calculateDiscount()` function.

`Laptop` overrides it with a 10% discount, while `Smartphone` overrides it with a 15% discount.

Device pointers are used to access the derived class functions at runtime.

---

### Q5 - Animal

**File:** `Q5/Animal.cpp`

Demonstrates:

* Abstract classes
* Pure virtual functions
* Inheritance
* Runtime polymorphism

`Animal` is an abstract class containing two pure virtual functions:

```cpp
virtual void makeSound() = 0;
virtual void move() = 0;
```

`Lion` and `Fish` inherit from Animal and provide their own implementations.

---

## OOP Concepts Covered

| Program | Main Concept                  |
| ------- | ----------------------------- |
| Q1      | Classes, Objects, Constructor |
| Q2      | Encapsulation                 |
| Q3      | Inheritance                   |
| Q4      | Runtime Polymorphism          |
| Q5      | Abstraction                   |


## How to Compile

Using g++:

```bash
g++ student.cpp -o student
```

Run:

```bash
./student
```

For Windows:

```bash
student.exe
```

Example:

```bash
g++ Car.cpp -o Car
Car.exe
```

## Project Structure

```text
C++ Exam/
│
├── README.md
│
├── Q1/
│   └── student.cpp
│
├── Q2/
│   └── Car.cpp
│
├── Q3/
│   └── Device.cpp
│
├── Q4/
│   └── Device-1.cpp
│
└── Q5/
    └── Animal.cpp
```

## Conclusion

These five programs cover the basic and important OOP concepts in C++:

**Classes → Encapsulation → Inheritance → Polymorphism → Abstraction**
