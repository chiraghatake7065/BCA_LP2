#include<iostream>
using namespace std;

class Student{
    public:
        string Name;
        int Age;
        string City;
        int academic_fee;

        void get(){
            cout<<"Enter your name: ";
            getline(cin,Name);
            cout<<"Enter you age ";
            cin>>Age;
            while(Age>=120){
                cout<<"Input Valid Age"<<endl;
                cin>>Age;
            }
            cin.ignore();
            cout<<"Enter your city: ";
            getline(cin,City);
            cout<<"Enter your academic fees: ";
            cin>>academic_fee;
        }
};

class Transport: public Student{
int route;
int bus_fees;
public:
    void transport(){
        cout<<"Enter your route: ";
        cin>>route;
        cout<<"Enter your bus fees: ";
        cin>>bus_fees;
    }
    void show(){
        cout<<"------Displaying Details---------"<<endl;
        cout<<"Your name is "<<Name<<endl;
        cout<<"Your age is "<<Age<<endl;
        cout<<"Your city "<<City<<endl;
        cout<<"Your academic fees "<<academic_fee<<endl;
    }
};
int main(){
    Transport obj;
    obj.get();
    obj.show();
}