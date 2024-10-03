#include<iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter Array Size" << endl ;
    cin >> m;
    int* a = new int[m];

    cout << "Enter Value" << endl ;

    for(int i = 0 ; i<m ; i++ )
    cin >> a[i] ;


    for(int i = 0 ; i<m ; i++ )
    cout << a[i] << " " ;

    delete[] a ;
}

