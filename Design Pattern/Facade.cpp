1--   https://www.youtube.com/watch?v=Dv88HvVeo3M&t=300s
 2--   https://medium.com/@andreaspoyias/design-patterns-a-quick-guide-to-facade-pattern-16e3d2f1bfb6

   
 Imagine you have a complicated video game with lots of different parts: the characters, the graphics, the sound, and the game logic. 
   Each of these parts has its own rules and code.

Now, think about how you interact with the game. You don't need to know all the details of how the game works behind the scenes, right? 
   You just press some buttons, and things happen on the screen.

The Facade Design Pattern is like having a game controller. It's a way to make all the complicated stuff behind the scenes easier to use.
   Here's why we need it:

1. Simplicity: It makes it easier to use a complex system by providing a simple interface. Like using a remote control for your TV
instead of knowing all the technical details.

2. Hide Complexity: It hides the messy details of how things work internally. You don't need to know how the game engine, graphics, or 
  sound system work to play the game.

3. Organization: It organizes the code and makes it more manageable. Think of it as sorting your toys into different boxes to keep your room tidy.

Now, let's talk about implementing the Facade Design Pattern in C++:

cpp
Copy code
#include <iostream>

// Let's say we have a complex subsystem with different parts.

class Engine {
public:
    void start() {
        std::cout << "Engine started." << std::endl;
    }
};

class Lights {
public:
    void turnOn() {
        std::cout << "Lights on." << std::endl;
    }
};

class SoundSystem {
public:
    void playMusic() {
        std::cout << "Playing music." << std::endl;
    }
};

// Now, we create a Facade class that simplifies using these subsystems.

class GameFacade {
private:
    Engine engine;
    Lights lights;
    SoundSystem soundSystem;

public:
    void startGame() {
        engine.start();
        lights.turnOn();
        soundSystem.playMusic();
        std::cout << "Game is ready to play!" << std::endl;
    }
};

int main() {
    // Using the Facade to start the game without worrying about the subsystems.
    GameFacade game;
    game.startGame();

    return 0;
}
Pros of the Facade Design Pattern:

1. Simplification: It simplifies complex systems, making them easier to use.

2. Abstraction: It hides the internal details, so you don't need to know how everything works.

3. Organization: It helps keep code organized and clean.

Cons of the Facade Design Pattern:

1. Limited Control: It might limit your ability to control or customize individual parts of the system if you need to.

2. Additional Layer: Adding a facade can introduce an extra layer of code, which might affect performance in some cases.

In simple terms, the Facade Design Pattern is like a remote control for a complex system, making it easier to use and understand. It's great for simplifying things but can limit some advanced options.
