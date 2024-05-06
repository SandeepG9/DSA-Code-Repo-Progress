//Kadane's Algorithm : Maximum Subarray Sum in an Array
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_number = INT_MIN;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
            sum +=nums[i];
            if(sum>max_number)
            {
                max_number = sum;
            }
            if(sum<0)
            {
                sum=0;
            }
       }
       
    return max_number;
    }
};
