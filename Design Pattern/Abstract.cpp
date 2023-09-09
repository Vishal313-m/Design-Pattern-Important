#Link -- https://www.youtube.com/watch?v=17i8a-pUtx8&t=202s

#Medium Article --  https://medium.com/@andreaspoyias/design-patterns-a-quick-guide-to-abstract-factory-ab500dc12e6c

What is the Abstract Factory Design Pattern?
Imagine you're building a toy factory, and you want to create different types of toys, like cars, robots, and dolls.
  Each type of toy has its own parts, like wheels, arms, and dresses. 
  The abstract factory design pattern helps you make these toys and their parts in a organized way.

Why Do We Need It?
Think of it like this: instead of making each toy and its parts one by one, the abstract factory pattern lets you create different families of toys and their parts
This way, if you want to make a car, you just tell the car factory to make it, and it knows how to make all the car parts.


  C++ IMPLEMENTATION 
  #include <iostream>
#include <string>

// Abstract base class for Vehicle
class Vehicle {
public:
    virtual void displayInfo() = 0;
};

// Concrete class for Car
class Car : public Vehicle {
public:
    void displayInfo() override {
        std::cout << "This is a car." << std::endl;
    }
};

// Concrete class for Bike
class Bike : public Vehicle {
public:
    void displayInfo() override {
        std::cout << "This is a bike." << std::endl;
    }
};

// Abstract base class for Vehicle Part
class VehiclePart {
public:
    virtual void displayPartInfo() = 0;
};

// Concrete class for Car Part
class CarPart : public VehiclePart {
public:
    void displayPartInfo() override {
        std::cout << "This is a car part." << std::endl;
    }
};

// Concrete class for Bike Part
class BikePart : public VehiclePart {
public:
    void displayPartInfo() override {
        std::cout << "This is a bike part." << std::endl;
    }
};

// Abstract Factory class for creating vehicles and their parts
class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
    virtual VehiclePart* createVehiclePart() = 0;
};

// Concrete Factory for creating Cars and Car Parts
class CarFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override {
        return new Car();
    }

    VehiclePart* createVehiclePart() override {
        return new CarPart();
    }
};

// Concrete Factory for creating Bikes and Bike Parts
class BikeFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override {
        return new Bike();
    }

    VehiclePart* createVehiclePart() override {
        return new BikePart();
    }
};

int main() {
    // Create a car factory
    VehicleFactory* carFactory = new CarFactory();

    // Create a car and a car part using the car factory
    Vehicle* myCar = carFactory->createVehicle();
    VehiclePart* carWheel = carFactory->createVehiclePart();

    // Display information about the car and car part
    myCar->displayInfo();
    carWheel->displayPartInfo();

    // Create a bike factory
    VehicleFactory* bikeFactory = new BikeFactory();

    // Create a bike and a bike part using the bike factory
    Vehicle* myBike = bikeFactory->createVehicle();
    VehiclePart* bikeSeat = bikeFactory->createVehiclePart();

    // Display information about the bike and bike part
    myBike->displayInfo();
    bikeSeat->displayPartInfo();

    // Clean up memory
    delete carFactory;
    delete myCar;
    delete carWheel;

    delete bikeFactory;
    delete myBike;
    delete bikeSeat;

    return 0;
}

Pros of Factory Design Pattern:

Separation of Concerns: It helps keep different parts of your code separate. Factories know how to create objects, so you don't need to worry about the details when you want to create something.
Scalability: It's easy to add new types of toys or parts by creating new factories, without changing existing code.
Code Reusability: You can reuse the same factories to make similar objects in different parts of your program.
Cons of Factory Design Pattern:

Complexity: For simple cases, using factories might be overkill and make your code more complex than needed.
Overhead: There's a bit of extra code involved in creating factories and classes for each type of object, which can make your codebase larger.
I hope this helps you understand the abstract factory design pattern! It's like a blueprint for making different types of things in a neat and organized way.




User
implement whole code of abstract factory design pattern in c++
ChatGPT
Certainly, I can provide you with a basic implementation of the abstract factory design pattern in C++. In this example, we'll create a simplified version for creating different types of vehicles and their parts: cars and bikes.

cpp
Copy code
#include <iostream>
#include <string>

// Abstract base class for Vehicle
class Vehicle {
public:
    virtual void displayInfo() = 0;
};

// Concrete class for Car
class Car : public Vehicle {
public:
    void displayInfo() override {
        std::cout << "This is a car." << std::endl;
    }
};

// Concrete class for Bike
class Bike : public Vehicle {
public:
    void displayInfo() override {
        std::cout << "This is a bike." << std::endl;
    }
};

// Abstract base class for Vehicle Part
class VehiclePart {
public:
    virtual void displayPartInfo() = 0;
};

// Concrete class for Car Part
class CarPart : public VehiclePart {
public:
    void displayPartInfo() override {
        std::cout << "This is a car part." << std::endl;
    }
};

// Concrete class for Bike Part
class BikePart : public VehiclePart {
public:
    void displayPartInfo() override {
        std::cout << "This is a bike part." << std::endl;
    }
};

// Abstract Factory class for creating vehicles and their parts
class VehicleFactory {
public:
    virtual Vehicle* createVehicle() = 0;
    virtual VehiclePart* createVehiclePart() = 0;
};

// Concrete Factory for creating Cars and Car Parts
class CarFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override {
        return new Car();
    }

    VehiclePart* createVehiclePart() override {
        return new CarPart();
    }
};

// Concrete Factory for creating Bikes and Bike Parts
class BikeFactory : public VehicleFactory {
public:
    Vehicle* createVehicle() override {
        return new Bike();
    }

    VehiclePart* createVehiclePart() override {
        return new BikePart();
    }
};

int main() {
    // Create a car factory
    VehicleFactory* carFactory = new CarFactory();

    // Create a car and a car part using the car factory
    Vehicle* myCar = carFactory->createVehicle();
    VehiclePart* carWheel = carFactory->createVehiclePart();

    // Display information about the car and car part
    myCar->displayInfo();
    carWheel->displayPartInfo();

    // Create a bike factory
    VehicleFactory* bikeFactory = new BikeFactory();

    // Create a bike and a bike part using the bike factory
    Vehicle* myBike = bikeFactory->createVehicle();
    VehiclePart* bikeSeat = bikeFactory->createVehiclePart();

    // Display information about the bike and bike part
    myBike->displayInfo();
    bikeSeat->displayPartInfo();

    // Clean up memory
    delete carFactory;
    delete myCar;
    delete carWheel;

    delete bikeFactory;
    delete myBike;
    delete bikeSeat;

    return 0;
}
Pros of Factory Design Pattern:

-Separation of Concerns: It helps keep different parts of your code separate. 
Factories know how to create objects, so you don't need to worry about the details when you want to create something.

  -Scalability: It's easy to add new types of toys or parts by creating new factories, without changing existing code.

  -Code Reusability: You can reuse the same factories to make similar objects in different parts of your program.

-  You can be sure that the products you’re getting from a factory are compatible with each other.
 -You avoid tight coupling between concrete products and client code.
- Single Responsibility Principle. You can extract the product creation code into one place, making the code easier to support.
 -Open/Closed Principle. You can introduce new variants of products without breaking existing client code.


  Cons of Factory Design Pattern:

-Complexity: For simple cases, using factories might be overkill and make your code more complex than needed.
-Overhead: There's a bit of extra code involved in creating factories and classes for each type of object, which can make your codebase larger.
  - The code may become more complicated than it should be, since a lot of new interfaces and classes are introduced along with the pattern.






