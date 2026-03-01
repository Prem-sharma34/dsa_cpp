#include<iostream>
#include<set>

using namespace std;


int main()
{
    set<int>st;

    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(2);

    cout<<st.size()<<endl;


}