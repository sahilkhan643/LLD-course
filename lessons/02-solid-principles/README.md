# Lesson 2: Encapsulation in C++

## Concept

Encapsulation keeps an object's data and behavior together while controlling which parts of its state can be accessed from outside the class. In C++, access modifiers help enforce this:

- `private` members are accessible only inside the class.
- `public` methods provide the class's supported interface.
- Getters expose selected values without exposing the underlying data directly.
- Setters allow controlled updates to private data.

## Example: `SportsCar`

The `SportsCar` class stores its brand, model, engine state, speed, gear, and tyre company as private data. Public methods such as `startEngine()`, `accelerate()`, `brake()`, and `stopEngine()` let callers operate the car without directly changing its internal state.

The example also demonstrates a getter (`getSpeed()`) and a setter (`setTyreCompany()`). The commented-out code shows why directly changing `currentSpeed` from `main()` is not allowed: it is private. The getter provides read access to the speed instead.

## Try it

Build and run this lesson from this directory:

```sh
clang++ -std=c++17 starter.cpp -o lesson2
./lesson2
```

Use `g++` instead of `clang++` if that is your installed compiler. Then try calling `setTyreCompany()` and `getTyreCompany()` from `main()` and print the updated tyre company.

## Key takeaway

Keep class data private by default and expose only the operations callers need. This protects the object's state and makes future implementation changes safer.
