#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n]; 
    printf("Enter the element of an array: \n");
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]) ; 
    }
    for(int i = 0 ; i<n ; i++){
        if(i==0){
            if(arr[i]==arr[i+1]){
                printf("Number found: %d",arr[i]);
                return 0 ; 
            }
        }
        if(i==(n-1)){
            if(arr[i]==arr[i-2]){
                printf("Number found: %d",arr[i]) ; 
                return 0 ;
            }
        }
        if(arr[i]==arr[i-1]||arr[i]==arr[i+1]){
            printf("Number found: %d",arr[i]) ; 
            return 0 ;
        }
    }
}
