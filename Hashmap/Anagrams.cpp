/* Anagrams

Problem statement:
given an array of strings, print all groups of strings that are anagrams. 
Represent  group by a list of integers represeting the index in the origina list.


Anagram: a word, phrase, or name formed by rearrangign the letters of another
, such as 'spar' , formed from 'rasp'

Note: All inputs will be in lower-case

example:
    rasp ---> spar 
    abba --> acba X
    abba --> baba 

*/

#include<iostream>
#include<unordered_map>
#include<map>
#include<string>
#include<vector>
#include<algorithm>


int main()
{
    
    std::string a[] = {"bbaa" , "aba" , "aadb" , "cab"};

    std::unordered_map<std::string, std::vector<int>>m;
    // because we need to indeces of the all parts of the anagrams

    for(int i = 0 ; i<4; i++)
    {
        std::string s = a[i];
        std::sort(s.begin() , s.end());

        m[s].push_back(i);
        
        
    }

    /* 
    aab: [0 ,1]
    abb:[2]
    abc:[3]
    */

    for(auto element: m)
    {
        //loop over the vector which is the value part of the elment
        for(auto j : element.second)
        {
            std::cout<<j << " ";
        }

        std::cout<<std::endl;

    }
}