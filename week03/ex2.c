#include<stdio.h>
void bubble_sort(int arr[], int arr_len);
void swap(int *a, int *b);
void print_array(int arr[], int arr_size);
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int arr[], int arr_len)
{
    for(int i=0;i<arr_len-1;i++)
    {
        for(int j=0;j<arr_len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
void print_array(int arr[], int arr_size)
{
    for(int i=0;i<arr_size;i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {5, 3, 1, 1, 3, 6, 8};
    printf("Original array:\n");
    print_array(arr,7);
    printf("Array after bubble sort:\n");
    bubble_sort(arr,7);
    print_array(arr,7);
}
