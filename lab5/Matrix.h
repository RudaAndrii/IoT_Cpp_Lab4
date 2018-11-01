#pragma once
class Matrix
{

private:
	int** matrix;
	int matrixSize;

public:

	Matrix();
	Matrix(int);
	~Matrix();

	int** getMatrix();
	void setMatrix(int **, int);
	double* rowAvg();
	double geometricMean(double*);
	void matrixMergeSort(int**);
	void mergeDecreasingSort(int *, int, int);
	void merge(int*, int, int, int);
	void fillMatrix();
	friend void showMatrix(Matrix);
};
