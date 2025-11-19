#include <iostream>
using namespace std;

class Hero {
private:
    int health;

public:
    char level;

    // Default Constructor
    Hero() {
        cout << "Default Constructor Called" << endl;
    }

    // Parameterized Constructor
    Hero(int health, char level) {
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(const Hero &temp) {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print() {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
};

int main() {
    Hero S(70, 'C');   // calling parameterized constructor
    S.print();

    Hero R(S);         // calling copy constructor
    R.print();

    return 0;
}
