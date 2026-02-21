#include<iostream>
using namespace std;
int main(){
    int num, count;
    bool isFound=false;
int arr[10];
cout<<"Enter array elements : ";
for(int i=0 ; i<10 ; i++){
    cin>>arr[i];
}
cout<<"Enter number to be searched : ";
cin>>num;
for(int i=0 ; i<10 ; i++){
if(arr[i]==num){
    isFound=true;
    count++;
    }
}
if(isFound){
    cout<<num<<" occurs "<<count<< " times.";
    }
if(!isFound){
    cout<<"Number does not occur in array.";
}
return 0;
}
