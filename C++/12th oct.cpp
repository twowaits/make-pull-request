#include <iostream>

class Shape {
public:
  Shape() {}
  //defining a virtual function called Draw for shape class
  virtual void Draw() { std::cout << "Drawing a Shape" << std::endl; }
};

class Rectangle : public Shape {
public:
  Rectangle() {}
  //Draw function defined for Rectangle class
  virtual void Draw() { std::cout << "Drawing a Rectangle" << std::endl; }
};

class Triangle : public Shape {
public:
  Triangle() {}
  //Draw function defined for Triangle class
  virtual void Draw() { std::cout << "Drawing a Triangle" << std::endl; }
};

class Circle : public Shape {
public:
  Circle() {}
  //Draw function defined for Circle class
  virtual void Draw() { std::cout << "Drawing a Circle" << std::endl; }
};

int main()
{
  Shape* s;

  Triangle  tri;
  Rectangle rec;
  Circle    circ;

  // store the address of Rectangle
  s = &rec;
  // call Rectangle Draw function
  s->Draw();

  // store the address of Triangle
  s = &tri;
  // call Traingle Draw function
  s->Draw();

  // store the address of Circle
  s = &circ;
  // call Circle Draw function
  s->Draw();

  return 0;
}
