#include <stdio.h>
int main()
{
	int totalCount=0, unitT=0, unitP=0;
	int sizeCount[6]={0,};
	scanf("%d", &totalCount);
	for(int i=0; i<6; i++)
		scanf("%d", &sizeCount[i]);
	scanf("%d %d", &unitT, &unitP);
	int setT=0, setP=0, singleP=0;
	// 티셔츠 묶음 수 : 사이즈 별 (신청자 수 / 티셔츠 한 묶음 + 1)
 	for(int i=0; i<6; i++)
		setT += sizeCount[i]/unitT+(sizeCount[i]%unitT==0?0:1);
	// 펜 묶음 수 : 참가자 수 / 펜 한 묶음
	setP = totalCount/unitP;
	// 낱개로 사야하는 펜 : 참가자 수 % 펜 한 묶음
	singleP = totalCount%unitP;
	printf("%d\n%d %d", setT, setP, singleP);
}