/*************************************************************************
    > Copyright (C) 2017 All rights reserved.
    > File Name: 461_Hamming_Distance.cpp
    > Author: Chauency
    > Mail: 865838279@qq.com 
    > Created Time: 2017-08-04
    > Description: Function of calculating the Hamming distance between two integers. 
 ************************************************************************/

class Solution{
public:
	int hammingDistance(int x, int y){
		int z = x ^ y, num = 0;
		for(int i = z, i != 0; i >>= 1){
			if (i & 1){
				++num;
			}
		}
		return num;
	}
};
