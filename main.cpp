#include <iostream>
using namespace std;
class Shape {
protected:
 double area;
 double perimeter;
};
class Circle : public Shape {
private:
 double radius;
public:
 Circle(double radius){
 this->radius=radius;}
 void AreaofCircle(){
 area=3.14*radius*radius;
 cout<<"Area of Circle = "<<area<<endl;
 }
 void PerimeterofCircle(){
 perimeter=2*3.14*radius;
 cout<<"Perimeter of Circle = "<<perimeter<<endl;
 }
};
class Rectangle : public Shape {
private:
 double length;
 double width;
public:
 Rectangle(double length, double width){
 this->length=length;
 this->width=width;
 }
 void AreaofRec(){
 area=length*width;
 cout<<"Area of Rectangle = "<<area<<endl;
 }
 void PerimeterofRec(){
 perimeter=2*(length+width);
 cout<<"Perimeter of Rectangle = "<<perimeter<<endl;
 }
};
class Square : public Rectangle {
public:
 double side;
 Square(double side) : Rectangle(side,side) {
 this->side=side;
 }
 void AreaofSquare(){
 area=side*side;
 cout<<"Area of Square = "<<area<<endl;
 }
 void PerimeterofSquare(){
 perimeter=4*side;
 cout<<"Perimeter of Square = "<<perimeter<<endl;
 }
};
int main() {
 Circle cir(10.5);
 Rectangle rec(15.8, 20.5);
 Square sq(50.78);
 cir.AreaofCircle();
 cir.PerimeterofCircle();
 rec.AreaofRec();
 rec.PerimeterofRec();
 sq.AreaofSquare();
 sq.PerimeterofSquare();
}
