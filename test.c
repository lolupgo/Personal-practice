#include <stdio.h>
#include <string.h>
int bin_search(int arr[],int n,int start,int stop){
    int half = (stop/2)+(start/2);
    if(n==arr[half]){
        return half;
    }
    else if(n>arr[half]){
        start = half+1;
        return bin_search(arr,n,start,stop);
    }
    else{
        stop = half;
        return bin_search(arr,n,start,stop);
    }
}
void main(){
    int nums[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    printf("%d",bin_search(nums,8,0,19));
}