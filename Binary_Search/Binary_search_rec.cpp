/* Search element K in a sorted array-2 

Problem statmenet:

Given a sorted aray of integers and an element K, write
a function which returns the index on which K is preset , using
recursion.

return -1 if the element is not present
*/

#include<iostream>

int linearSearch(int a[] ,int i,int n, int k)
{
    if(i == n)
    {
        return -1;
    }

    // When element k is present at the current index: i
    if(a[i] == k)
    {
        return i;
    }

    return linearSearch(a , i+1 , n ,k);

}

int BinarySearch(int a[],int l , int r , int k )
{


    if(l <= r)// starting index is greater than the last index , array is exashuted
    {
        int mid = l + (r-l)/2;

        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] > k){
           return  BinarySearch(a , l , mid -1 , k);
        }
        else{
            return BinarySearch(a , mid + 1, r , k);
        }
       
    }

    return -1;
    


}



int main(){

    int a[] = {1,3,5,8,15,20}; 
    int k = 20;
    int n = sizeof(a)/sizeof(a[0]);
    int index = BinarySearch(a,0,n-1,k);
    std::cout<<"The elmeent " <<k<<" is present at index: "<<index<<std::endl;
}