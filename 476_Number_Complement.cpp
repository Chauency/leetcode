/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: 476_Number_Complement.cpp
    > Author: Chauency
    > Mail:  
    > Created Time: 2017-08-05
    > Description: 
 ************************************************************************/
class Solution {
public:
    int findComplement(int num) {
        int len = 32, binaryRepre[len] = {0}, res = 0, temp = num, cnt = 0, flag = 0;
        for(int i = len - 1; i >= 0 && temp > 0; --i)
        {
            binaryRepre[i] = (num % 2) > 0 ? 0 : 1;
            num /= 2;
            temp = num;
            ++cnt;
        }
        for(int i = len - cnt; i < len; ++i)
        {
            if(flag || binaryRepre[i])
            {
                flag = 1;
                res += binaryRepre[i] << (len - 1 - i);
            }
        }
        return res;
    }
};