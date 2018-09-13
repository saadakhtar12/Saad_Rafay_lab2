	void Class1::Transpose(int r, int c, int a[10][10], int b[10][10]) {

		int i = 0, j = 0, transpose[10][10];

		// finding transpose
		for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
			b[j][i] = a[i][j];
		}

	}