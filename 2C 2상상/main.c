#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//반복문으로 A~Z, a~z 출력(32p, 2번) 
/*int main(int argc, char *argv[]) {
	int i;
	for(i='A'; i+1<=26+'A'; i++){
		printf("%2c", i);
	}
	printf("\t");
	for(i='a'; i+1<=26+'a'; i++){
		printf("%2c", i);
	}
	return 0;
}*/

//아스키코드 숫자인 문자를 3개 입력받아 3자리 정수 출력(32p, 3번) 
/*int main(int argc, char *argv[]) {
	int i;
	char c1, c2, c3;
	
	printf("입력: ");
	scanf("%c, %c, %c", &c1, &c2, &c3);
	i=100*c1+10*c2+c3;
	printf("\n출력: %d", i-5328);
	return 0;
}*/
//(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR){
//아스키코드 숫자인 문자 소수점 이하 수를 입력받아 실수 출력(32p, 4번)
/*void main(){
	char c[100];
	int n=10, i=0;
	double d=0;
	
	printf("입력: ");
	scanf("%s", c);
	printf("\n출력: ");
	while(c[i+2]!=NULL){
		d+=(c[i]-48)/n;
		printf("\t%lf\n", c[i]/n);
		n*=10;
		i++;
	}
	printf("%lf", d);
}*/
//(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)}
//단어 입력받고 뒤집기(33p, 5번) 
/*void main(){
	char str[100];
	int i=0;
	printf("입력: ");
	scanf("%s", str);
	printf("\n출력:");
	while(str[i]!=NULL){
		if (str[i]>=97){
			str[i]-=32;
		}
		printf("%c", str[i++]);
	}
}*/
//단어 입력받고 뒤집기(33p, 6번) 
/*void main(){
	char str[100];
	int i=0;
	printf("입력: ");
	scanf("%s", str);
	printf("\n출력:");
	while(str[i]!=NULL)
		i++;
	while(i>=0)
		printf("%c", str[i--]);
}*/
//문장 입력받고 단어의 개수 출력(33p, 7번) 
void main(){
	char str[100];
	int i=0, n=0;
	printf("입력 문장: ");
	scanf("%s", str);
	printf("\n출력:");
	while(str[i]!=NULL){
		printf("\n%d", i);
		if(i<100){
			printf("a%da", i);
			n++;
		}
		i++;
	}
	printf("\n%d문장", n+1);
}
