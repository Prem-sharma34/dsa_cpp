/* Bubble Sort:
Logic:
    In each iternation , place the largest element in that iteration to it's correct position,
    by swap them with element next to it.

 */

 #include<iostream>
 


 void bubble_sort(int a[] , int n)
 {
    std::cout<<"The arry before sorting: ";
    for(int i = 0 ; i < n; i++)
    {
        std::cout<<a[i]<<" ";
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n-1-i ; j++) // Why we are adding n-1-j , 1 in this condition , is because we are checking one step ahead in the condition below 
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }  
        }

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
    int a [ ] = {3,5 , 8 , 9 , -1 , 7 , 6};
    int n = sizeof(a)/sizeof(a[0]);

    bubble_sort(a,n);

    return 0;
 }