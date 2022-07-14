#include "Circle.h"

void Circle::setter(double r){
  radius = r;
}

double Circle::calArea(){
  return 3.14 * radius * radius;

}
