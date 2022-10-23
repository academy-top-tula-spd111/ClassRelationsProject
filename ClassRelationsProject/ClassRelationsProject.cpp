#include <iostream>

class Point2D
{
public:
    int x; 
    int y;
    Point2D()
    {
        std::cout << "point create\n";
    }
    ~Point2D()
    {
        std::cout << "point delete\n";
    }
};


class Circle
{
public:
    Point2D center;
    double radius;
    Circle()
    {
        std::cout << "Circle create\n";
    }
    ~Circle()
    {
        std::cout << "Circle delete\n";
    }
};

class Driver
{
public:
    Driver()
    {
        std::cout << "Driver create\n";
    }
    ~Driver()
    {
        std::cout << "Driver delete\n";
    }
};

class Car
{
    Driver* driver;
public:
    Car(Driver* driver = nullptr) : driver{ driver } 
    {
        std::cout << "Car create\n";
    }
    ~Car()
    {
        std::cout << "Car delete\n";
    }
};

int main()
{
    //Circle circle;

    Driver* driver = new Driver();
    Car car(driver);

    delete driver;

    Circle circle;


}
