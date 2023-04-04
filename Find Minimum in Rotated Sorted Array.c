https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

#include <stdio.h>

int search(int a[], int s, int e){
    int m = s+(e-s)/2;

    if(a[s] > a[e]){
        if(a[m] > a[m+1]){
            return a[m+1];
        }
    }
    else{
        return a[s];
    }


}

int main(){

    int a[] = {4,5,6,7,0,1,2};
    int size = sizeof(a)/sizeof(a[0]);
    int s = 0;
    int e = size-1;
    int res = search(a,s,e);
    printf("%d",res);
    }
