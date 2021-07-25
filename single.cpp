#include<iostream>

using namespace std;

class first{
    protected:
        int x,y;

    public:
        void input(int a,int b){
            x=a;
            y=b;
        }
};
class sec:public first{
    public:
    int sum(){
        return(x+y);
    }

};

int main(){

    sec s;
    s.input(2,3);
    cout<<s.sum();

    return 0;
}