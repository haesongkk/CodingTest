#include <stdio.h>
#include <stdlib.h>
int main()
{
	// 과목 수를 받아서 저장한다
	int subjectCount = 0;
	scanf("%d", &subjectCount);
	// 점수 저장할 배열 메모리 할당
	int* arrScore = (int*)malloc(sizeof(int) * subjectCount);
	// 점수를 저장하면서 최고점 체크하기
	int maxScore = 0;
	for (int i = 0; i < subjectCount; i++)
	{
		scanf("%d", &arrScore[i]);
		if (arrScore[i] > maxScore) maxScore = arrScore[i];
	}
	// 새로운 점수의 평균 구하기
	double average = 0;
	for (int i = 0; i < subjectCount; i++)
		average += (double)arrScore[i] / maxScore * 100 / subjectCount;
	printf("%lf", average);
}