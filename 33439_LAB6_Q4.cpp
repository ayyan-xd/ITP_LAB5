#include<iostream>
#include<random>
#include<time.h>
using namespace std;
int main(){
 srand(time(0));
 float sum=0, avg=0;
 //set size//
 int size=6;
 float arr[size];
 for(int i=0 ; i<size ; i++){
     arr[i]=(double)rand()/RAND_MAX;
 }
 for(int i=0 ; i<size ; i++){
     sum+=arr[i];
 }
  for(int i=0 ; i<size ; i++){
     avg+=arr[i]/size;
 }
 for(int i=0 ; i<size ; i++){
     cout<<"Array elements are : "<<arr[i]<<" "<<endl;
 }
 cout<<endl<<endl;
 cout<<"Sum is : "<<sum<<endl;
 cout<<"Average is : "<<avg<<endl;
return 0;
}