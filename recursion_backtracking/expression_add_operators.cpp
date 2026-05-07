#include<iostream>
#include<string>
#include<vector>

using namespace std;



class Solution{
  public:

  vector<string>addOperators(string num , int target)
  {
    vector<string>ans;
    string expression = "";
    int i = 0;
    int last_num = 0;
    int evaluated = 0;

    dfs(num , target , i , last_num , evaluated, expression , ans);
    return ans;

  }

  void dfs(string &num , int target , int i , int last_num , int evaluated , string expression , vector<string>&ans)
  {
    if(i == num.size())
    {
      if(evaluated == target)
      {
        ans.push_back(expression);
      }
      return;
    }
    
    for(int k = i ; k < num.size() ;k++)
    {
      if(k>i && num[i] == '0') return;

      string current_character_num = num.substr(i , k -i+1);
      long long curr_number = stoll(current_character_num);

      if(i == 0)
      {
        dfs(num , target , k+1 , curr_number , curr_number , current_character_num , ans);
      }else {
        dfs(num , target , k+1 , curr_number , evaluated+curr_number,expression+"+"+current_character_num,ans );
        dfs(num , target , k+1 , -curr_number , evaluated-curr_number,expression+"-"+current_character_num,ans );
        dfs(num , target , k+1 , curr_number*last_num ,( evaluated-last_num) +(last_num*curr_number),expression+"*"+current_character_num,ans);
      }
    }
  }
};


int main()
{
  string num = "123";
  int target = 6;
  Solution sol;

  vector<string>result = sol.addOperators(num, target);

  for(const string& expr : result)
  {
    cout<<expr<<" ";
  }
  cout<<endl;
  return 0;
}
