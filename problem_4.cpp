#include<iostream>
using namespace std;
class BCA_OOPS{
    int x;
    public:
        // default constructorf
        BCA_OOPS(){
            cout<<"Enter the value of x: ";
            cin>>x;
        }
        // parametrized constructor
        BCA_OOPS(int x){
            this->x = x;
        }
        // copy constructor
        BCA_OOPS(BCA_OOPS &t){
            x = t.x;
        }
        friend int showData(BCA_OOPS &obj);
};
int showData(BCA_OOPS &obj){
    cout<<"Value of x is "<<obj.x<<endl;
    cout<<"Decrement the values"<<endl;
    // obj.x=(obj.x>=0 && obj.x<=10)?obj.x=obj.x-2 :obj.x=obj.x-5;
    if(obj.x>=0 && obj.x<=10){
        obj.x = obj.x -2;
        // obj.x-=2;
    }
    else{
        obj.x = obj.x -5;
        // obj.x-=5;
    }
    cout<<obj.x<<endl;
}

int main(){
    BCA_OOPS obj,obj1(5),obj2(obj);
    cout<<"Using default Constructor"<<endl;
    showData(obj);
    cout<<"Using Parameterized Constructor"<<endl;
    showData(obj1);
    cout<<"Using Copy Constructor"<<endl;
    showData(obj2);

}