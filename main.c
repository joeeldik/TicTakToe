#include <stdio.h>

// Stores matrix content
char matrix[3][3] = {
	{0, 0, 0},
	{0, 0, 0},
	{0, 0, 0}
};

char tempMatrix[3][3] = {
	{'x', 0, 0},
	{0, 'x', 0},
	{0, 0, 'x'}
};

// Prints matrix
void printMatrix() {
	for(int xPos = 0; xPos<3; xPos++){
		for(int yPos = 0; yPos<3; yPos++){
//			char currentChar = matrix[][];
			printf("[%d %d]  ", xPos, yPos);
		}
		printf("\n");
		// Line finished
	}
}

// Enters move into the matrix.
// x is position along x axis
// y is position along y axis\
// type is x or o
void enterMove(int x, int y, char type) {
	matrix[x][y] = type;
	scanf("%c", type)
}


// Sample test
void runTest() {
	enterMove(0, 0, 'x');
	enterMove(1, 0, 'o');
	enterMove(0, 1, 'x');
	enterMove(2, 0, 'o');
	enterMove(0, 2, 'x');
	
	// Should win for X
}

/**
 * Goes through matrix and prints win or lose message
 */
void detectWin() {
}

int main(void) {
	printf("Hello, world!\n");
	printMatrix();
	runTest();
	printMatrix();
	return 0;
}