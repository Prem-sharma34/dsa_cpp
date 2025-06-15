/* 
Remove duplicate from sorted array:


Order shouldn't be change 
number of unique element 


return unqiue element from the array nums 
and also the modified new array with unique element 


i have done nothing but check current ith index value and index value which is one before one , 
and just put the unique element on front 

*/

#include<iostream>
#include<vector>


int unquie_element(std::vector<int> & nums)
{   
    int n = nums.size();
    
    if(n == 0){
        return 0;
    }

    int index = 0;
    for(int i = 1 ; i < n ; i++)
    {
        if(nums[index] != nums[i])
        {   
            index++;
            nums[index] = nums[i];
           
        }
    }
    nums.resize(index+1); // Just to remove the garbage value , which are after the unique value.

    return index+1;
    

}



int main(){

        std::vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
        std::cout<<unquie_element(nums)<<std::endl;
        
}