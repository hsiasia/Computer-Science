/*
*   Assignment 4
*   Name:鈕愷夏
*   Student Number:107403527
*   Course 2019-CE1001
*/

#include <iostream>
using namespace std;

void find_f(int);
string find_p(int);

int main()
{
    int num;

    cin>>num;
    find_f(num);
}

void find_f(int x)
{
    for(int counter=1;counter<=x;counter++)
    {
        if(x%counter==0)
        {
            cout<<counter<<find_p(counter)<<endl;
        }
    }

}
string find_p(int y)
{
    bool b = true;
    for(int coun=2;coun<y;coun++)
    {
        if(y%coun==0)
        {
            b = false;
        }
    }
    if(y==1 || b == false)
    {
        return " n";
    }
    else
    {
        return " y";
    }
}
