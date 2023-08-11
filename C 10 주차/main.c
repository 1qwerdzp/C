#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int n=2;
	switch (){
	case 0:
		printf("영입니다.");
		break;
	case 1:
		printf("일입니다.");
		break;
	case 2:
		printf("이입니다.");
		break;
	case 3:
		printf("삼입니다.");
		break;
	default:
		printf("없습니다.");
		break;
	}
	return 0;
}*/
/*void main(){
	int y;
	scanf("%d", &y)
	switch(y-y%10){
		case 0:
			printf("유소년");
			break;
		case 10:
			printf("청소년");
			break;
		case 20:
		case 30:
			printf("청년");
			break;
		case 40:
		case 50:
			printf("중년");
			break;
		case 70:
			printf("장년");
			break;
		case 80:
		case 90:
			printf("도전 백세");
			break;
		default:
			printf("성공 백세"); 
	}
}*/
/*void main(){
	int n;
	scanf("%d", &n);
	switch(n%2){
	case 1:
		printf("홀수");
		break;
	case 0:
		printf("짝수");
		break;
	}
}*/
/*void main(){
	int n;
	scanf("%d", &n);
	if (n<30){
		switch (n%7){
		case 0:
			printf("금요일");
			break;
		case 1:
			printf("토요일");
			break;
		case 2:
			printf("일요일");
			break;
		case 3:
			printf("월요일");
			break;
		case 4:
			printf("화요일");
			break;
		case 5:
			printf("수요일");
			break;
		case 6:
			printf("목요일");
			break;
		}
	} 
}*/
/*void main(){
	int n, n1=0, i;
	for (i=1; i<11; i++){
		scanf("%d", &n);
		if (n>n1)
			n1=n;
	}		
	printf("%d", n1);
}*/
void main(){
	int n=0, c=0, a, b, f;
	scanf("%d, %d", &a, &b);
	for (f=b; f<=a; f=c*b){
		c++;
		n+=f;
		printf(" %d", f);
	}
	printf("\n\n%d 의 배수의 개수: %d\n%d의 배수들의 합:%d", b, c, b, n);
}
