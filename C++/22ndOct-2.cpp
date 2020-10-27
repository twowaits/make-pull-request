#include<bits/stdc++.h>
using namespace std;

void print(string result,unordered_map<char,int> map,int n)
{
    unordered_map<char,int> :: iterator it=map.begin();
    if(result.length()==n)
    {
        cout<<result<<endl;
        return;
    }
    for(;it!=map.end();it++)
    {
        char a=it->first;
        if(map[a]==0)
        {
            
        }
        else
        {
            map[a]--;
            print(result+a,map,n);
            map[a]++;
        }
    }

}
unordered_map<char,int> getDict(string s)
{
    unordered_map<char,int> map;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(map.find(s[i])==map.end())
        {
            map.insert({s[i],1});
        }
        else{
            map[s[i]]++;
        }
    }
    return map;
}
void printAllCombinations(string s)
{
    string result="";
    unordered_map <char,int> map=getDict(s);
    print(result,map,s.length());

}

int main()
{
    string s;
    cin>>s;
    printAllCombinations(s);
    // cout<<s+"a"<<endl;
}