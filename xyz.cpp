#include<iostream>

using namespace std;

class Item{
    public:
        int sum(int a,int b){
            int c=a+b;
            return(c);
        }
        int sum(int a,int b, int c){
            return(sum(a,b)+c);
        }
};
int main(){
    Item i1;
    cout<<i1.sum(2,3)<<endl;
    cout<<i1.sum(1,2,3);
    return 0;
}