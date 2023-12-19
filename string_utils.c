#include "string_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int countSubstrings(const char *s, int n) {
    int len = strlen(s);
    return (len + n - 1) / n;
}
void replaceChar(char *s, char oldChar, char newChar) {
    while (*s != '\0') {
        if (*s == oldChar) {
            *s = newChar;
        }
        s++;
    }
}
