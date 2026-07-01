/*#include "Road.h"
#include <iostream>

Road::Road(int source, int destination,
           double distance, int speedLimit) {

    this->source = source;
    this->destination = destination;
    this->distance = distance;
    this->speedLimit = speedLimit;
}

void Road::display() const {

    std::cout << "Source: " << source << '\n';
    std::cout << "Destination: " << destination << '\n';
    std::cout << "Distance: " << distance << '\n';
    std::cout << "Speed Limit: " << speedLimit << '\n';
}

int Road::getSource() {
    return source;
}

int Road::getDestination() {
    return destination;
}

double Road::getDistance() {
    return distance;
}*/

#include "Road.h"
#include <iostream>

// Constructor
Road::Road(int source, int destination,
           double distance, int speedLimit)
{
    this->source = source;
    this->destination = destination;
    this->distance = distance;
    this->speedLimit = speedLimit;
}

// Display function
void Road::display() const
{
    std::cout << "Source: " << source << '\n';
    std::cout << "Destination: " << destination << '\n';
    std::cout << "Distance: " << distance << '\n';
    std::cout << "Speed Limit: " << speedLimit << '\n';
}

// Getter for source
int Road::getSource() const
{
    return source;
}

// Getter for destination
int Road::getDestination() const
{
    return destination;
}

// Getter for distance
double Road::getDistance() const
{
    return distance;
}

// Getter for speed limit
int Road::getSpeedLimit() const
{
    return speedLimit;
}