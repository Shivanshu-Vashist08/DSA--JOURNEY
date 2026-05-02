// PLATFORM : Leetcode //
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int st=0;
       for(int i=1;i<n;i++){
        if(nums[i]!=nums[st]){
            nums[st+1]=nums[i];
            st++;
        }
       }
       return st+1;
    }
};
// Time Complexity : O(n)
// Space Complexity : O(1)
