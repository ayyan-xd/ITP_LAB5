#include <iostream>
using namespace std;

int main() {
    int size=5;
    double marks=0;
    double arr1[size], arr2[size];
    bool isCommon=false;
   cout<<"Array 1 :"<<endl;
   for(int i=0 ; i<size ; i++){
       cout<<"Enter marks for student "<<i+1<<" : ";
       cin>>arr1[i];
   }
   cout<<endl<<endl;
   cout<<"Array 2 :"<<endl;
   for(int i=0 ; i<size ; i++){
       cout<<"Enter marks for student "<<i+6<<" : ";
       cin>>arr2[i];
   }
   cout<<"Common values are : "<<endl;
   for(int i=0 ; i<size ; i++){
       for(int j=0 ; j<size ; j++){
           if(arr1[i]==arr2[j]){
               isCommon=true;
               cout<<"\t\t\t\t"<<arr1[i]<<endl;
           }
       }
   }
      return 0;
}
