class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0, l=numbers.size()-1;
        vector<int> num;
        while(i<l)
        {
            if(numbers[i]+numbers[l]==target)
            {
                num.push_back(i+1);
                num.push_back(l+1);
                return num;
            }
            if(numbers[i]+numbers[l]<target)
            {
                i++;
            }
            if(numbers[i]+numbers[l]>target)
            {
                l--;
            }
            
        }
      return num;
        
    }
};