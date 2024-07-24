#include<iostream>
using namespace std;

// total marks calculation programme and find how many students get 50-100
int main(){

    int i;

    int ft_marks[10] = {83,96,85,75,50,51,100,99,50,51};
    int st_marks[10] = {84,95,89,65,60,91,90,99,54,55};
    int final_marks[10] = {64,55,79,55,80,71,50,69,84,75};


    double total_marks[10];

    for(i = 0; i<10;i++)
    {
    total_marks[i] = ft_marks[i]/4.0 + st_marks[i]/4.0 + final_marks[i]/2.0 ;
    }

    for(i =0 ; i<10 ; i++)
    {
        cout << total_marks[i] << "  " ;
    }

    cout << " " <<  endl;
    cout << endl;

    int marks, count;

    for(marks =0; marks <=100; marks++)
    {
        count =0;
        for(i=0; i<10 ; i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
         cout << "Marks " << marks << " Count " << count << endl ;
    }

    return 0;


}
