#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
	Matrix matrix(5);
	matrix.fillMatrix();
	matrix.matrixMergeSort(matrix.getMatrix());
	showMatrix(matrix);

	double *arr = matrix.rowAvg();
	
	cout << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}

	cout << endl << matrix.geometricMean(matrix.rowAvg());
	
	return 0;
}