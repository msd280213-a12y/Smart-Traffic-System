#ifndef ROAD_H
#define ROAD_H

class Road {
private:
    int source;
    int destination;
    double distance;
    int speedLimit;

public:
    Road(int source, int destination,
         double distance, int speedLimit);

    void display() const;

    int getSource() const;
    int getDestination() const;
    double getDistance() const;
     int getSpeedLimit() const;
};

#endif