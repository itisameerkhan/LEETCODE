#include<stdio.h>

int missingNumber(int* nums, int n){
    int sum1 = 0;
    int sum2 = 0;
    for(int i=1;i<=n;i++) sum1 += i;
    for(int i=0;i<n;i++) sum2 = sum2 + nums[i];
    return sum1-sum2;
}

int main()
{
    int nums[] = {3,0,1};
    int n = 3;
    int result = missingNumber(nums,n);
    printf("%d",result);
}