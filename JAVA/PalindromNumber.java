class Solution {
    public boolean isPalindrome(int x) {
        int number=x;
        int reverse = 0;
        while(number>0)
        {
            reverse = reverse*10+number%10;
            number = number/10;
        }
        if(reverse==x)
            return true;
        else
            return false;
    }
}