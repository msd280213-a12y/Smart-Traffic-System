#include "Junction.h"
#include <iostream>

Junction::Junction(int id, std::string name, int x, int y) {
    this->id = id;
    this->name = name;
    this->x = x;
    this->y = y;
}

void Junction::display() const {
    std::cout << "ID: " << id << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Coordinates: (" << x << ", " << y << ")\n";
    
}
int Junction::getId() {
    return id;
}

std::string Junction::getName() {
    return name;
}