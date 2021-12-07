/*
*   Assignment 1
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/

#include <iostream>

int main()
{
    int num1;
    int num2;
    int num3;

    std::cin>>num1;
    std::cin>>num2;
    std::cin>>num3;

    if(num1&&num2&&num3>2147483674)
        {
        std::cout<<"error";
        std::cout<<"\n";
        }
    else
        {
        std::cout<<""<<num3<<num2<<num1;
        std::cout<<"\n";
        }
}
