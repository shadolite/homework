#include "robot.h"
#include <iostream>
using namespace std;

/************************************
 * Function: Display
 * Purpose: Displays the robot.
 ************************************/
void Robot :: display() const
{
   position.display();
   cout << " - Energy: " << getEnergy();
}

Point Robot :: getPosition() const {
   return position;
}

int Robot :: getEnergy() const {
   return energy;
}

void Robot :: setPosition (Point position) {
   position.setX(position.getX());
   position.setY(position.getY());
}

void Robot :: setEnergy (int energy) {
   if (energy < 0) 
      this -> energy = 0;
   else
      this -> energy = energy;
}

Robot :: Robot () {
   energy = 100;
}

Robot :: Robot (int energy)
{
   setEnergy(energy);
}

Robot :: Robot (Point position, int energy)
{
   setPosition(position);
   setEnergy(energy);
}
