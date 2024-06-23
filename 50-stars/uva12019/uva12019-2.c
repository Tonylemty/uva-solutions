#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, day, month, cases;
    int days[] = {10, 21, 0, 4, 9, 6, 11, 8, 5, 10, 7, 12};
    char week[][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    scanf("%d", &cases);

    while (cases--) {
        scanf("%d %d", &month, &day);
        int weekdays = (day - days[--month] + 35) % 7;

        printf("%s\n", week[weekdays]);
    }


    return 0;
}