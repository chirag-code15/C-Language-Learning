// Q69: Find the second largest element in an array.


// Sample Test Cases:
// Input 1:
// 5
// 10 20 30 40 50
// Output 1:
// 40
#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (max > arr[i])
        {
            printf("The second largest number is :%d\n", arr[i]);
            count = 1 ; 
            break;
        }
    }
    if(count!=1){
        printf("There is no second largest element in an array all elements are same ");
    }
}