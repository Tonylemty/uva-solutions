#include <stdio.h>
#include <math.h>



int main() {

    int i, testcases, player, total;
    double pb, pbDiff, success_pb;

    scanf("%d", &testcases);

    for (i = 0; i < testcases; i++) {
        scanf("%d %lf %d", &total, &pb, &player);

        if (pb == 0) {
            printf("0.0000\n");
        }

        else {
            pbDiff = 1 - pb;
            success_pb = (pow(pbDiff, player - 1) * pb) / (1 - (pow(pbDiff, total)));

            printf("%.4lf\n", success_pb);
        }
    }
    
    return 0;
}