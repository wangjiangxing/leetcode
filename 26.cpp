//
// Created by cruisin on 2021/6/9.
//
/*给你一个有序数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。
 *不要使用额外的数组空间，你必须在 原地 修改输入数组 并在使用 O(1) 额外空间的条件下完成。
 *来源：力扣（LeetCode）
 *链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array
 *著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include "allMyNeed.h"
using namespace std;
int removeDuplicates(vector<int>& nums) {
/*
 * 算法思想：使用双指针思想，前面的"指针"指向老的数组的最后一个
 * 后面的"指针"指向新的数组的第一个
 * */
    int rear=0;
    int reduce_nums=0;
    for(int i=1;i<nums.size();i++)
    {
        if (nums[i]==nums[rear])
        {
            reduce_nums++;
        }
        else{
            nums[rear+1]=nums[i];
            rear++;
        }
    }
    for(int i=0;i<reduce_nums;i++)
        nums.pop_back();
    return nums.size();
}
int main()
{
    vector<int> nums={1,2,2,3,4,5,5,6,7,7,7,8,8,9,9,9,9,9,10};
    int num= removeDuplicates(nums);
    cout<<num<<endl;
    vector<int>::iterator v = nums.begin();
    while( v != nums.end()) {
        cout << "value of v = " << *v << endl;
        v++;
    }
    return 0;
}
