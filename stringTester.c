#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main() {
    
    char testStr1[] = "Hello, World!";
    replaceChar(testStr1, 'l', 'L');
    printf("replaceChar: %s\n", testStr1);
