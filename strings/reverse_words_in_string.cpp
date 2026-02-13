#include<iostream>
#include<string>
#include<stack>


using namespace std;


string reverse(string s)
{
    int i = s.size();
    string result = "";

    while(i >= 0)
    {
        while(i >= 0 && s[i] == ' ') i--;

        if(i < 0 ) break;

        int end = i;

        while(i >= 0 && s[i] != ' ') i--;

        string word = s.substr(i+1 , end -i);

        if(!result.empty())
        {
            result += " ";
        }

        result += word;
    }

    return result; 
}

int main()
{
    string s = "   the sky is blue";

    cout<<reverse(s)<<endl;
}