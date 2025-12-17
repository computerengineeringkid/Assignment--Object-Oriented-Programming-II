# Object-Oriented Programming II - Assignment

**Author:** Amari B
**Version:** 3 (Draft)

## Overview

This program demonstrates key Object-Oriented Programming (OOP) principles in C++ through a simple combat simulation between a Ninja and a Pirate character.

## OOP Concepts Demonstrated

### 1. Encapsulation

- Private member variables (`name`, `health`) in the `Character` class
- Public getter/setter methods to access and modify private data
- Data hiding ensures controlled access to internal state

### 2. Inheritance

- `Ninja` and `Pirate` classes inherit from the base `Character` class
- Child classes reuse parent class functionality (`getName()`, `getHealth()`)
- Each derived class extends the base with unique behaviors

### 3. Polymorphism / Abstraction

- Pure virtual function `specialAction()` in `Character` class
- `Character` is an abstract class (cannot be instantiated directly)
- `Ninja` and `Pirate` override `specialAction()` with unique implementations
- Runtime polymorphism allows different behaviors through the same interface

## Class Hierarchy

```
       Character (Abstract Base Class)
          /              \
       Ninja            Pirate
```

## Classes

### Character (Base Class)

| Member | Type | Access | Description |
|--------|------|--------|-------------|
| `name` | string | private | Character's name |
| `health` | int | private | Health points (default: 100) |
| `getName()` | method | public | Returns character name |
| `getHealth()` | method | public | Returns current health |
| `setHealth(int)` | method | public | Sets health (min: 0) |
| `specialAction()` | virtual | public | Pure virtual - must be overridden |

### Ninja (Derived Class)

| Member | Description |
|--------|-------------|
| `throwninjasstar()` | Outputs ninja star attack message |
| `specialAction()` | Staff attack (overrides base class) |

### Pirate (Derived Class)

| Member | Description |
|--------|-------------|
| `swooshsword()` | Outputs sword attack message |
| `specialAction()` | Bird attack (overrides base class) |

## How to Compile and Run

```bash
# Compile
g++ -o game OOPversion2.cpp

# Run
./game
```

## Expected Output

```
Kamau I am throwing stars!
Ramsay the pirate I am Swooshing my Sword!
Kamau Ninja hits the pirate with his ninja staff!
Ramsay the pirate The Pirates bird attacks!
```

## Resources Used

- W3Schools C++ Tutorials
- Stack Overflow

## Future Improvements

- Implement actual combat mechanics with health reduction
- Add more character types
- Create a turn-based battle system
