#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

class car{
    private:
    int price;
    public:
    int model_num;
    char name[20];
    
    void print(){
        cout<<"name"<<name<<endl;   //Concept of Getters
        cout<<"Model"<<model_num<<endl;
        cout<<"Price"<<price<<endl;
    }

    float set_price(float p){
        int msp=111;
        if(p>msp){
            price=p;    //Concept of Setters
        }
        else{
            price=msp;
        }
        return 0;
    }
    car(){  //constructor
        cout<<"this is a user defined constructor"<<endl;
    }                                                  //Only one of the Constructor will be executed
    car(float p,int m, char *n){ //Parametric constructor
        price=p;    
        model_num=m;               
        strcpy(name,n);
    }
   //having lot of constructor inside class its called constructor overloading
    car(car &x){
        cout<<endl<<"Copy Constructor"<<endl;
        price=x.price;
        model_num=x.model_num;
        strcpy(name,x.name);
    }
};

int main()
{
    car d;
   d.name[0]='B';
   d.name[1]='M';
   d.name[2]='W';
   d.name[3]='\0';
    d.model_num=1;  
    d.set_price(300);
    cout<<"Car D"<<endl<<endl;
    d.print();
    car c2(d);
    cout<<endl<<"copy of Car D"<<endl<<endl;
    c2.print();
    car c1(100,1,"AUDI"); //user defined constructor not executed
    cout<<endl<<"Car C1"<<endl<<endl;
    c1.print();
car c3(c1); //copy constructor
c3.set_price(675);
cout<<endl<<"Copy of Car C1"<<endl<<endl;
c3.print();
return 0;
}