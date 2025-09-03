/* Selection sort:
Logic: 
    in every iteration , bring the the smallest element to it's correct index.
    
*/


#include<iostream>
#include<vector>


void selection_sort(std::vector<int>a , int n)
{
    std::cout<<"The array before sorting is: ";
    for(int i = 0 ; i < n; i++)
    {
        std::cout<<a[i]<<" ";
    }

    for(int i = 0 ; i < n ; i++)
    {
        int min = a[i];
        int idx = i;
        
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                idx = j;
            }
        }

        int temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }

    std::cout<<"\nThe array after sorting is: ";
    for(int i = 0 ; i < n; i++)
    {
        std::cout<<a[i]<<" ";
    }

    std::cout<<std::endl;
}



int main()
{
    std::vector<int> a = {9,3,8,1,2,4};
    int n = a.size();
    //
    selection_sort(a,n);


    return 0;
}