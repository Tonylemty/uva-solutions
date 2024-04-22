#include <stdio.h>

int standard(int n) {
    int colas = n;

    while ((n / 3) > 0) {
        colas += (n / 3);
        n = ((n / 3) + (n % 3));
    }
    return colas;
}

int borrow(int n) {
    int colas = n;

    n += 1;
    while ((n / 3) > 0) {
        colas += (n / 3);
        n = ((n / 3) + (n % 3));
    }
    return colas;
}



int main() {

    int bottles, standard_way, borrow_way;

    while (scanf("%d", &bottles) != EOF) {
        standard_way = standard(bottles);
        borrow_way = borrow(bottles);

        if (standard_way > borrow_way) {
            printf("%d\n", standard_way);
        }
        else {
            printf("%d\n", borrow_way);
        }
    }


    return 0;
}