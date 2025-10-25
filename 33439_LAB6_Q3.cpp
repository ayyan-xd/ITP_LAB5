#include<iostream>
using namespace std;
int main(){
    /*code is generic for both even and odd and the size can be set to any.*/
    int size=6;
    bool isSymmetric=true;
 int arr[size];
 for(int i=0 ; i<size ; i++){
     cout<<"Enter element a["<<i<<"]= ";
    cin>>arr[i];
 }
 for(int i=0 ; i<size ; i++){
     if(arr[i]!=arr[size-1-i]){
         isSymmetric=false;
     }
 }
 if(isSymmetric){
     cout<<"Array is symmetric.";
 }
 else{
     cout<<"Array is not symmetric.";
 }
return 0;
}