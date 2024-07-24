#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int i, cases;
    int *grades;
    int student;

    scanf("%d", &cases);

    while (cases--) {

        scanf("%d", &student);
        grades = malloc(student * sizeof(int));

        double avg; 
        double sum = 0;
        for (i = 0; i < student; i++) {
            scanf(" %d", &grades[i]);
            sum += grades[i];
        }
        avg = sum / student;
        qsort(grades, student, sizeof(int), compare);

        double percentage;
        double above = 0;
        for (i = 0; i < student; i++) {
            if (grades[i] > avg) {
                above = student - i;
                break;
            }
        }
        percentage = (above / student) * 100;
        
        if (percentage >= 0 && percentage <= 100) {
            printf("%.3lf\%\n", percentage);
        } else {
            printf("0.000\%\n");
        }
        free(grades);

    }
   
   
}