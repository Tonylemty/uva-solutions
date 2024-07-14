#include <iostream>
#include <cmath>
using namespace std;

#define _USE_MATH_DEFINES

class Shape {
public:
    virtual double area() = 0;
};

class RestRegion : public Shape {
private:
    double triangle;
    double semicircle1;
    double side;

public:
    RestRegion(double tri, double semi1, double s) : triangle(tri), semicircle1(semi1), side(s) {}

    double area() {
        return 4 * ((side * side) - (triangle + semicircle1));
    }
};

class DottedRegion : public Shape {
private:
    double semicircle2;
    RestRegion& rr;
    double side;

public:
    DottedRegion(double semi2, double s, RestRegion& restRegion) : semicircle2(semi2), rr(restRegion), side(s) {}

    double area() {
        return 4 * ((side * side) - (0.5 * rr.area()) - semicircle2);
    }
};

class StripedRegion : public Shape {
private:
    RestRegion& rr;
    DottedRegion& dr;
    double side;

public:
    StripedRegion(double s, RestRegion& restRegion, DottedRegion& dottedRegion) : rr(restRegion), dr(dottedRegion), side(s) {}

    double area() {
        return (side * side) - rr.area() - dr.area();
    }
};

int main() {
    double side;

    while (cin >> side) {
        double triangle = (sqrt(3) / 4.0) * (side * side);
        double semicircle1 = (M_PI / 6) * (side * side);
        double semicircle2 = (M_PI / 4) * (side * side);

        RestRegion rest(triangle, semicircle1, side);
        DottedRegion dot(semicircle2, side, rest);
        StripedRegion strip(side, rest, dot);

        printf("%.3lf %.3lf %.3lf\n", strip.area(), dot.area(), rest.area());
    }

    return 0;
}
