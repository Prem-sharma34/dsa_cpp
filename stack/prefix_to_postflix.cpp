#include<iostream>
#include<stack>
#include<string>

using namespace std;



string pretopost(string s)
{
  int n = s.size();

  int i = n-1;
  stack<string>st;

  while(i >= 0)
  {
    if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
    {
      st.push({s[i]});
    }
    else {
      string t1 = st.top();
      st.pop();
      string t2 = st.top();
      st.pop();

      string expr = t1 + t2 + s[i];

      st.push(expr);
    }
    i--;
  }
  return st.top();
}


int main()
{
  string s = "/-AB*+DEF";

  string ans = pretopost(s);

  std::cout << ans<<endl;


}
