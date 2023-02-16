#include <stdio.h>

void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l, int m, int r);

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

    merge_sort(array, n);

    printf("\nResults: ");
    for (int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void merge_sort(int a[], int length)
{
    merge_sort_recursion(a, 0, length - 1);
}

void merge_sort_recursion(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        merge_sort_recursion(a, l, mid);
        merge_sort_recursion(a, mid + 1, r);
        merge_sorted_arrays(a, l, mid, r);
    }
}

void merge_sorted_arrays(int a[], int l, int m, int r)
{
    int l_n = m - l + 1;
    int r_n = r - m;
    int tmp_l[l_n];
    int tmp_r[r_n];
    int i, j, k;

    for (int i = 0; i < l_n; i++)
    {
        tmp_l[i] = a[l + i];
    }
    for (int i = 0; i < r_n; i++)
    {
        tmp_r[i] = a[m + 1 + i];
    }
    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        if (i < l_n && (j >= r_n || tmp_l[i] <= tmp_r[j]))
        {
            a[k] = tmp_l[i];
            i++;
        }
        else
        {
            a[k] = tmp_r[j];
            j++;
        }
    }
}