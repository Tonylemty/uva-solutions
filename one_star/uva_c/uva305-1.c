#include <stdio.h>


int main() {

    int i, k, m;
    int people[15];

    while (1) {
        scanf("%d", &i);
        
        m = i + 1;

        while (1) {
            k = i * 2;
            int killedperson = -1;
            while (k > i) {
                killedperson += m;
                killedperson %= k;

                if (killedperson < i) {
                    break;
                }
                k--;
                killedperson--;
            }

            if (k <= i) {
                printf("%d\n", m);
                break;
            }
            m++; 
        }
    }
    

    


    return 0;
}