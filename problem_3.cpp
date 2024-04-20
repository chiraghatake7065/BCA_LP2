#include<iostream>
using namespace std;

class Test{
    int a,b,c;
    public:
        void getData(int n ){
            a = n;
        }
        void getData(int n, int n1 ){
            a = n;
            b = n1;
        }
        void getData(int n, int n1, int n2){
             a = n;
             b = n1;
             c = n2;
        }
        void showData(){
            cout<<"A: "<<a<<endl;
            cout<<"B: "<<b<<endl;
            cout<<"C: "<<c<<endl;
        }
};
int main(){
    Test obj,obj1,obj2;
    obj.getData(5);
    obj1.getData(6,2);
    obj2.getData(1,3,4);
    cout<<"Obj Called"<<endl;
    obj.showData();
    cout<<"Obj1 Called"<<endl;
    obj1.showData();
    cout<<"Obj2 Called"<<endl;
    obj2.showData();
}