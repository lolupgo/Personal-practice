#include <stdio.h>
#include <string.h>
int binary_search(int arr[],int n,int start,int stop){
    int half = stop/2;
    if(n>arr[half]){
        start = half-1;
        return binary_search(arr,n,start,stop);
    }
    else if(n<arr[half]){
        stop = half;
        return binary_search(arr,n,start,stop);
    }
    else{
        return half;
    }
}
void main(){
    int num[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int half = 10;
    printf("%d",binary_search(num,6,0,20));
}