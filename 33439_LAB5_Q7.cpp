#include<iostream>
using namespace std;
int main(){
    int num=0, digitcount=0, intsum=0, digitalroot=0 ;
    cout<<"Enter a number greater than or equal to four digits : ";
    cin>>num;
    if(num<1000){
        cout<<"Invalid Input.";
        return 1;
    }
    int dcheck=num;
    while(dcheck>0){
        digitcount++;
        dcheck/=10;
    }
    cout<<"Total num of digits : "<<digitcount<<endl;
    digitalroot=num;
     while(digitalroot>=10){
       int temp;
       intsum=0;
       int var=digitalroot;
       while(var>0){
        temp=var%10;
        intsum+=temp;
        var/=10;
       }
         digitalroot=intsum;
         }
       cout<<"Digital root of number : "<<digitalroot;
return 0;
}
