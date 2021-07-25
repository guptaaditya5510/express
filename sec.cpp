#include<iostream>

using namespace std;

int x=0;

class Item{
    public:

    Item(){
        x++;
        cout<<x<<endl;
    }
    ~Item(){
        x--;
        cout<<x<<endl;
    }
};

int main(){

    Item i1,i2,i3,i4;
    {
        Item i5;
    }
    {
        Item i6;
    }
    {
        Item i7;
    }


    return 0;
}