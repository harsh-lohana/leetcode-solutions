class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        long long int temp = x;
        long long int rev = 0;
        if(x >= 0)
        {
            while(x != 0)
        {
            int digit = x % 10;
            rev = rev*10 + digit;
            x /= 10;
        }
        if(temp == rev)
            return true;
        else
            return false;
        }
        else
            return false;
    }
};