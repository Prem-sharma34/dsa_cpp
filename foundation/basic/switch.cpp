#include<iostream>

int main()
{
    int day;
    int hour = 1;
    std::cin>>day;
    

    switch(day)
    {
        case 1:
           std::cout<<"one";
           break;
        case 2:
            
            std::cout<<"two";
            switch(hour)
            {
                case 1:
                    std::cout<<"ok";
                    break;
                default:
                    std::cout<<"out of hour";
                    break;
            }
            break;
        case 3:
            std::cout<<"three";
            break;
        default:
            std::cout<<"invalid number";
            break;
    }
    return 0;
}