#include<iostream>
using namespace std;


int cnt = 0;
void f()
{
    if(cnt == 3) return ;

    cout<<cnt;
    cnt++;

    f();
}


int main()
{
    f();

    return 0;

}