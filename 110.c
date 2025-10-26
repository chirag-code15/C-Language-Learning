#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the size of an array :");
    scanf("%d",&n);
    int arr[n] ; 
    printf("Enter the elements of an array :\n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int k ; 
    printf("Enter the value of k:");
    scanf("%d",&k);
    int a = 0 ; 
    int b = k-1;
    int max = arr[0] ; 
    while(b<n){
        max = arr[a] ; 
        for(int i = a ; i<=b ; i++){
            if(arr[i]>max){
                max = arr[i] ; 
            }
        }
        a += 1 ; 
        b += 1 ; 
        printf("%d ",max); 
    }
    return 0 ; 
}