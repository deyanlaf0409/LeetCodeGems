https://leetcode.com/problems/two-sum/

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    
Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

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
