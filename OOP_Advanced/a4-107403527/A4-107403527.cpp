#include <iostream>

using namespace std;

class Square{
public:
    //write something
    Square(int r){
        area=r*r;
    }
    friend class Area;
    friend class Circle;
private:
    float area;
};

class Circle{
public:
    //write something
    Circle(int r){
        area=r*r*pi;
    }
    friend class Area;
    static int circleArea(int r){
        return r*r*pi;
    }
    void compareArea(Square &S){
        if(area>S.area){
            cout<<"Circle one is the biggest"<<endl;
        }
        else
            cout<<"Circle one is not the biggest"<<endl;
    }
private:
    static const int pi = 3;
    float area;
};

class Area{
public:
    //write something
    Area(){}
    static void compare(Circle C,Square S){
        if(S.area>C.area){
            cout<<"Square one is the biggest"<<endl;
        }
        else
            cout<<"Square one is not the biggest"<<endl;
    }
};

int main(){
    int r;
    cin >> r;
    cout << "Circle Area:" << Circle::circleArea(r) << endl;

    //new�@�ӥb�|��10��Circle Class
    Circle r1(10);
    //new�@�ӥb�|��3��Circle Class
    Circle r2(3);
    //new�@�������3��Square Class 9
    Square s1(3);
    //new�@�������10��Square Class 100
    Square s2(10);
    //r1�Ms1������n
    r1.compareArea(s1);
    //r2�Ms2������n
    Area::compare(r2,s2);
    return 0;
}
