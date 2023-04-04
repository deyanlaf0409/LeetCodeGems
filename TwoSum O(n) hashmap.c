https://leetcode.com/problems/two-sum/

#include <stdio.h>

int findIndex(int arr[], int size, int value) {
    int i;
    for(i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}

void findPair(int arr[],int size,int target,int hash[],int max)
{
    int i;
    for(i=0;i < size;i++)
    {
        if(hash[target-arr[i]] != 0 && target-arr[i] <= max)
        {
        	int index = findIndex(arr,size,target-arr[i]);
            printf("[%d,%d]",index,i);
            break;
        }
        else if(hash[target-arr[i]]<=max)
        {
            hash[arr[i]] += 1;
        }
    }
}
int main() {
    int i, max=0;
    int target = 9;
    int arr[] = {2,7,11,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i < size;i++)
    {
        if(arr[max] < arr[i])
        max = i;
    }
    max = arr[max];
    int hashsize = max + 1;
    int hash[hashsize];
    
    for(i=0;i < hashsize;i++)
    {
        hash[i] = 0;
    }
    findPair(arr,size,target,hash,max);
    return 0;
}
