#include<iostream>
using namespace std;

int main(){

    // find problem


    int ara1[] = {10,20,30,40,50,60,70,80,90,100};

    int i, j, temp;

    for (i =0 , j=9 ; i < 10 ; i++,j--)

    {
        temp = ara1[j];
        ara1[j] = ara1[i];
        ara1[i] = temp ;

    }

    for(i =0;i <10 ; i++)
    {
    cout << ara1[i] << " " << endl;
    }

 return 0;
}
