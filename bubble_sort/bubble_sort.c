#include <stdio.h>

int main(void)
{
    int n;
    printf("Size of array: ");
    scanf("%i", &n);
    printf("\n");
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Element %i: ", i + 1);
        scanf("%i", &array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = tmp;
            }
        }
    }

    printf("\nResults: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}