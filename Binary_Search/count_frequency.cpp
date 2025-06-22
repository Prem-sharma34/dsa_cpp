/* count frequency of a number

Problem statmenet:

Given a sorted integer array containing duplicates , count occurences
of a given number.

return -1 if the element is not present
note:- complexity of your code should be o(logn)

a = [1 , 4, 4, 4, 5]
k = 4;
freq(4)--> 3
freq(5)--> 1
freq(6)--> -1

using binary search

if we find first index and last index
count = last - first + 1
*/

#include<iostream>


int first_occurrence_bs(int a[] , int n , int l , int r , int k)
{
    int result = -1;
    while(l <= r)
    {
        int mid = l + (r-1)/2;
        
        if(a[mid] == k)
        {
            // Store the current index (mid ) in result, and keep looking of left side
            result = mid;
            r = mid -1;
            
        }
        else if (a[mid]> k)
        {
            r = mid -1;

        }else{
            l = mid +1;
        }
        

    }
    return result;

    
}

int last_occurrence_bs(int a[] , int n , int l , int r , int k)
{
    int result = -1;
    while(l <= r)
    {
        int mid = l + (r-1)/2;
        
        if(a[mid] == k)
        {
            result = mid;
            l = mid +1;
            
        }
        else if (a[mid]> k)
        {
            r = mid -1;

        }else{
            l = mid +1;
        }
        

    }
    return result;

    
}

int main()
{
    int a[] = {1 , 4,4,4,5};
    int k = 5;

    int n = sizeof(a)/sizeof(a[0]);

    int first = first_occurrence_bs(a , n,0, n-1 , k);
    int last = last_occurrence_bs(a , n,0, n-1 , k);

    if(last == -1 && first == -1)
    {
        int freq = 0;
    }
    int freq = (last-first) +1;
    std::cout<<"The frequency of element "<<k<<" is: "<<freq<<std::endl;
}

