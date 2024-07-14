#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

using namespace std;

int main() {

    double side;
    double striped_region, dotted_region, rest_region;

    while ((cin >> side)) {
        double triangle = (sqrt(3) / 4.0) * (side * side);
        double semicircle1 =  (M_PI / 6) * (side * side);
        double semicircle2 = (M_PI / 4) * (side * side);

        rest_region = 4 * ((side * side) - (triangle + semicircle1));
        dotted_region = 4 * ((side * side) - (0.5 * rest_region) - semicircle2);
        striped_region = (side * side) - rest_region - dotted_region;

        printf("%.3lf %.3lf %.3lf\n", striped_region, dotted_region, rest_region);
    }
        
}