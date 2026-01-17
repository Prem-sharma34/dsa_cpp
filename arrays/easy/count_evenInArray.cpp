// Count the number of Even elments in an Array


#include<iostream>

int main()
{
    int a[10] = {1, 4, 5 , 7 , 6 , 8 , 20 , 10 , 11 , 15};

    int even_count = 0 ;

    for(int i = 0 ; i < 10 ; i++){
        if(a[i] % 2 == 0)
        {
            even_count++;
        }
    }

    std::cout<<"Number of the even elmenent in the array: "<<even_count<<std::endl;
}