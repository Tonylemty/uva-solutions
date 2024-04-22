#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {

    return (*(int*)a - *(int*)b); // 由小到大排列
    
    // return (*(int*)b - *(int*)a) -> 由大到小排列

}

int countMid(int frontmid, int backmid, long size, int numbers[]) {
    int i = 0, count = 0;

    for (i = 0; i < size; i++) {
        if (frontmid == numbers[i] || backmid == numbers[i])
            count++;
    }
    return count;
}

int countBetNum(int front, int back) {
    int i, num = 0;
    for (i = front; i <= back; i++) {
        num++;
    }
    return num;
}


int main() {

    int i, frontMid, backMid, midNum, betNum;
    long cases;

    while (scanf("%ld", &cases) != EOF) {

        int numbers[cases];
        for (i = 0; i < cases; i++) {
            scanf("%d", &numbers[i]);
        }

        qsort(numbers, cases, sizeof(int), compare);

        if (cases % 2 == 0) {
            frontMid = numbers[(cases / 2) - 1];
            backMid = numbers[cases / 2];
            betNum = countBetNum(frontMid, backMid);
            midNum = countMid(frontMid, backMid, cases, numbers);
        }

        else {
            frontMid = numbers[((cases + 1) / 2) - 1];
            betNum = countBetNum(frontMid, frontMid);
            midNum = countMid(frontMid, frontMid, cases, numbers);
        }
        

        printf("%d %d %d\n", frontMid, midNum, betNum);

    }


    return 0;
}