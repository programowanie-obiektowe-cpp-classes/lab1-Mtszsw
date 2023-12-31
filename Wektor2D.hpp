#include<iostream>
using namespace std;
class Wektor2D{
public:
    double x;
    double y;

    Wektor2D(): x(0.0), y(0.0) {}
    Wektor2D(double x_val, double y_val) : x(x_val), y(y_val) {}

    void setX(double x_val) {x=x_val;}
    void setY(double y_val) {y=y_val;}

    double getX() const {return x;}
    double getY() const {return y;}
    
    Wektor2D operator+(const Wektor2D& vec) const {
        return Wektor2D(x + vec.x, y + vec.y);
    }

    double operator*(const Wektor2D& vec) const {
        return x * vec.x + y * vec.y;
    }
};