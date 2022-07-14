#include "Rectangle.h"

void Rectangle::setter(double l, double w){
  length = l;
  width = w;

}

double Rectangle::calArea() {
  return length * width;
}

