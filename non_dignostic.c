#include <stdio.h>

// function to get the sum of non-diagonal element
// n: order of matrkx
// matrix[][]: matrix of order n
int sum_non_diagonal(int n, int matrix[][50]) {

	int sum = 0;
	for(int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			// if i != j, then it implies that
			// matrix[i][j] is a non-diagonal elements
			// thus, we add it to the final sum
			if (i != j) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}

int main() {

	int n;
	int matrix[50][50];

	printf("Enter Order of Matrix: ");
	scanf("%d", &n);

	printf("Enter Matrix Elements:\n");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("Sum of non-diagonal elements: %d", sum_non_diagonal(n, matrix));

}
