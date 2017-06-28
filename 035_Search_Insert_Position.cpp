 /*************************************************************************
   > Copyright (C) 2017 All rights reserved.
   > File Name: 035_Search_Insert_Position.cpp
   > Author: Chauency
   > Mail: 865838279@qq.com 
   > Created Time: 2017-06-27
   > Description: Solution of leetcode problem of 035 Search Insert Position. 
************************************************************************/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int minimum = nums[0], nums_size = nums.size();
        for(int i = 0; i < nums_size; i++)
        {
            // if the target is found or the target should be fixed on the 0 index.
            if (nums[i] == target || minimum > target ) 
            {
                return i;
            }
            
            //find the first element that is larger than the target (for a sorted array)
            //or the target should be fixed on the last index
            else if (i < nums_size-1 && nums[i+1] > target || i == nums_size-1)
            {
                return i+1;
            }
            
        }
        
    }
};