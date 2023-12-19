#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main() {
    
    char testStr1[] = "Hello, World!";
    replaceChar(testStr1, 'l', 'L');
    printf("replaceChar: %s\n", testStr1);
    const char testStr2[] = "Hello, World!";
    char *newStr = replaceCharCopy(testStr2, 'o', 'O');
    printf("replaceCharCopy: %s\n", newStr);
    free(newStr);
    char testStr3[] = "Hello, World!";
    removeChar(testStr3, 'l');
    printf("removeChar: %s\n", testStr3);
    const char testStr4[] = "Hello, World!";
    char *newStr2 = removeCharCopy(testStr4, 'o');
    printf("removeCharCopy: %s\n", newStr2);
    free(newStr2);
    const char testStr5[] = "Hello World, how are you?";
    char **substrings = lengthSplit(testStr5, 3);

    printf("lengthSplit:\n");
    for (int i = 0; i < 9; i++) {
        printf("%s\n", substrings[i]);
        free(substrings[i]);
    }
    free(substrings);

    return 0;
}
