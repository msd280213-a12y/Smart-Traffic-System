#ifndef JUNCTION_H
#define JUNCTION_H

#include <string>

class Junction {
private:
    int id;
    std::string name;
    int x;
    int y;

public:
    Junction(int id, std::string name, int x, int y);
    void display() const;
int getId();
    std::string getName();
};

#endif