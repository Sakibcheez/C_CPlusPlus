#include<iostream>
using namespace std;

int main(){

    int i;
    int math[5];
    int eng[5];
    int gk[5];

    cout << "***************Welcome****************\n";

    cout << "*        Enter Marks for Maths         *" << endl;

    for(i=0; i < 5; i++)
    {
        cin >> math[i];
    }

    cout << "Enter Marks for eng" << endl;

    for(i=0; i < 5; i++)
    {
        cin >> eng[i];
    }

    cout << "Enter Marks for gk" << endl;

    for(i=0; i < 5; i++)
    {
        cin >> gk[i];
    }

cout << "***********Display Marks***************\n";
cout << "In maths \n";
    for(i=0 ; i<5; i++)
{
    cout << math[i] << " " ;
}
cout << endl;

cout << "in English \n";

   for(i=0 ; i<5; i++)
{
    cout << eng[i] << " "  ;
}
cout << endl ;
cout << "in gk\n";
   for(i=0 ; i<5; i++)
{
    cout <<gk[i] << " " ;
}

cout << endl;
//int sum = 0;
int j ;

int sum[5];

for(i=0, j=0; i<5 ; i++, j++)
{
   sum[j] =  math[i] + eng[i] + gk[i];
}

cout << "**************Total Marks Individual************\n";
for(j=0;j<5 ;j++)
{
cout << sum[j] << " " ;
}


    return 0;
}
