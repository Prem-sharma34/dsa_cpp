// Find the sum of all the elmenets in an Array


#include<iostream>

int main(){
    int a[5] = {4, 1, 7, 5 , 10};

    int sum = 0;
    
    for(int i = 0 ; i < 5 ; i++){
        sum = sum + a[i];
    }

    std::cout<<"The sum of the array element: "<<sum<<std::endl;
}