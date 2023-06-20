#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void main() {
	int num;
	
	scanf("%d", &num);
	printf("%d\n", num);
	printf("num=%d\n", num);
}*/

/*void main() {
	int age;
	int gkrsus;
	float zl;
	int akrlf;
	
	printf("□age:");
	scanf("%d", &age);
	printf("▣%d\n\n□학년:", age);
	scanf("%d", &gkrsus);
	printf("▣%d\n\n□누군가의 키:", gkrsus);
	scanf("%f", &zl);
	printf("▣%.1f\n\n□마라톤 길이:", zl);
	scanf("%d", &akrlf);
	printf("▣%d", akrlf);
}*/

/*void main() {
	int dlfqjs;
	int dlqjs;
	float gksqjs;
	float enqjs;
	
	scanf("%d ", &dlfqjs);
	scanf("%d", &dlqjs);
	printf("1=>%d 2=>%d \n\n", dlfqjs, dlqjs);

	scanf("%d %d", &dlfqjs, &dlqjs);
	printf("1=>%d 2=>%d \n\n", dlfqjs, dlqjs);

	scanf("%f ", &gksqjs);
	scanf("%f", &enqjs);
	printf("1=>%.0f 2=>%.0f \n\n", gksqjs, enqjs);

	scanf("1:%f 2:%f", &gksqjs, &enqjs);
	printf("1=>%.0f 2=>%.0f", gksqjs, enqjs);
}*/
/*void main() {
	int ehd;
	int gh;
	float zl;
	float anrp;
	
	scanf("%d %d", &ehd, &gh);
	printf("%d동 %d호\n\n", ehd, gh);
	scanf("%fcm %fkg", &zl, &anrp);
	printf("키:%.2fcm 몸무게:%.2fkg\n\n", zl, anrp);
}*/

/*void main() {
	int dlf;
	int dl;
	float tka;
	
	printf("□학번(" "로 구분):");
	scanf("%d %d %d", &dlf, &dl, &tka);
	printf("▣%d학년 %d반 %d번\n\n년.월,.일:", dlf, dl, tka);
	scanf("%d.%d.%d", &dlf, &dl, &tka);
	printf("▣%d년 %d월 %d일\n\n털실의 길이(m), 사과 상자의 무게(kg):", dlf, dl, tka);
	scanf("%dm, %dkg", &dlf, &dl);
	printf("털실의 길이:%dm\n\n사과 상자의 무게:%dlf", &dl);
}*/

void main() {
	char c;
	char c1;
	char c2;
	char c3;
	char c4;
	
	printf("문자 하나:");
	scanf("%c", &c);
	printf("%c\n5자리 단어:", c);
	scanf("%c%c%c%c%c", &c, &c1, &c2, &c3, &c4);
	printf("=>%c%c%c%c%c\n	", &c, &c1, &c2, &c3, &c4);
}
