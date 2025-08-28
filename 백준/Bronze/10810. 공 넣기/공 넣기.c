#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int N, M;
	scanf("%d %d", &N, &M);

	int *array = (int*)calloc(N, sizeof(int));
	if (array == NULL) exit(1);

	for (int x = 0; x < M; x++) {
		int i, j, k;
		scanf("%d %d %d", &i, &j, &k);

		for (int y = i - 1; y < j; y++) {
			array[y] = k;
		}
	}

	for (int i = 0; i < N; i++) printf("%d ", array[i]);
	printf("\n");

	free(array);

	return 0;
}