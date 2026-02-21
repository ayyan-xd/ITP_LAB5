#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int p_count = 0, f_count = 0;
    double p_sum, f_sum, p_avg = 0.0, f_avg = 0.0, marks = 0.0;
    double pass[size]; 
    double fail[size];
       for (int i = 1; i <= size; i++) {
       cout << "Enter marks for Student " << i << " : ";
       cin >> marks;
    if(marks==-1){
        return 0;
    }
    if(marks>=5 && marks<=10){
        pass[p_count]=marks;
        p_count++;
        p_sum+=marks;
    }
    else{
        fail[f_count]=marks;
        f_count++;
        f_sum+=marks;
    }
    }
    cout<<endl<<endl;
    cout<<"Array 1 values are = ||";
    for(int i=0 ; i<p_count ; i++){
        cout<<" "<<pass[i]<<" ||";
    }
    cout<<endl<<endl;
    cout<<"Array 2 values are = ||";
    for(int i=0 ; i<f_count ; i++){
        cout<<" "<<fail[i]<<" ||";
    }
    cout<<endl<<endl;
    p_avg=p_sum/p_count;
    f_avg=f_sum/f_count;
    cout<<"Average of Array 1 is = "<<p_avg<<endl;
    cout<<"Average of Array 2 is = "<<f_avg<<endl<<endl;
    cout<<"Pass = "<<p_count<<endl;
    cout<<"Fail = "<<f_count<<endl;
    return 0;
}
