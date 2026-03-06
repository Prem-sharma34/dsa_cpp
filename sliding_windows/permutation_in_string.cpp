#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool checkInclusion(string s1, string s2)
{
    int n = s2.size();
    int m = s1.size();

    unordered_map<char, int> hash;
    unordered_map<char,int>hash_s1;

    for(auto i : s1) hash_s1[i]++;

    int l = 0, r = 0;

    while (r < n)
    {
        hash[s2[r]]++;

        while (r - l + 1 > m)
        {
            hash[s2[l]]--;
            if (hash[s2[l]] == 0)
            {
                hash.erase(s2[l]);
            }
            l++;
        }

        if (r - l + 1 == m)
        {
            int count = m;

            for (auto i : s1)
            {
                if (hash[i] == hash_s1[i])
                {
                    count--;
                }
            }

            if (count == 0)
            {
                return true;
            }
        }

        r++;
    }

    return false;
    }

int main()
{
    string s1 = "ab";
    string s2 = "eidboaoo";

    cout << checkInclusion(s1, s2) << endl;
}