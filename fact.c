#include <stdio.h>
#include <stdlib.h> // For atoi function

int main(int argc, char *argv[]) {
    if (argc != 3) { // Ensure exactly one argument is provided
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int count = atoi(argv[1]); // Convert the argument to an integer
    if (count < 0) {
        printf("Factorial of negative numbers is not defined.\n");
        return 1;
    }

    int num = 1; // Initialize factorial to 1
    for (int i = 1; i <= count; i++) {
        num = num * i;
    }

    int sub = atoi(argv[2]);
    
    num = num - sub;

    printf("The factorial of %d is %d\n", count, num);
    return 0;
}
