#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <algorithm>
#include <queue>
#include <iostream>
#include <time.h>

// Algospot 0-1수열 
int N;
int Data[1000001];
char InC[1000001];

int main(void)
{
	int i;
	int k;
	int num = 0;
	time_t st,et;
	int min, max;

	freopen("0-1수열.txt", "rt", stdin);

	scanf("%s", InC);
	scanf("%d", &N);

	for (k = 0; k<1000001; k++) {
		if (InC[k] == '\0') break;

		Data[k] = num;
		if (InC[k] != InC[k + 1]) {
			num++;
		}
	}
	st = clock();

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &min, &max);

		if (Data[min] == Data[max])
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	et = clock();

//	printf("time=%d\n", et - st);
	return 0;
}

