#include<iostream>
#include<string>
using namespace std;


int main()
{
    string s;
    cin>>s;


    int hash[26] = {0};
    for(int i = 0 ; i < s.size() ; i++)
    {
        hash[s[i]-'a']++; // it's just like hash[s[i] -'a'] += 1;
    }

    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;

        cout<<hash[c-'a']<<endl;
    }

    return 0;
}