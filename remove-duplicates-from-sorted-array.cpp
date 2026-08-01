class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0, k=1;
        
        for(int i=0;i<nums.size();i++)
        {
            
            
            if(nums[l]!=nums[i])
            {
                nums[k]=nums[i];
                l=i;
                k++;
            }

            
        }
        
        return k;
    }
};