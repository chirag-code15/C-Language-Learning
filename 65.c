// Q65: Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int n, count = 0;
    int temp;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    int number;
    scanf("%d", &number);
    int low = 0;
    int high = n-1;
    int mid = (low + high) / 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            count++;
            break;
        }
        else
        {
            count = 0;
        }
    }
    if (count == 1)
    {
        while (arr[mid] != number)
        {
            if (arr[mid] == number)
            {
                printf("Number found at the index %d", mid);
            }
            else if(arr[mid] > number)
            {
                // low = 0;
                high = mid - 1;
                mid = (low + high) / 2;
            }
            else
            {
                low = mid + 1;
                high = n - 1;
                mid = (low + high) / 2;
            }
        }
    }
    else
    {
        printf("There is no number is this array");
    }
    if(count==1){
        printf("Find %d at index %d",number ,mid);
    }
}