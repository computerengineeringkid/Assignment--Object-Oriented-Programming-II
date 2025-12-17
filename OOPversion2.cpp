// Document start. Done with the help of W3schools and Stack Overflow. - Amari B
#include <iostream>
#include <string>
using namespace std;

// Character class one. Done with encapsulation.
class Character {
private:
    std::string name;
    int health;

public:
    Character(std::string n) : name(n), health(100) {}
    std::string getName() const { return name; }
    int getHealth() const { return health; }
    // The setter I added WITH output
    void setHealth(int h) { health = (h >= 0) ? h : 0; cout << name << " health set to " << health << endl; }
    // A Virtual function for abstraction (I think this is correct. May have to fix this later... personal note...)
    virtual void specialAction() = 0;
}; // <--- Was missing this.. Fixed now

// Character class two. For the ninja.
class Ninja : public Character {
public:
    Ninja(std::string name) : Character(name) {}
    void throwninjasstar() {
        std::cout << getName() << " I am throwing stars!" << std::endl;
    }
    // A new special action for the ninja (just an add on)
    void specialAction() override { cout << getName() << " Ninja hits the pirate with his ninja staff!" << endl; }
};

// Character class three. For the pirate.
class Pirate : public Character {
public:
    Pirate(std::string name) : Character(name) {}
    void swooshsword() {
        std::cout << getName() << " I am Swooshing my Sword!" << std::endl;
    }

    // A new special action for the pirate (just an add on)
    void specialAction() override { cout << getName() << " The Pirates bird attacks!" << endl; }
}; // <--- Was missing this.. Fixed now (AGAIN)
// Main function gameplay loop.
int main() {
    Ninja ninja("Kamau");
    Pirate pirate("Ramsay the pirate");

    // Simulates the fight...
    ninja.throwninjasstar();
    pirate.swooshsword();

    // Now including the new special actions I added on...
    ninja.specialAction();
    pirate.specialAction();

    return 0;
}
//I need to learn how to implement the special actions better in this.
//will add more to this as i come up with ideas. Draft NUMBER 3.
//Amari B...
