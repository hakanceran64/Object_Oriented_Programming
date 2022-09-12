/*
 * @Authors: Hakan CERAN
 * @Date: 12.09.2022
 * @Content: Class Definition
 */

#include <iostream>
#include <string>

#define PI 3.14

using namespace std;

class Circle
{
    private:
        // Data member (variable)
        double _radius = 0;
        string _color;

    protected:
        int x, y;

    public:
        // Constructor function
        Circle(){
            cout << "Circle constuctor!" << endl << endl;
        }

        // Destructor function
        ~Circle(){
            cout << "Circle destructor!" << endl << endl;
        }

        // Member functions
        double getRadius()
        {
            return _radius;
        }

        double getArea()
        {
            return PI * _radius * _radius;
        }

        string getColor()
        {
            return _color;
        }

        void setRadius(double radius)
        {
            _radius = radius;
        }

        void setColor(string color)
        {
            _color = color;
        }
};

int main()
{
    Circle example;

    example.setRadius(12.5);
    example.setColor("Red");

    cout << "Color: " << example.getColor() << endl << endl;
    cout << "Radius: " << example.getRadius() << endl << endl;
    cout << "Area: " << example.getArea() << endl << endl;

    return 0;
}
