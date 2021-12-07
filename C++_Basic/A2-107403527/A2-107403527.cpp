/*
*   Assignment 2
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/

#include <iostream>
using namespace std;

int main()
{
    double num=0;
    double sum=0;
    double avg=0;
    int cou=0;

    for(int counter = 1;counter <= 10;counter ++ )
    {
        cin>>num;
        if((num<0&&num!=-1)||num>100)
        {
            counter --;
            continue;
        }
        else if(num==-1)
        {
            break;
        }
        else
        {
            sum += num;
        }
        cou = counter;
        avg = sum / counter;
    }

    cout<<""<<cou<<endl;
    cout<<"avg is "<<avg<<endl;

    int grade = avg/10;
    switch(grade)
    {
        case 10:
        case 9:
            cout<<"A"<<endl;
            break;
        case 8:
            cout<<"B"<<endl;
            break;
        case 7:
            cout<<"C"<<endl;
            break;
        case 6:
            cout<<"D"<<endl;
            break;
        default:
            cout<<"F"<<endl;
    }
}
