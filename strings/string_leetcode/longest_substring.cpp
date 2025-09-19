#include<iostream>
#include<string>
#include<unordered_map>

/* 

    start the loop, 
    condition , if not present in hashmap , the push it and make the cout = 1
    ,and length variable , will have the longest cout, and we'll update 
    by comparing the with other count.

*/


int longest_substring(std::string s)
{
    std::unordered_map<char, int>map;
    int longest_length = 0;
    int start = 0;

    for(int i = 0 ; i< s.length(); i++)
    {
        char c = s[i];

        if(map.find(c) != map.end() && map[c] >= start)
        {
            start = map[c] + 1;
        }

        map[c] = i;
        longest_length = std::max(longest_length , i - start + 1);

    }
    return longest_length;

}



int main()
{
    std::string s = "";

    std::cout<<longest_substring(s)<<std::endl;
}