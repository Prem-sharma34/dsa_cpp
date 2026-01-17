#include<iostream>
#include<algorithm>
using namespace std;


void print1(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n)
{
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

void print5(int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n-i +1 ;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void print6(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        // space
        for(int j = 0 ; j <= n - i ; j++)
        {
            cout<<" ";

        }

        // star
        for(int k = 0 ; k < 2*i+1 ; k++)
        {
            cout<<"*";
        }


        // space
        for(int m = 0 ; m <= n-i ; m++)
        {
            cout<<" ";

        }
        cout<<endl;
    }

}

void print7(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        // space
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<" ";

        }

        // star
        for(int k = 0 ; k < 2*(n-i) -1 ; k++)
        {
            cout<<"*";
        }


        // space
        for(int m = 0 ; m <= i ; m++)
        {
            cout<<" ";

        }
        cout<<endl;
    }

}

    /* 
*
**
***
****
*****
****
***
**
* 

    */

void print8(int n)
{

    for(int i = 0 ; i <= 2*n -1; i++)
    {
        int star = i;

        if(i > n)
        {
            star = 2*n - i;
        }

        for(int j = 0 ; j < star ; j++)
        {
            cout<<"*";

        }
        
        cout<<endl;
    }

}

/* 

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 


*/
void print9(int n)
{
    int start = 1;
    for(int i = 0 ; i < n ; i++)
    {
        
        if(i%2 == 0) start = 1;
        else start = 0;

        for(int j = 0 ; j <= i ; j++)
        {

            cout<<start<<" ";
            // flip
            start = 1 - start;
        }

        cout<<endl;

    }

}


/*  

1        1
12      21
123    321
1234  4321
1234554321


*/
void print10(int n)
{
    for(int i = 1 ; i <= n ; i ++)
    {
        // num
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<j;
        }


        //space
        for(int k = 1 ; k <= 2*(n-i); k++)
        {
            cout<<" ";
        }


        // num
        for(int j = i ; j >= 1 ; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}


/* 

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 


*/

void print11(int n)
{
    int count = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}


/* 

A
AB
ABC
ABCD
ABCDE


*/

void print12(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(char ch = 'A' ; ch <= 'A'+i ; ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}

/* 

ABCDE
ABCD
ABC
AB
A

*/


void print13(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(char ch = 'A' ; ch <= 'A' + (n-i -1); ch++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
}



/* 

A
BB
CCC
DDDD
EEEEE

*/

void print14(int n)
{
    char ch = 'A';
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j <= i ; j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

/* 

     A    
    ABA   
   ABCBA  
  ABCDCBA 
 ABCDEDCBA


*/



void print15(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        // space   
        for(int j = 0 ; j <= n-i -1 ; j++)
        {
            cout<<" ";
        }



        //character
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1 ; j <= 2*i+1 ; j++)
        {
            cout<<ch;
            if(j <= breakpoint)
            {
                ch++;
            }else
            {
                ch--;
            }
        }



        // space
        for(int j = 0 ; j < n-i-1 ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}


/* 

E 
D E 
C D E 
B C D E 
A B C D E 

*/
void print16(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(char ch = 'E' - i ; ch <= 'E' ; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}




/* 

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********


*/


void print17(int n)
{
    int space = 0;
    for(int i = 0 ; i < n ; i++)
    {
        
        //star
        for(int j = 1 ; j <= n-i ; j++ )
        {
            cout<<"*";
        }

        //space
        for(int j = 0 ; j < space ; j++)
        {
            cout<<" ";
        }

        //star
        for(int j = 1 ; j <= n-i ; j++ )
        {
            cout<<"*";
        }
        space+=2;

        cout<<endl;
    }
    space = 2*n-2;
    for(int i = 1 ; i <= n ; i++)
    {
        
        //star
        for(int j = 1 ; j <= i ; j++ )
        {
            cout<<"*";
        }

        //space
        for(int j = 0 ; j < space ; j++)
        {
            cout<<" ";
        }

        //star
        for(int j = 1 ; j <= i ; j++ )
        {
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
}



/* 


*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
void print18(int n)
{
    int spaces = 2*n -2;
    for(int i = 1 ; i <= 2*n-1 ; i++)
    {
        int stars = i;
        if(i > n) stars = 2*n-i;
        

        //stars
        for(int j = 1 ; j<= stars ; j++)
        {
            cout<<"*";
        }

        //space
        for(int j = 1 ; j<= spaces ; j++)
        {
            cout<<" ";
        }

        //stars
        for(int j = 1 ; j<= stars ; j++)
        {
            cout<<"*";
        }

        cout<<endl;
        if(i < n) spaces -= 2;
        else spaces +=2;

    }
}

/* 

****
*  *
*  *
****

*/

void print19(int n)
{
    for(int i =0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            if(i == 0 || i == n -1 || j == 0 || j == n-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}



/* 

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/
void print20(int n)
{
    for(int i =0 ; i < 2*n-1 ; i++)
    {
        for(int j = 0 ; j < 2*n-1 ; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n -2) - j;
            int down = (2*n -2) - i;

            cout<<(n- min(min(top,down),min(left , right)));
        }

        cout<<endl;
    }
}


int main()
{
    int n ;     
    cin>>n;

    // print6(n);
    // print7(n);

    print20(n);
}