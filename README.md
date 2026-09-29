# Low-Level Design (LLD) Course — C++

A hands-on workspace for learning object-oriented design and common software design patterns in C++.

## Get started

Requirements: a C++17 compiler and CMake.

From this folder, configure and build:

```sh
cmake -S . -B build
cmake --build build
./build/lld_course
```

On macOS, install the Xcode Command Line Tools if `clang++` is not available (`xcode-select --install`).

Start by editing `src/main.cpp`, then work through the lessons in order. Each lesson is self-contained; compile its `starter.cpp` directly with `clang++ -std=c++17` or `g++ -std=c++17`.

## Course roadmap

1. Classes, objects, and encapsulation
2. SOLID principles and clean interfaces
3. Composition, inheritance, and polymorphism
4. UML class diagrams and relationships
5. Creational patterns: Factory, Builder, Singleton
6. Structural patterns: Adapter, Decorator, Facade
7. Behavioral patterns: Strategy, Observer, State
8. LLD interview practice: requirements, design, implementation, tests

## Suggested routine

For each design problem, write down requirements first, identify the main classes and their responsibilities, sketch relationships, implement a small working version, and add tests or example scenarios. Prefer simple designs and refactor as requirements evolve.
