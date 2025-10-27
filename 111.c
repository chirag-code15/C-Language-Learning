#include<stdio.h>
void negative_in_subarray(int arr[] , int  k  , int n  ){
    int a = 0 , b = (k-1) ; 
    int found  ; 
    while (b<n)
    {
        found = 0 ; 
        for(int i = a  ; i<=b ; i++){
            if(arr[i]<0){
                printf("%d ",arr[i]) ; 
                found =1 ; 
                break ; 
            }
        }
        if(found==0){
            printf("0 ");
        }
        a+=1 ; 
        b+=1 ; 
    }
}
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
    negative_in_subarray(arr , k  , n ); 
    return 0 ; 
}