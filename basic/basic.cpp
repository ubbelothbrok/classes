#include <iostream>
#include <cmath>
using namespace std;

class Point
{ // access modifier
public:
    Point(float a, float b, float c)
    { // constructer
        x = a;
        y = b;
        z = c;
        cout << "constructor is called" << endl;
    }

    float distance_from_origin()
    {
        return sqrt(x * x + y * y + z * z);
    }

    float get_x()
    {

        return x;
    }
    float get_y()
    {

        return y;
    }
    float get_z()
    {

        return z;
    }
    void set_x(float new_x ){
        x=new_x;
    }
    void set_y(float new_y ){
        y=new_y;
    }

    void set_z(float new_z ){
        z=new_z;
    }

private:
    float x, y, z;
};

int main()
{
    Point p = Point(6, 5, 1);
    cout << p.distance_from_origin() << endl;
    cout << "x value of p is " << p.get_x() << endl;
    p.set_x(7);
    cout << "x value of p is " << p.get_x() << endl;
    return 0;
}