#include<iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    cout<<"The interger roots for given problem are : "<<endl;
    for(int a=-10 ; a<=10 ; a++){
        for(int b=-10 ; b<=10 ; b++){
            for(int c=-10 ; c<=10 ; c++){
                if(3*a+7*b-5*c==10){
                    cout<<"Solution : \ta= "<<a<<"\tb= "<<b<<"\tc= "<<c<<endl;
                }
            }
        }
    }
    return 0;
}