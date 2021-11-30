//Nick Krisulevicz
//Lab 9.2
//01/25/2021

#include <iostream>
using namespace std;

//class declaration
class Circles
{
public:
	void setCenter(int x, int y);
	double findArea();
	double findCircumference();
	void printCircleStats();
	Circles(float r);
	Circles(int x, int y);
	Circles(float r, int x, int y);
	Circles();
	~Circles();
private:
	float	radius;
	int	center_x;
	int	center_y;
};

const double PI = 3.14;

//client

int main()
{
    int x;
    int y;
    int rad;

    cout << "Enter the X coordinate: ";
	cin >> x;
	cout << "Enter the y coordinate: ";
	cin >> y;
	cout << "Enter the radius: ";
	cin >> rad;
	cout << endl;

    Circles sphere(rad, x, y);
	Circles sphere1(2);
	Circles sphere2;
	Circles sphere3(rad, 15, 16);

	sphere.printCircleStats();

	cout << "The area of the circle is " << sphere.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere.findCircumference() << endl << endl;

    sphere1.printCircleStats();

	cout << "The area of the circle is " << sphere1.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere1.findCircumference() << endl << endl;

    sphere2.printCircleStats();

	cout << "The area of the circle is " << sphere2.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere2.findCircumference() << endl << endl;

    sphere3.printCircleStats();

	cout << "The area of the circle is " << sphere3.findArea() << endl;
	cout << "The circumference of the circle is "
		 << sphere3.findCircumference() << endl << endl;

	return 0;
}

//implementation

Circles::Circles()
{
	radius = 1;
	setCenter(0, 0);
}

Circles::Circles(float r)
{
    radius = r;
    setCenter(9, 10);
}

Circles::Circles(int x, int y)
{
    radius = 1;
    setCenter(x, y);
}

Circles::Circles(float r, int x, int y)
{
    radius = r;
    setCenter(x, y);
}
double Circles::findArea()
{
    return PI * (radius * radius);
}

double Circles::findCircumference()
{
    return 2 * (PI * radius);
}

void Circles::printCircleStats()
{
	cout << "The radius of the circle is " << radius << endl;
	cout << "The center of the circle is (" << center_x
		 << "'" << center_y << ")" << endl;
}

void Circles::setCenter(int x, int y)
{
	center_x = x;
	center_y = y;
}

Circles::~Circles()
{
    cout << "This concludes the Circles class." << endl;
}
