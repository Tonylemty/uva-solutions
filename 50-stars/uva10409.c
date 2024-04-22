#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, temp, commands;
    int top = 1, west = 3, north = 2, bottom, east, south;
    char direction[1024][5];

    while (1) {
        scanf("%d", &commands);
        if (commands == 0)
            break;
        int top = 1, bottom = 7 - top, north = 2, south = 7 - north, west = 3, east = 7 - west;
        for (i = 0; i < commands; i++) {
            scanf("%s", direction[i]);

                switch(direction[i][0]) {
                    
                    case 'n': {
                    temp = top;
                    top = south;
                    south = bottom;
                    bottom = north;
                    north = temp;
                    break;
                }
                    case 's': {
                    temp = top;
                    top = north;
                    north = bottom;
                    bottom = south;
                    south = temp;  
                    break;
                }
                    case 'e': {
                    temp = top;
                    top = west;
                    west = bottom;
                    bottom = east;
                    east = temp;  
                    break;
                }
                    case 'w': {
                    temp = top;
                    top = east;
                    east = bottom;
                    bottom = west;
                    west = temp;
                    break;
                }
            }
        }
        printf("%d\n", top);
        

    }

    return 0;
}