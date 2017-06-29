 /*************************************************************************
   > Copyright (C) 2017 All rights reserved.
   > File Name: 001_Two_Sum.cpp
   > Author: Chauency
   > Mail: 865838279@qq.com 
   > Created Time: 2017-06-29
   > Description: Solution of leetcode problem of 001 Two Sum. 
************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_size = nums.size(), minimum = nums[0], maximum = nums[0];
        vector<int> res;

        // find the minimum and maximum element in nums
        for(int i = 0; i < nums_size; ++i)
        {
            minimum = nums[i] < minimum?nums[i]:minimum;
            maximum = nums[i] > maximum?nums[i]:maximum;
        }
         
        // further determine the minimum and maximum element with respect to target
        int  new_min, new_max;
        new_min = target - maximum;
        new_max = target + minimum;
        minimum = new_min < minimum?new_min:minimum;
        maximum = new_max > maximum?new_max:maximum;
        
        // Initializing array with -1
        int new_array_size = maximum - minimum + 1, new_array[new_array_size];
        for(int i = 0; i < new_array_size; ++i)
        {
            new_array[i] = -1;
            
        }
        
        // iterate over nums
        for(int i = 0; i < nums_size; ++i)
        {
            if(nums[i] < minimum || nums[i] > maximum)
            {
                continue;
            }

            // new_array[target - nums[i] - minimum ] >= 0 indicates that target - nums[i] exisits.
            if(new_array[target - nums[i] - minimum ] >= 0)
            {
                res.push_back(new_array[target - nums[i] - minimum]);
                res.push_back(i);
                return res;
            }
            new_array[nums[i] - minimum ] = i;

        }        
        return res;
    }
};