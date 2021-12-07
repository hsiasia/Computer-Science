/*
*   Assignment5
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/

#include <iostream>
using namespace std;

int inputf(int);

int main()
{
    int num=1;
    while(num!=0)
        {
        cin>>num;
        if(num>0&&num<=500)
            {
                inputf(num);
                cout<<inputf(num)<<endl;
            }
        else
            {
                num=0;
            }
        }
}

int inputf(int numm)
{
    int renum=0;
    if(numm<=4)
        {
            renum=3;
        }
    else if(numm>=10)
        {
            renum=1+inputf(numm-22)+inputf(inputf(numm-30)-30);
        }
    else if(numm<=9&&numm>=5)
        {
            renum=2+inputf(numm-2);
        }
    return renum;
}
