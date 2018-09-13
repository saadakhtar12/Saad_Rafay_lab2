//methods for add and sub	
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