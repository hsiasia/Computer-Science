/*
*   Assignment 3
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/

#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;
    double num3;

    cout<<"Please key in first number:"<<endl;
    cin>>num1;
    cout<<"Please key in second number:"<<endl;
    cin>>num2;
    cout<<"Please key in third number:"<<endl;
    cin>>num3;

    if((num1+num2>num3&&num3+num2>num1&&num1+num3>num2)&&(num1==num2||num2==num3||num1==num3))
    {
        if(num1==num2&&num2==num3)
        {
            cout<<"Regular triangle"<<endl;
        }
        else if(num1*num1+num2*num2==num3*num3||num3*num3+num2*num2==num1*num1||num1*num1+num3*num3==num2*num2)
        {
            cout<<"Isosceles right triangle"<<endl;
        }
        else
        {
            cout<<"Isosceles triangle"<<endl;
        }
    }
    else if(num1*num1+num2*num2==num3*num3||num3*num3+num2*num2==num1*num1||num1*num1+num3*num3==num2*num2)
    {
        cout<<"Right triangle"<<endl;
    }
    else if(num1+num2>num3&&num3+num2>num1&&num1+num3>num2)
    {
        cout<<"Triangle"<<endl;
    }
    else
    {
        cout<<"Not triangle"<<endl;
    }
}
