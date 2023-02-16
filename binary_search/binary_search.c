#include <stdio.h>

void binary_search(int a[], int e, int l, int r);

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = 8;

    int element;
    printf("\nFind element: ");
    scanf("%i", &element);
    printf("\n");

    binary_search(array, element, 0, n - 1);
}

void binary_search(int a[], int e, int l, int r)
{
    if (l > r)
    {
        printf("Element not found.\n");
        return;
    }
    
    int mid = l + (r - l) / 2;

    if (e == a[mid])
    {
        printf("Element found: array[%i]\n", mid);
    }
    else if (e < a[mid])
    {
        binary_search(a, e, l, mid - 1);
    }
    else
    {
        binary_search(a, e, mid + 1, r);
    }
}