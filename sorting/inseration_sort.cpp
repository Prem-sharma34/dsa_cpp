/* Inseration sort:
    logic:
        insert the current element at its correct position within the already sorted array
        segment so far
        example: 
            [3 , 10 ,6 , 2 , 4]
            
            [3] -> 0 index is sorted
            [3 10]-> 0 to 1 index is sorted
            [3 10 6] -> 0 to 2 range is not sorted , so we bring the 6 to it's correct position by
                putting it after 3 and left side of the 10
            
            and we continuou
*/
#include<iostream>


void insertion_sort(int a[] , int n)
{
    std::cout<<"The arry before sorting: ";
    for(int i = 0 ; i < n; i++)
    {
        std::cout<<a[i]<<" ";
    }

    // Inseration sort
    for(int i = 0 ; i < n; i++)
    {
        int key = a[i];

        int j = i - 1;
        while(j>=0 && a[j] > key)
        {
            a[j+1] = a[j];   
            j--;
        }
        a[j+1] = key;
    }
    

    std::cout<<"\nThe arry before sorting: ";
    for(int i = 0 ; i < n; i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
}


int main()
{
    int a [ ] = { 4, 2, 1, 7 , 6};
    int n = sizeof(a)/sizeof(a[0]);

    insertion_sort(a,n);

    return 0;
}


