#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846264338327950288

double changeToRandian(double num) {
    double rad;

    if (num > 180.0) {
        num = 360.0 - num;
    }

    else if (num > 360.0) {
        num = fmod(num, 360.0); 
    }

    rad = num * (PI / 180);
    return rad;
}

double count_arc(double dis, double a, double (*r)(double)) {
    double arc, rad = r(a);

    arc = (dis + 6440.0) * rad;
    return arc;
}

double count_chord(double dis, double a, double (*r)(double)) {
    double chord, rad = r(a);
    double halfAngle = rad / 2.0;
    chord = 2 * (dis + 6440.0) * sin((halfAngle));

    return chord;
}

int main() {


    double distance, angle, arc, chord;
    char unit[4];

    while (scanf("%lf %lf %s", &distance, &angle, unit) != EOF) {

            if (unit[0] == 'm') {
                angle = angle / 60;
            }

        arc = count_arc(distance, angle, changeToRandian);
        chord = count_chord(distance, angle, changeToRandian);

        printf("%.6lf %.6lf\n", fabs(arc), fabs(chord));
    }

    return 0;
}