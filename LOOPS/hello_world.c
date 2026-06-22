#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char target[] = "Hello World";
    int len = strlen(target);
    int index = 0;

    while (index < len) {
        for (char ch = 'A'; ch <= 'Z'; ch++) {
            if (toupper(target[index]) == ch) {
                printf("%c", target[index]);
                index++;
                break;
            }
        }
    }

    return 0;
}