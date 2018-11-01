#include "Matrix.h"
#include <iostream>


int ** Matrix::getMatrix()
{
	return matrix;
}

void Matrix::setMatrix(int **matrix, int matrixSize)
{
	this->matrix = matrix;
	this->matrixSize = matrixSize;
}

void Matrix::mergeDecreasingSort(int* arr, int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;

		mergeDecreasingSort(arr, low, mid);
		mergeDecreasingSort(arr, mid + 1, high);

		merge(arr, low, high, mid);
	}
}

void Matrix::matrixMergeSort(int** matrix)
{
	for (int i = 0; i < matrixSize; i++) {
		mergeDecreasingSort(matrix[i], 0, matrixSize - 1);
	}
}

void Matrix::merge(int* arr, int low, int high, int mid)
{
	int firstSubArrayLength = mid - low + 1;
	int secondSubArrayLength = high - mid;

	int* firstSubArray = new int[firstSubArrayLength];
	int* secondSubArray = new int[secondSubArrayLength];

	for (int i = 0; i < firstSubArrayLength; i++) {
		firstSubArray[i] = arr[low + i];
	}
	for (int i = 0; i < secondSubArrayLength; i++) {
		secondSubArray[i] = arr[mid + 1 + i];
	}


	int firstIndex = 0, secondIndex = 0, mergedIndex = low;
	while (firstIndex < firstSubArrayLength && secondIndex < secondSubArrayLength) {
		if (firstSubArray[firstIndex] >= secondSubArray[secondIndex]) {
			arr[mergedIndex] = firstSubArray[firstIndex];
			firstIndex++;
		}
		else {
			arr[mergedIndex] = secondSubArray[secondIndex];
			secondIndex++;
		}
		mergedIndex++;
	}

	while (firstIndex < firstSubArrayLength) {
		arr[mergedIndex] = firstSubArray[firstIndex];
		mergedIndex++;
		firstIndex++;
	}

	while (secondIndex < secondSubArrayLength) {
		arr[mergedIndex] = secondSubArray[secondIndex];
		mergedIndex++;
		secondIndex++;
	}
}

void Matrix::fillMatrix()
{
	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++) {
			int element;
			std::cin >> element;
			matrix[i][j] = element;
		}
	}
}

double * Matrix::rowAvg()
{
	double* arr = new double[matrixSize];

	for (int i = 0; i < matrixSize; i++) {
		int sum = 0;
		for (int j = 0; j < matrixSize; j++) {
			sum += matrix[j][i];
		}
		arr[i] = (double) sum / (double) matrixSize;
	}

	return arr;
}

double Matrix::geometricMean(double* arr)
{
	int sum = 1;
	for (int i = 0; i < matrixSize; i++) {
		sum *= arr[i];
	}

	return pow(fabs(sum), 1.0 / matrixSize);
}

Matrix::Matrix()
{
}

Matrix::Matrix(int matrixSize): matrixSize(matrixSize)
{
	matrix = new int *[matrixSize];
	for (int i = 0; i < matrixSize; i++) {
		matrix[i] = new int[matrixSize];
	}
}

Matrix::~Matrix()
{
}

void showMatrix(Matrix object)
{
	for (int i = 0; i < object.matrixSize; i++) {
		for (int j = 0; j < object.matrixSize; j++) {
			 std::cout << "\t" << object.matrix[i][j];
		}
		std::cout << "\n";
	}
}
