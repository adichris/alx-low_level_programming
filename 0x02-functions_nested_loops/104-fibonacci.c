#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main()
{
    int n = 98;
    int a = 0, b = 1;

    printf("%d",b);

    int nextTerm;

    // printing the rest of the terms here
    for(int i = 2; i < n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;

        printf("%d, ",nextTerm);
    }

    return 0;
}
