#include<iostream>
using namespace std;

int main(){


int marks[5]={100,125,236,344,455};
 cout << "Hello" << endl;
 //cout << marks[0] << endl;
 //cout << marks[3] << endl;

 cout << sizeof(marks[5]) << endl;
 //size showing 4 (0-4)

 /*
 int maxi = max(marks[5]);
 cout << maxi << endl;
*/

 for (int i =0;i<5;i++)
 {
     cout << "index " << i << " = " << marks[i] << endl;
 }

 // sum all elements
 int sum = 0;
 for (int i = 0; i<5 ;i++)
 {
     sum = sum + marks[i];
 }
 cout << "Sum is " << sum << endl ;

 //showing reverse // ptoblrm
/*
 for(int i =4;i<=0; i--)
 {
     cout << marks[i] << endl;
 }
*/


  cout << " " << endl;
 /*
  //Searching
  int a;
  if(marks[a] == 125)
    cout << "Found" << endl;
  else
    cout << "Not found" << endl;
*/
 //changing element
 marks[3] = 244;
 cout << "change index 3 to " << marks[3] <<  endl;


 cout << " " << endl;



 //problem
/*
 int marks1[3][2] = {{1,2},{3,4},{5,6}};

 for(int i =0; i<4; i++)
 {
     for(int j=0; j<3 ; j++)
     {
     cout << marks1[i][j] <<endl;
     }
     }
*/
 return 0;
}
