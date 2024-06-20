#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    char words[] = " 234567890-=ertyuiop[]\\dfghjkl;'cvbnm,./\n";
    char decode[] = " `1234567890qwertyuiop[asdfghjklzxcvbnm,\n";
    char word;

    while ((word = getchar()) != EOF) {
        if (word >= 'A' && word <= 'Z')
            word = word - 'A' + 'a';
        
        char *pos = strchr(words, word);

        if (pos != NULL)
            putchar(decode[pos - words]);
        else
            putchar(word);
    }
    return 0;
}