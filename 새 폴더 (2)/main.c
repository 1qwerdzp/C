#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* int main(int argc, char *argv[]) {
	printf("내 이름은 %s 입니다.\n", "이시후");
	
	printf("나는 %d살입니다.\n", 15);
	 
	printf("나의 혈액형은 %c입니다.\n", 'A');
	
	printf("나의 시력은 %.1f/%.1f입니다.\n", 0.5, 0.5); 
	return 0;
}*/

/* int main(){
	printf("나는 %d살 입니다.\n", 2 * 10);
	printf("나의 혈액형은 %d입니다.\n", 'A');
} */

/*void main()
{
	int grade = 2;
	int class = 5;
	int number = 25;
	
	printf("%d학년 %d반 %d번", grade, class, number);
}*/

/*int main(){
	int y=2019;
	int a=3;
	double pi=3.1415926535897932384626433832795;
	double m=42.195;
	printf("%d년 %d월 알파고 승리\n", y, a);
	printf("3D 프린터로 집 짓기\n");
	printf("원주율=%.2lf\n", pi);
	printf("%.3lfkm 마라톤\n", m);
}*/
int main() {
	int i=153;
	double d=42.195;
	char c='a';
	printf("%d\n",i);
	printf("%d\n",i*-1);
	printf("%.3lf\n", d);
	printf("%.3lf\n", d*-1);
	printf("%c\n", c);
	c='A';
	printf("%c\n", c);
	printf("%s\n", "Artificial lntelligence");
	printf("%s\n", "마법 민스키");
	int in=255;
	printf("%d %o %x", in, in, in); 
}
