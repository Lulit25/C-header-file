#include "Car.h"

const float PI = 3.14;

Sphere::Sphere() {
Sphere_Area(4.2);
Sphere_Volume(4.2);
}

void Sphere::Sphere_Area(float radius) {
  area = 4 * PI * radius * radius;
}

void Sphere::Sphere_Volume(float radius) {
  volume = 1.3 * PI  *  radius * radius * radius;
}
