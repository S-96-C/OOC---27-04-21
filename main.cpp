#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"


using namespace std;

/*
class Rectangle{
  public: // access properties
      double length; // length is a property
      double width;

      // calArea() // method
      {
        return length * width;
      }

      //void printDetails(){
        cout << length << endl;
        cout << width << endl;

      }
};
*/

/*
int main()
{
  //double rLArea;

  Rectangle recL; // recL is a object

  //recL.length = 28;
  //recL.width = 15;

  rLArea = recL.calArea(); // storing

  cout << "Area = " << rLArea << endl;

  // cout << recL.length * recS.width << endl;

  return 0;
}
*/
/*
class Rectangle {
  private:
      double length;
      double width;
  public:
    void setter(double l, double w){
        length = l;
        width = w;
    }
    double calArea(){
        return length * width;
    }
    //double getLength(){
        return length;
    }
};
*/

int main()
{
  Rectangle recL, recS;
  Square sq;
  Circle cr;

  recL.setter(28, 15);
  recS.setter(7, 3);

  sq.setter(4);

  cr.setter(5);

  double rLArea = recL.calArea();

  cout << "Green Area = " << rLArea - (recS.calArea() + sq.calArea() + cr.calArea()) << endl;

  //cout << recL.calArea() << endl;

  //cout << recL.getLength() << endl;

  return 0;

}

