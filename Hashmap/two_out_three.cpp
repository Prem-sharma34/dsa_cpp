/* Two out of three

Problem statement:
    Give are three arrays A, B and C.
    
    Print the numbers that are present in at least 2 out of the 3 arrays
    a = {1 , 2, 3}
    b = {2,3,44}
    c = {3, 5, 6}

    ans = 2,3;
    */
   
#include<iostream>
#include<unordered_map>
#include<vector>


int main()
{
    std::vector<int>a , b,c;
    
    a = {1,2,3};
    b = {2,4,5, 6,7};
    c = {4,6,7};    


    std::unordered_map<int,int>m;

    for(auto i : a)
    {
        m[i]++;
    }
    for(auto i:b)
    {
        m[i]++;
    }

    for(auto i:c)
    {
        m[i]++;
    }
    
    for(auto element : m)
    {
        if(element.second >= 2 )
        {
            std::cout << element.first << " ";
            
        }
    }

}