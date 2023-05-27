#include<iostream>
#include<string>
#include "exercise.h"
using namespace std;

int power(int a, int b) {
	int ans=1;
		for (int i = 0; i < b; i++) {
			ans = ans * a;
		}
		return ans;
}

double power(double a,int b) {
	double ans=1;
	for (int i = 0; i < b; i++) {
		ans = ans * a;
	}
	return ans;
}

float power(float a, int b) {
	float ans = 1;
	for (int i = 0; i < b; i++) {
		ans = ans * a;
	}
	return ans;
}

int* creatAndInput(int& size) {
	cout << "Enter size of arr: " << endl;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cout << "Enter num: " << i+1 << endl;
		cin >> arr[i];
	}
	return arr;
}

int** creatAndInput(int& row,int& col) {
	cout << "Enter size of row: " << endl;
	cin >> row;
	cout << "Enter size of col: " << endl;
	cin >> col;
	int** matrix = new int*[row];
	for (int i = 0; i < row; i++)
		matrix[i] = new int[col];
	for (int i = 0; i < row; i++) {
		for (int j = 0;j < col; j++) {
			cout << "Enter num in row " << i + 1 << " and col " << j+1 << endl;
			cin >> matrix[i][j];
		}
		
	}
	return matrix;
}

void main() {
	int aInt = 0, b = 0;
	double aDouble = 0;
	float aFloat = 0;
	cout << "Int - Enter base: " << endl;
	cin >> aInt;
	cout << "Enter power: " << endl;
	cin >> b;
	cout << power(aInt, b) << endl;
	cout << "Double - Enter base: " << endl;
	cin >> aDouble;
	cout << "Enter power: " << endl;
	cin >> b;
	cout << power(aDouble, b) << endl;
	cout << "Float - enter base: " << endl;
	cin >> aFloat;
	cout << "Enter power: " << endl;
	cin >> b;
	cout << power(aFloat, b) << endl;
	cout << "************************" << endl;
	int size = 0;
	int* arr = creatAndInput(size);
	cout <<"Size: " << size << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << ",";
	}
	cout << "\n";
	cout << "************************" << endl;
	int row = 0, col = 0;
	int ** matrix = creatAndInput(row, col);
	cout << "Row: " << row << " Col:  " << col << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << ",";
		}
		cout << "\n";
	}

	delete[] arr;
	for (int i = 0; i < row; i++) {
		delete[]matrix[i];
	}
	delete[] matrix;
}

