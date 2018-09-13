// Saad_Rafay_lab2.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Saad_Rafay_lab2.h"

namespace MatrixLibrary {
	void Class1::Transpose(int r, int c, int a[10][10], int b[10][10]) {

		int i = 0, j = 0, transpose[10][10];

		// finding transpose
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			b[j][i] = a[i][j];
		}

	}

	void Class1::Multiply(int r1, int c1, int r2, int c2, int a[10][10], int b[10][10], int mult[10][10]) {
		int i = 0, j = 0, k = 0;
		//checking if multiplication is possible
		while (c1 != r2)
		{
			return;
		}


		// declaring elements of matrix mult to 0.
		for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		{
			mult[i][j] = 0;
		}

		// Multiplying matrix a and b and storing in array mult.
		for (i = 0; i < r1; ++i)
		for (j = 0; j < c2; ++j)
		for (k = 0; k < c1; ++k)
		{
			mult[i][j] += a[i][k] * b[k][j];
		}

	}
	void Class1::Add(int a[][3], int b[][3], int sum[][3], int r, int c) {
		int  i = 0, j = 0;

		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sum[i][j] = a[i][j] + b[i][j];

	}

	void Class1::Sub(int a[][3], int b[][3], int sub[][3], int r, int c) {
		int i = 0, j = 0;

		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
			sub[i][j] = a[i][j] - b[i][j];

	}

}







