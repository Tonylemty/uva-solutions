#include <stdio.h>
#include <string.h>


int main() {

    int i, flag, check[50][50] = {0};
    int worldX, worldY, currentRobotX, currentRobotY, preRobotX, preRobotY;
    char dir, commands[101];


    scanf("%d %d", &worldX, &worldY);

    while (scanf(" %d %d %c", &currentRobotX, &currentRobotY, &dir) != EOF) {

        scanf(" %s", commands);

        flag = 0;
        for (i = 0; i < strlen(commands); i++) {

            switch(commands[i]) {
                case 'F':
                    if (dir == 'N') {
                        currentRobotY += 1;
                        break;
                    }
                    else if (dir == 'E') {
                        currentRobotX += 1;
                        break;
                    }
                    else if (dir == 'S') {
                        currentRobotY -= 1;
                        break;
                    }
                    else if (dir == 'W') {
                        currentRobotX -= 1;
                        break;
                    }

                case 'R':
                    if (dir == 'N') {
                        dir = 'E';
                        break;
                    }
                    else if (dir == 'E') {
                        dir = 'S';
                        break;
                    }
                    else if (dir == 'S') {
                        dir = 'W';
                        break;
                    }
                    else if (dir == 'W') {
                        dir = 'N';
                        break;
                    }

                case 'L':
                    if (dir == 'N') {
                        dir = 'W';
                        break;
                    }
                    else if (dir == 'E') {
                        dir = 'N';
                        break;
                    }
                    else if (dir == 'S') {
                        dir = 'E';
                        break;
                    }
                    else if (dir == 'W') {
                        dir = 'S';
                        break;
                    }
                }

                if (currentRobotX > worldX || currentRobotY > worldY || currentRobotX < 0 || currentRobotY < 0) {
                    if (check[preRobotX][preRobotY] == 0) {
                        flag = 1;
                    }

                    if (check[preRobotX][preRobotY] == 1) {
                        currentRobotX = preRobotX;
                        currentRobotY = preRobotY;
                    }
                    if (flag) {
                        break;
                    }
                }

                else {
                    preRobotX = currentRobotX;
                    preRobotY = currentRobotY;
                }
            }

        if (flag) {
            printf("%d %d %c LOST\n", preRobotX, preRobotY, dir);
            check[preRobotX][preRobotY] = 1;
        }
        else {
            printf("%d %d %c\n", preRobotX, preRobotY, dir);
        }
        
    }

    return 0;
}
