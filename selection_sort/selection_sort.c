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
        int min_element_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[min_element_pos] > array[j])
            {
                min_element_pos = j;
            }
        }
        if (min_element_pos != i)
        {
            int tmp = array[i];
            array[i] = array[min_element_pos];
            array[min_element_pos] = tmp;
        }
    }
    
    printf("\nResults: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}