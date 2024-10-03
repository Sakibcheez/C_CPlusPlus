#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Row: " << endl;
    cin >> row;//5

    int tempArr[row];// size = 5
    for(int i=0; i<row; i++)
    {
        cout << "Size of Row " << i << ": ";
        cin >> tempArr[i];
    }

    // 2D Ragged Array creation
    int **ptr = new int*[row];
    for(int i=0; i<row; i++)
    {
        int size = tempArr[i];//size = 4
        ptr[i] = new int[size];
    }

    //Value Insertion
    for(int i=0; i<row; i++)
    {
        cout << "Row " << i << ": (Enter " << tempArr[i] << " values)" << endl;
        for(int j=0; j<tempArr[i]; j++)
        {
            cin >> ptr[i][j];
        }
    }
    cout << endl << endl;

    //Printing
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<tempArr[i]; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }


}
