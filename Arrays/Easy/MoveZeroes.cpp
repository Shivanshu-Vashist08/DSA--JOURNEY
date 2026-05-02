// PLATFORM : LEETCODE //
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n=nums.size();
    int pointer=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[pointer]=nums[i];
            pointer++;
        }
    }
    for(int i=pointer;i<n;i++){
        nums[i]=0;
    }
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
