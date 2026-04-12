#include<iostream>
using namespace std;
int main(){
    double base=3.14, diff=0.10;
double arr[6];
arr[0]=base;
for(int i=1 ; i<6 ; i++){
        arr[i]=arr[i-1]+diff;
  }
for(int i=0 ; i<5; i++){
    for(int j=i+1 ; j<6 ; j++){
        if(arr[i]<arr[j]){
            double temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"Array in descending order is : "<<endl<<endl;
for(int i=0 ; i<6; i++){
    cout<<arr[i]<<" ";
}
return 0;
}
