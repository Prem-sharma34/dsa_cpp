#include<iostream>
#include<algorithm>
#include<string>
#include<vector>


using namespace std;


/* first sort the list 
    get the first stirng
    take a first string first character 
    loop over the list , 
    compare the first character of first word with all other word,
    if match , add to answer varaible
    then update the character of the first variable.
    do , it it's end or didn't match.
    if not match break and return ""
    
    */

string commonprefix(vector<string> & str)
{

  

    string answer ="";
    string word = str[0];
    for(int j = 0 ; j < word.length() -1 ; j++)
    {
        char ch = word[j];

        for(int i = 1 ; i < str.size() ; i++)
        {
            if(j >= str[i].size() || ch != str[i][j])
            {
                return answer;
            }
        }

        answer += ch;
    }

    return answer;
}


int main()
{
   vector<string> str = {"flower","flow","flight"};
    cout<<commonprefix(str);
}