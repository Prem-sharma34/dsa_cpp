#include<iostream>
#include<string>
#include<unordered_map>


using namespace std;


bool valid(string s , string t)
{

    if(s.size() != t.size()) return false;
    unordered_map<char,int>mps;
  

    for(auto word : s)
    {
        mps[word]++;
    }

    for(auto word : t)
    {
        mps[word]--;
    }

    for(auto word : s)
    {
        if(mps[word] != 0)
        {
            return false;
        }
    }

    return true;

}

int main()
{
    string s = "aacc";
    string t = "cacc";

    cout<<valid(s ,t)<<endl;
}