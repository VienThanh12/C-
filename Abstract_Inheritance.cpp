#include <iostream>

using namespace std;

class Shape
{
protected:
	int x;
	int y;

public:
	Shape(int x, int y) {
		this->x = x;
		this->y = y;
	}
	virtual ~Shape() { // Shape destructor needs to be virtual to call child class destructors also
		cout << "In Shape destructor\n";
	}

	virtual void printObject() = 0; // abstract method. No implementation in Shape
};

class Circle : public Shape // class Circle inherits class Shape
{
private:
	int radius;
public:
	Circle(int x, int y, int r) : Shape{ x, y }
	{
		radius = r;
	}
	~Circle() {
		cout << "In Circle destructor\n";
	}
	void printObject()
	{
		cout << " Circle x:" << x << " y:" << y << " r:" << radius << endl;
	}
};

class Square : public Shape // class Square inherits class Shape
{
private:
	int heigth;
public:
	Square(int x, int y, int h) : Shape{ x, y }
	{
		heigth = h;
	}
	~Square() {
		cout << "In Square destructor\n";
	}
	void printObject()
	{
		cout << " Square x:" << x << " y:" << y << " r:" << heigth << endl;
	}
};

int main()
{
	//Shape* shape = new Shape(20, 20); // Shape is having abstract method (virtual)
	// this is not possible

	Shape* circle = new Circle(30, 20, 7);
	Shape* square = new Square(15, 15, 10);

	circle->printObject();
	square->printObject();

	delete(circle);
	delete(square);
}

