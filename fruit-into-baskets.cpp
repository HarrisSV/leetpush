class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int high=0, low=0, res=INT_MIN, len=0;
        unordered_map<int, int> f;


        for(; high<fruits.size(); high++)
        {
           f[fruits[high]]++;
           

           while(f.size()>2)
           {
             f[fruits[low]]--;

             if(f[fruits[low]] == 0)
                 f.erase(fruits[low]);

            low++;
           }

           if(f.size() <= 2)
           {
             len = high - low + 1;
             res = max(len, res);
           }
        }
        return res;
    }
};
