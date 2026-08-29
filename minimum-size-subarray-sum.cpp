class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, low = 0, high = 0;
        int res = INT_MAX;
        int n = nums.size();
        int flag = 0;

        while(high < n)
        {
            sum += nums[high];
            while(sum >= target)
            {
                int l = high - low + 1;
                res = min(res, l);
                sum = sum - nums[low];
                low++;
                flag = 1;
            }
            high++;
        }

        if(flag == 1)
        {
            return res;
        }
       
       else{
           return 0;
       }
        
    }
};
