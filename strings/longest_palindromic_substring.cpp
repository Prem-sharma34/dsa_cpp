#include<iostream>
#include<string>
#include<algorithm>


using namespace std;


string reverse(string s)
{
    
        string result = "";

        int n = s.size();
        
        int i = 0;
        int l , r;
        if(n%2 == 1)
        {
            int l = i;
            int r = i;
        }else 
        {
            int l = i , r = i+1;
        }

        while(i < n)
        {
            if((i-l) >= 0 && (i+r) < n)
            {
                string word = s.substr(l,r-l);
                string w = s;
                reverse(w.begin() , w.end());
                if(word == w)
                {
                    if(word.size() > result.size())
                    {
                        result = word;
                    }
                }

                l--;
                r++;
            }else if((i-l) < 0 && (i + r) < n )
            {
                string word = s.substr(l,r-l);
                string w = s;
                reverse(w.begin() , w.end());
                if(word == w)
                {
                    if(word.size() > result.size())
                    {
                        result = word;
                    }
                }
                r++;
            }else if((i-l) >= 0 && (i + r) > n-1 )
            {
                string word = s.substr(l,r-l);
                string w = s;
                reverse(w.begin() , w.end());
                if(word == w)
                {
                    if(word.size() > result.size())
                    {
                        result = word;
                    }
                }
                l--;
            }
            i++;
        }



        return result;
}

int main()
{
    string s = "babad";

    cout<<reverse(s)<<endl;
}