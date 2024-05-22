// problem link
// https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/description/


class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());
       int min = nums[0];
       int max = nums[k-1];
       int diff = max - min;
       int s = 1;

       for(int i = k; i < nums.size();i++){
        min = nums[s];
        max = nums[i];
        if(max - min < diff){
            diff = max - min;
        }
        s++;
       }

       return diff;

       
    }
};
