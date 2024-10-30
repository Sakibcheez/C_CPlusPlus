//Sakib Ahmed Shishir
// 231-2546-642
//CSE225
//HW-1

#include <iostream>

using namespace std;

void hanoi(int n, char src, char dst, char aux, int* count) {
    if (n == 1) {
        printf("Move disc from peg %c to peg %c\n", src, dst);
        (*count)++; // Increment the move counter
    } else {
        hanoi(n - 1, src, aux, dst, count);
        hanoi(1, src, dst, aux, count);
        hanoi(n - 1, aux, dst, src, count);
    }

}

int main()
{
    int i;
     int moveCount = 0; // Counter for moves
    cout << "Enter Number of Disk: " ;
    cin >> i ;
	hanoi(i, 'A', 'C', 'B', &moveCount);
	printf("\nTotal number of moves: %d\n", moveCount); // follows 2^n-1 formula

	return 0;
}

