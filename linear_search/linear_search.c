#include <stdio.h>

int main(void)
{
    int array[] = {5, 2, 7, 4, 1, 6, 3, 0};
    int n = 8;

    int element;
    printf("\nFind element: ");
    scanf("%i", &element);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        if (array[i] == element)
        {
            printf("Element found: array[%i]\n", i);
            return 0;
        }
    }
    printf("Element not found.\n");
}