#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int Dec;
	char s2[20];
	char s8[20];
	char s16[20];
	
	printf("請輸入一個十進位數字:");
	scanf("%d",&Dec);
	
	itoa(Dec,s2,2);
	itoa(Dec,s8,8);
	itoa(Dec,s16,16);
	
	printf("轉換後二進制為%s\n",s2);
	printf("轉換後八進制為%s\n",s8);
	printf("轉換後十六進制為%s\n",s16);
	
	system("pause");
	return 0;
}
