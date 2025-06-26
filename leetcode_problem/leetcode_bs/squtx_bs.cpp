/* sqrt(x)

-- return the square root of x rounded down to the neart integer
-- it must be non-negative as well
-- don't use any built-in exponenet function or operator

*/

#include<iostream>


int sqart_bs(int x)
{
   int  left = 1;
   int  right = x;
   while(left <= right)
   {
    int mid = left + (right-left)/2;

     if(mid * mid == x)
     {
        return mid;

     }else if(mid * mid > x)
     {
        right = mid -1;
     }else
     {
        left = mid + 1;
     }
      
   }
   return right;
}

int main()
{
    int x = 8;
    std::cout<<"The square root is: "<<sqart_bs(x);
}