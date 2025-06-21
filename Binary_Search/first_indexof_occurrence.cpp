/*First index of occurance of an element

problem statement:

given a sorted array of integers and an element k,
write a function which prints the first index of occurence
of an elmenet k.
return -1 if the elmenet is not present


a = [ 1, 2, 3,3,5,5, 7 , 9 ,9 ] ==> 4
k = 5

what we have done is:
we have stored the first result and search the left , if found anything
update the result and search again


*/

#include<iostream>


int linearSearch(int a[] , int n , int k)
{
    for(int i = 0 ;i < n ; i++ )
    {
        if(a[i] == k)
        {
            return i;
        }
    }
    return -1;
    
}

int binarySearch(int a[] ,  int l , int r, int k)
{
    
    int result = -1;
    while(l <=r )
    {
        for(int i = 0 ; i<r; i++)
        {   
            int mid = l + (r-l)/2;

                if(a[mid] == k)
                {   
                    result = mid;
                    r = mid -1;
                }
                else if(a[mid] > k)
                {
                    r = mid -1;
                }else{
                    l = mid+1;
                }

        } 
    }
    return result;

}
int main()
{
    int a[ ] = {1,2,4,4,4,5,7};
    int k = 4;

    int n = sizeof(a)/sizeof(a[0]);
    int index =binarySearch(a ,0 , n-1 , k);
    
    std::cout<<"the first index at which the elmenet "<<k<<" is presnet is: " <<index<<std::endl;
}