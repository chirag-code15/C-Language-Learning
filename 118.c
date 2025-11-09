#include<stdio.h>
int main(){
    int n ; 
    printf("Enter the size of an array: ") ;
    scanf("%d",&n) ;
    int arr[n] ;
    printf("Enter the element of an array: \n"); 
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&arr[i]) ; 
    }
    int found ; 
    for(int i = 0 ; i<=n ; i++){
        found = 0 ; 
        for(int j = 0 ; j<n ; j++){
            if(arr[j]==i){
               found =1 ; 
               break ; 
            }
        }
        if(found==0){
            printf("Missing number: %d",i) ; 
        }
    }
    return 0 ; 
}