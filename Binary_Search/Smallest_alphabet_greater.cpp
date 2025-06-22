/* Smallest alphabet greater than give character

Problem statement:

given a array of sorted characters consisiting of lowercase alphabets
and a particular target value, say K, the task is to find the smallest
element in the list that is larget than k.

print -1 if such element is not present.
a = ['d' , 'j', 'k']
k = 'b' 
smallest character larger than k , that been 'b' , 'd' , 'j', 'k'
we name to return 'd'

in terms of number
a =[1,4,4,5,9,11]
k = 10
smallest number which is larger than k
, that mean, it is next element larger element.
*/

#include<iostream>

int solve_bs(int a[] , int n , int k)
{
    int l = 0;
    int r = n -1;

    int result = -1;
    
    while(l <= r)
    {
        int mid = l + (r -l)/2;

        if(a[mid] == k)
        {   
            //keep searching on the right sub-part as you need smallest val greater than k
            l = mid + 1;
        }else if(a[mid] > k)
        {
            //if come across a value greater than k, store it as it can be valid answer
            // keep looking for another > k such that its the min among all greater value
            result = a[mid];
            r = mid -1;
        }else
        {
            //keep looking on the right sub-part for larger value
            l = mid +1;
        }

    }
    return result;
}

int main()
{
    int a[] = {1,4,4,5,8,9};
    int k = 8;
    int n = sizeof(a)/sizeof(a[0]);

    int val = solve_bs(a,n,k);

    std::cout<< "The smallest element greater than "<<k<<" is "<<val;
}
