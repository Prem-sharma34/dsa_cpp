#include<iostream>
#include<string>
#include<unordered_map>

int romantointeger(std::string s)
{
  
    std::unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    int result = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
            result -= roman[s[i]];
        } else {
            result += roman[s[i]];
        }
    }
    return result;
}




int main()
{
    std::string s = "MCMXCIV";
    std::cout << romantointeger(s) << std::endl;
}
