#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

class car{
    private:
    int price;
    public:
    int model_num;
    char *name;
    
    car(){
        name=NULL;
    }
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
        car(float p,int m, char *n){ //Parametric constructor
        price=p;    
        model_num=m; 
        name=new char[strlen(n)+1];              
        strcpy(name,n);
    }
   //deep memory
    car(car &x){
        cout<<endl<<"Copy Constructor"<<endl;
        price=x.price;
        model_num=x.model_num;
        name=new char[strlen(x.name)+1];
        strcpy(name,x.name);
    }
};

int main()
{
    car c(100,200,"BMW");
    car d(c);

    d.name[0]='A';
    c.print();
    d.print();    
return 0;
}