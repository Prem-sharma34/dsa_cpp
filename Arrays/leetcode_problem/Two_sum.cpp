#include<iostream>

int two_sum(int *nums , int target)
{   
    int b[2];
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0 ; i<size ; i++)
    {
                for(int j = i+1 ; j<size; j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        b[0] = i;
                        b[1] = j;
                        return *b;
                    }
                }
            }
    

}

int main()
{

    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    
    std::cout<<two_sum(nums,9);
}
 
 
 
 