#include<stdio.h>
int main(){
    int n , m  ; 
    printf("Enter the size of arr 1 : ");
    scanf("%d",&n) ; 
    printf("Enter the size of arr 2 : ");
    scanf("%d",&m) ; 
    int arr[n] ; 
    int arr1[m] ;
    printf("Enter the elements of arr1:\n"); 
    for(int i = 0 ; i< n ; i++){
        scanf("%d",&arr[i]) ; 
    }
    printf("Enter the elements of arr2:\n"); 
    for(int i = 0 ; i< m ; i++){
        scanf("%d",&arr1[i]) ; 
    }
    int ans[m+n] ; 
    int i = 0 , j = 0 ; 
    for(int k = 0 ; k<(m+n) ; k++){
        if(arr[i]<arr1[j]){
            ans[k] = arr[i] ; 
            i++ ; 
        }
        else{
            ans[k] = arr1[j] ;
            j++ ;   
        }
    }
    printf("-------\n") ; 
    printf("Merged arr: \n") ; 
    for(int i = 0 ; i<(m+n) ; i++){
        printf("%d\n",ans[i]) ; 
    }
    return 0 ; 
}