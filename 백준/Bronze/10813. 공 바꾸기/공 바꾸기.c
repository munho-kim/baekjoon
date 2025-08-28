#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 1-N까지 바구니에
	// 1-N번호가 적힌 공이 들어 있다
	int N, M;
	scanf("%d %d", &N, &M);

	// N개 만큼 동적 할당
	// 동적 할당한 곳에 1-N 대입
	int* array = (int*)malloc(sizeof(int) * N);
	if (array == NULL) exit(1);

	for (int i = 0; i < N; i++) {
		array[i] = i + 1;
	}

	for (int i = 0; i < M; i++) {
		// 공 바꾸기
		int x, y;
		scanf("%d %d", &x, &y);
		int temp = array[x - 1];
		array[x - 1] = array[y - 1];
		array[y - 1] = temp;
	}

	for (int i = 0; i < N; i++) printf("%d ", array[i]);

	free(array);

	return 0;
}