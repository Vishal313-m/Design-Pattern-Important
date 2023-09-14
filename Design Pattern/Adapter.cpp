LINK -    https://youtu.be/JxveJ1pI5fc?si=KkWAiGac8oAABY14
LINK -     https://youtu.be/BLaz_Nct1eI?si=AXDBtlHG7L98i4xG

 
  Adapter is a structural design pattern, which allows incompatible objects to collaborate.

The Adapter acts as a wrapper between two objects. It catches calls for one object and transforms them to format and interface recognizable by the second object.

What is the Adapter Design Pattern?

Imagine you have two things that don't quite fit together, like a square peg and a round hole. 
  The Adapter Design Pattern is like a special tool that helps you make these two things work together.

In programming, it's a way to make one class (or object) work with another class that it wouldn't normally work with because they have different interfaces (
like different shapes). It acts like a bridge between them, making them work together seamlessly.

Why do we need it?

Think of it like this: You have a cool new video game console, but you have an old TV with only an older type of video input. 
You can't connect them directly. That's where an adapter comes in. It helps you plug your new console into your old TV so you can play your games.

In programming, we need the Adapter Pattern when we want to use some existing code or classes, but they don't quite match what we need for our current project. 
  Instead of changing the existing code, which could break other things, we create an adapter to make them work together without altering the original code.

How can we implement it in C++?

In C++, you can implement the Adapter Pattern by creating a new class that acts as the "adapter" between the two incompatible classes. Here's a simple example:

Let's say you have a class OldPrinter with a method printDocument(), but you need to use it with a new system that expects a class NewPrinter with a method 
  sendToPrinter().

cpp
Copy code
// Old Printer
class OldPrinter {
public:
    void printDocument() {
        // Old way to print
    }
};

// New Printer
class NewPrinter {
public:
    void sendToPrinter() {
        // New way to print
    }
};

// Adapter to make OldPrinter work with NewPrinter
class PrinterAdapter {
private:
    OldPrinter oldPrinter;

public:
    void sendToPrinter() {
        oldPrinter.printDocument(); // Adapt the old method to the new one
    }
};
Now you can use PrinterAdapter to make your old printer work with the new system.

Pros and Cons:

Pros:

Flexibility: You can make existing classes work with new code without changing the existing code.
Reusability: Adapters can be reused for different situations where you need to connect incompatible code.
Saves Time: It saves time because you don't have to rewrite or modify existing code.
Cons:

Complexity: Sometimes, using adapters can make your code more complex with extra classes.
Performance Overhead: In some cases, adapters can introduce a small performance overhead.
So, just like using an adapter to connect your old TV and new game console, the Adapter Design Pattern helps you connect different parts of your code that wouldn't normally fit together. It's like a handy tool in your programming toolbox!
