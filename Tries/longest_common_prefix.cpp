#include<iostream>
#include<string>
#include<vector>
#include<algorithm>




class TrieNode{
    public:
        std::vector<TrieNode*> v;
        int count;

        TrieNode(): v(26,nullptr) , count(0) {}
};


class Solution {
    public:
        TrieNode *root = new TrieNode();

        void check(std::string s)
        {
            int n = s.size();
            TrieNode *node = root;

            for(char ch:s)
            {
                if(node->v[ch - 'a'] == nullptr)
                {
                    node->v[ch-'a'] = new TrieNode();
                    node -> count++;
                }

                node = node->v[ch-'a'];
            }
        }

        std::string longestCommonPrefix(std::vector<std::string>& strs)
        {
            for(std::string s: strs)
            {
                check(s);
            }

            TrieNode *node = root;

            std::string ans = "";

            std::string mina = *std::min_element(strs.begin() , strs.end());

            for(char ch:mina)
            {
                if(node->count > 1) break;
                ans += ch;

                node = node->v[ch-'a'];
            }

            return ans;
        }
};