#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>

using namespace std;

vector<int> checkInclusion(string s, string p)
{
    int n = s.size();
    int m = p.size();

    unordered_map<char, int> hash;
    unordered_map<char,int>hash_s1;
    vector<int>result;
    

    for(auto i : p) hash_s1[i]++;

    int l = 0, r = 0;

    while (r < n)
    {
        hash[s[r]]++;

        while (r - l + 1 > m)
        {
            hash[s[l]]--;
            if (hash[s[l]] == 0)
            {
                hash.erase(s[l]);
            }
            l++;
        }

        if (r - l + 1 == m)
        {
            int count = m;

            for (auto i : p)
            {
                if (hash[i] == hash_s1[i])
                {
                    count--;
                }
            }

            if (count == 0)
            {
                result.push_back(l);
            }
        }

        r++;
    }

    return result;
    }

int main()
{
    string s = "abab";
    string p = "ab";

    vector<int>result=checkInclusion(s, p);

    for(auto i : result)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}