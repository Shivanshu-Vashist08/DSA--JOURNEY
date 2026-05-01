class Solution {
public:
    int largestElement(vector<int>& nums) {
      //function for getting size of vector
int n=nums.size();
      // Initialize largest to Minimum value of Integer 
    int largest=INT_MIN;
      // Traverse Whole vector
for(int i=0;i<n;i++){
	if(nums[i]>largest)largest=nums[i];
}
// After iterating in the complete array you will get the largest element in the array/vector 
return largest;
}
};
// n = size of array
// Time Complexity = O(n)
// Space complexity = O(1)
