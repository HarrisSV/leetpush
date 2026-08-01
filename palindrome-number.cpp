class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0)
        {  long long int d=0,c;
           int cc=x;
           while(x>0)
          {
            c=x%10;
            d=d*10+c;
            x/=10;
          }
          if(cc==d)
          {
            return true;
          }
          else{
            return false;
          }
        }
        else
        {
            return false;

        }
    }
};