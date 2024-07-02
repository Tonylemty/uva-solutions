#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int H, M;
    float angle, temp;
    char sym;

    while (scanf("%d%c%d", &H, &sym, &M) && H != 0) {

        temp = fabs((30 * H) - (5.5 * M)); // 計算時針與分針之間夾角的公式，但不為最小角度
        
        if (temp > 180)
            angle = 360 - temp;

        else 
            angle = temp;
    
        printf("%.3f\n", angle);
    }
    return 0;
}
