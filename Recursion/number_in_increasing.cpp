/* Print number in increasing order

problem statement:
give a number n, print all the numbers from 1 to n in increasing order using recursion

*/

#include<iostream>

void printIncreasing(int n,int start)
{
    // Base condition
    if(start == n+1)
    {
        return;
    }
    // Tastk
    std::cout<<start<<" ";


    //Recursion call
    printIncreasing(n,start+1);

   
}


int main()
{
    int n = 10;
    int start = 1;
    printIncreasing(n,start);
}