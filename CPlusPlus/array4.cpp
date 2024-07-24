#include<iostream>
using namespace std;

int main(){

    int marks[5]={100,125,236,344,455};
    int a;
    while(true){
    cout << "\nEnter Index Number 0-4 " << endl;
    cin >> a;

    if(0 <= a && a <= 4)
    cout << marks[a];
    else
    cout << "Please Enter Correct Index" << endl;
    };

 return 0;
}
