#include<iostream>
#include <string.h>
using namespace std;

class Hero {

    
    private:
        char level;
    public:
        int health;
        char *name; //good practice
    
    Hero() {
        cout << "Constructor called" << endl;
        name = new char[100];
    }
    //parameterized constructor
    Hero(int health, char level) {
        cout << "this -> "<< this << endl; 
        this -> health = health;
        this -> level = level;
    }
    //copy-constructor 
    Hero(Hero &temp) {
        //dee  p copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
        cout<< "copy constructor called"<< endl; 
        this->health = temp.health;
        this->level = temp.level;
    }
    void printLevel() {
        cout << "Level: " << level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }

    ~Hero() {
        cout<< "Destructor called" << endl;
    }
};

int main() {
    //static allocation
    Hero h1(10, 'B');
    cout<< "Address of h1: "<< &h1 << endl;
    cout << "Size of h1: " << sizeof(h1) << endl;
    h1.setHealth(100);
    h1.setLevel('a');
    cout << "Health: " << h1.health << endl;
    h1.printLevel();
    // char name[12] = "PowerRanger";
    // h1.setName(name);

    //dynamic allocation
    Hero *h2 = new Hero;
    (*h2).setHealth(200);
    cout<< "health of h2: " << (*h2).getHealth()<< endl;

    //copy constructor
    Hero shaktiman(75, 'C');
    Hero LifeSaver(shaktiman);
    cout << "LifeSaver Health: " << LifeSaver.getHealth() << endl;
    cout << "LifeSaver Level: " << LifeSaver.getLevel() << endl;
    return 0;
    Hero h3 = shaktiman; // another way

    delete h2;
}