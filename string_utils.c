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
char *replaceCharCopy(const char *s, char oldChar, char newChar) {
    int len = strlen(s);
    char *newStr = (char *)malloc(len + 1);

    if (newStr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < len; i++) {
        newStr[i] = (s[i] == oldChar) ? newChar : s[i];
    }

    newStr[len] = '\0';
    return newStr;
}

void removeChar(char *s, char c) {
    char *src, *dst;

    for (src = dst = s; *src != '\0'; src++) {
        if (*src != c) {
            *dst++ = *src;
        }
    }

    *dst = '\0';
}

