#ifndef ROBOT_H
#define ROBOT_H

#include "point.h"

class Robot
{
private:
   Point position;
   int energy;

public:
   void display() const;
   Point getPosition() const; 
   int getEnergy() const;
   void setPosition(Point position);
   void setEnergy(int energy);
   Robot();
   Robot(int energy);
   Robot(Point position, int energy);
};

#endif
