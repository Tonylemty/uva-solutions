#include <stdio.h>
#include <stdlib.h>

int divisor;    


/* qsort()函式回傳值意思

1. 若a要排在b之前，回傳負數
2. 若a與b相等，回傳0
3. 若a要排在b之後，回傳正數

*/
int compare(const void *a, const void *b) {
    int numA = *((int *)a);
    int numB = *((int *)b);

    int remainderA = numA % divisor;
    int remainderB = numB % divisor;

    if (remainderA != remainderB) {
        return (remainderA < remainderB)? -1: 1;
    }

    else {
        if ((numA % 2 == 0) && (numB % 2 == 0)) {
            return (numA < numB)? -1: 1;
        }
        else if ((numA % 2 != 0) && (numB % 2 != 0)) {
            return (numA > numB)? -1: 1;
        }
        else if ((numA % 2 == 0) && (numB % 2 != 0)) {
            return 1;
        }
        else if ((numA % 2 != 0) && (numB % 2 == 0)) {
            return -1;
        }
    }
}


int main() {

    int i, setNum;
    int sets[10000] = {0};

    while (1) {

        scanf("%d %d", &setNum, &divisor);

        if (setNum == 0 && divisor == 0) {
            printf("0 0\n");
            break;
        }

        
        for (i = 0; i < setNum; i++) {
            scanf(" %d", &sets[i]);
        }

        qsort(sets, setNum, sizeof(int), compare);
        printf("%d %d\n", setNum, divisor);
        for (i = 0; i < setNum; i++) {
            printf("%d\n", sets[i]);
        }
    }
    return 0;
}