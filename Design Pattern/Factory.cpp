What is the Factory Design Pattern?

Think of the Factory Design Pattern like a magical factory that makes toys.
Imagine you love stuffed animals, and you want a new stuffed animal toy. 
Instead of making it yourself (which could be complicated), you visit the magical stuffed animal factory, 
tell them what kind of animal you want, and they give you the perfect toy without you needing to know how it was made.

Why do we need it?

Imagine you're building a computer game where different types of monsters appear. 
  You don't want to create each monster manually because it's time-consuming and error-prone. 
  Instead, you can use the Factory Design Pattern to create monsters on demand. 
  It makes your code more organized, maintainable, and flexible.

#include <iostream>
using namespace std;

// The base Shape class
class Shape {
public:
    virtual void draw() = 0;  //  Pure Virtual Function Abstract class is made because taki koi direct object bana k uske member ko access na kar paaye
  
// Any class that inherits from shape will have to implement draw() . Now classes that is inherit from shape class like circle , square class will have to implement this drwa() function.
//Agar kisi class mai pure virtual function mojud hai toh aap uski child class banayenge tabhi aap uss class ko use kar payenge
// kyunki  shape class ka object ban nhi payega  toh shape class k woh member jo define hai unko access krne k liye  apko shape class ka object banane ki permission nhi hai lei=kin child class bana skte hai or waha se shape class k member ko use kr skte hai
// A virtual function is a member function in the base class  that you redefine in a derived class . Declared using virtual keyword
// There is a necessity to use the   single pointer to refer to all the objects of the different classes.So,we create the pointer to the base class that refers to all the the derived objects 
};

// Concrete Circle class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << std::endl;
    }
};

// Concrete Square class
class Square : public Shape {
public:
    void draw() override {
      cout << "Drawing a Square." << std::endl;
    }
};

// The ShapeFactory class
class ShapeFactory {
public:
    static Shape* createShape(const string& shapeType) {
      // WHY DO YO MAKE FUNCTION STATIC
      //Ans---- I can access the function without the object of the class. (I would have to create an ShapeFactory object to access this function)
      //It is easier to me to like this i dont create any obeject . I can acess the function using class itself
        if (shapeType == "Circle") {
            return new Circle();
        } else if (shapeType == "Square") {
            return new Square();
        } else {
            return nullptr; // Return null for unknown shapes
        }
    }
};

int main() {
    Shape* shape1 = ShapeFactory::createShape("Circle");
    shape1->draw();

    Shape* shape2 = ShapeFactory::createShape("Square");
    shape2->draw();

    // Remember to delete the objects to avoid memory leaks
    delete shape1;
    delete shape2;

    return 0;
}

Pros and Cons:

Pros:

-Flexibility: You can easily add new types of objects without changing existing code.
-Encapsulation: The creation logic is separated from the client code, making it easier to manage and maintain.
-Reusability: You can reuse the factory for creating similar objects throughout your program.
-Code Organization: It makes your code more organized and readable.
-You avoid tight coupling between the creator and the concrete products.
 -Single Responsibility Principle. You can move the product creation code into one place in the program, making the code easier to support.
- Open/Closed Principle. You can introduce new types of products into the program without breaking existing client code.
Cons:
-The code may become more complicated since you need to introduce a lot of new subclasses to implement the pattern. The best case scenario is when you’re introducing the pattern into an existing hierarchy of creator classes.
-Complexity: In some cases, the Factory Pattern can add extra complexity to the code.
-Increased Classes: It can lead to a higher number of classes if you have many different types of objects to create.
