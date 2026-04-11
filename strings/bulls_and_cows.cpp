#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string getHint(string secret, string guess) 
    {
            int arr[10] ={0};

            int bull = 0 , cows = 0;

            int n = guess.size();

            for(int i = 0 ; i < n ; i++)
            {
                    if(secret[i] == guess[i]) 
                    {
                        bull++;
                    }
                    else
                    {
                        if(arr[secret[i]-'0'] > 0) cows++;
                        if(arr[guess[i]- '0'] < 0) cows++;

                        arr[secret[i]-'0'] = arr[secret[i]-'0'] - 1;
                        arr[guess[i]- '0'] = arr[guess[i]-'0'] + 1;
                    }
                        
            }


            return to_string(bull)+"A"+to_string(cows)+"B";
    }
};


int main()
{
  string s = "1123";
  string t = "0111";

  Solution sol;
  cout<<sol.getHint(s , t)<<endl;
  return 0;
}
