//
// Created by cruisin on 2021/3/14.
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <malloc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int flag=0;
    int i=0;
    int j=0;
    int *ret=(int *)malloc(3*sizeof(int));
    *returnSize=2;
    for(int i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            ret[0]=i;
            ret[1]=j;
            break;
        }
    }
    return ret;
}
