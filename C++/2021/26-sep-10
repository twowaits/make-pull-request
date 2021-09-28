vector<string>generateBinary(int n)
{
     queue<string>nums;
     vector<string>result;
     nums.push("1");
     for(int i=1;i<=n;i++)
     {
        string temp = nums.front();
        result.push_back(temp);
        nums.pop();
        nums.push(temp + "0");
        nums.push(temp + "1");
     }
     return result;
}
