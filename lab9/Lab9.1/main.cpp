//Nick Krisulevicz
//Lab 9.1
//01/25/2021

#include <iostream>
using namespace std;

class Square //class declaration
{
    public:
        Square(float num);
        Square();
        ~Square();
        float side;
        void setSide(float);
        float findArea();
        float findPerimeter();

};

int main()
{
	Square box;	// box is defined as an object of the Square class
	float size;	// size contains the length of a side of the square

	cout << "Please enter the length of sides of the square: ";
	cin >> size;
	cout << endl;

	box.setSide(size);

	cout << "The area of the square is: " << box.findArea() << endl;
	cout << "The perimeter of the square is: " << box.findPerimeter() << endl;

    Square box1(size); //box1 is defined

	cout << "The area of the square is: " << box1.findArea() << endl;
	cout << "The perimeter of the square is: " << box1.findPerimeter() << endl;

	return 0;
}

//member function implementation
void Square::setSide(float length)
{
	side = length;
}

float Square::findArea()
{
	return side * side;
}

float Square::findPerimeter()
{
	return 4 * side;
}

Square::Square(float num) //constructor with parameters
{
    num = 9;
    setSide(num);
}

Square::Square() //default constructor
{
    cout << "The default constructor has been invoked." << endl;
}

Square::~Square() //destructor
{
    cout << "The destructor has been invoked." << endl;
}
