#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> newV;
      for(int i = 0;i<nums.size();i++){
        for(int j = i+1; j<nums.size(); j++){
            if((nums[i]+ nums[j]) == target){
                newV.push_back(i);
                newV.push_back(j);
                break;
            }
        }
      }
      return newV;
    }
};