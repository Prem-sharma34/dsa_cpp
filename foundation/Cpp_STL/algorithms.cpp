#include<iostream>
#include<algorithm>


using namespace std;


bool comp(pair<int,int> p1,pair<int,int>p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.first > p2.first) return true;
    return false;    
}
void explainExtra()
{
    
    sort(a , a+ n);
    sort(v.begin() , v.end());

    sort(a+2 , a+4);

    sort(a , a+n , greater<int>); // sort them in descending order

    pair<int,int> a[] = {{1,2}, {2,1},{4,1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending {2 , 1} { 4 , 1} {1 ,2 } 
    // {4,1}, {2,1} , {1,2}


    sort(a , a+n , comp) // this is self written competer , return bool value


    int num = 7;
    int cnt = __builtin_popcount(); // it return number of the set bit for example 6 as 11 0 , it treun 2


    long long num = 1987289562985;
    int cnt = __builtin_popcountll();

    string s = "123";
    // sort it first


    do{
        cout<<s<<endl;

    }while (next_permutation(s.begin() , s.end()));

    int maxi = *max_element(a,a+n);
    

    
}

int main()
{
    return 0;
}