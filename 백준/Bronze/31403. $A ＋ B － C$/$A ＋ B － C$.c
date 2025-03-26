#pragma warning (disable:4996)
#include <stdio.h>
int GetArrSize(char* _sz)
{
	for (int i = 0; i < 5; i++)
		if (_sz[i] == '\0')
			return i;
}
int StringToInt(char* _sz, int _size)
{
	int result = 0;
	for (int i = 0; i < _size; i++)
	{
		int num = _sz[i] - '0';
		int digits = _size - i - 1;
		for (int j = 0; j < digits; j++) num *= 10;
		result += num;
	}
	return result;
}
int main()
{
	char szA[5] = "", szB[5] = "", szC[5] = "";
	int sizeA = 0, sizeB = 0, sizeC = 0;
	int A = 0, B = 0, C = 0;
	int rtNum = 0, rtStr = 0;
	scanf("%s %s %s", szA, szB, szC);
	sizeA = GetArrSize(szA);
	sizeB = GetArrSize(szB);
	sizeC = GetArrSize(szC);
	A = StringToInt(szA, sizeA);
	B = StringToInt(szB, sizeB);
	C = StringToInt(szC, sizeC);
	rtNum = A + B - C;
	for (int i = 0; i < sizeB; i++) A *= 10;
	rtStr = A + B - C;
	printf("%d\n%d", rtNum, rtStr);
}