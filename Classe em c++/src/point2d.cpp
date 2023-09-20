#include "point2d.h"


// Default constructor
point2d::point2d() {
   this->x = 0.0;
   this->y = 0.0;
}

// Parametric constructor
point2d::point2d(float nx, float ny) {
   this->x = nx;
   this->y = ny;
}

// Copy constructor
point2d::point2d(const point2d &p) {
   this->x = p.getX();
   this->y = p.getY();
}

// Setters:
void point2d::setX(float nx) {
   this->x = nx;
}

void point2d::setY(float ny) {
   this->y = ny;
}


