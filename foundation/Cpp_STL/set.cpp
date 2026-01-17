#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


/* it's store everything in sorted and unique */
void explainSet()
{
    set<int>st;

    st.insert(1);
    st.emplace(2);
    st.insert(2); // {1 , 2} no 2 
    st.insert(4);



    // functionality of insert in vector
    // can be used also, that only increase
    // efficieincy


    // begin() , end() , rbegin() , rend() , size(),
    // empty() and swap() are same as those of above 

    auto it = st.find(3); // it's return ilterature that points to 3
    
    // {1 , 2 , 3, 4, 5}
    auto it = st.find(6); // if 6 not in the set , it will return st.end();

    // { 1 , 4 , 5}
    st.erase(5); // erase 5 // takes logarithmic time

    int cnt = st.count(1); // it return 1 find out, else 0

    auto it = st.find(3);
    st.erase(it);

    // {1 ,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1 , it2); // after erase {1,4,5} [first, last]

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

    /*  set does everything in logn */

}

void explainMultiSet()
{
    // everything is same as set
    // only store duplicate elements also

    multiset<int>ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1 , 1 ,1 }

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // only a single one erased

    ms.erase(ms.find(1) , ms.find(1)+ 2);

    // rest all function same as set
}


void explainUSet() 
{
    unordered_set<int>st; // does everything in O(1) and in worst case does O(n)


/*   


     lower_bound and upper_bound function
    does not work, rest all functions are same
     as above , it does not stores in any particular order it has a better complexity
     than set in most cases , except some when collision happens

*/


}
