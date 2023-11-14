#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void main(){
	int i=0, x, y, n, m, s, f, a=0, z;
	char c;
	printf("숫자(0), 문자(1):");
	scanf("%d", &z);
	if(z){
		prinf("문자:");
		scanf("%c", &c);
	}
	printf("속도:");
	scanf("%d", &s);
	printf("가로, 세로줄 수 입력(0), 횟수 입력(1):");
	scanf("%d", &x);
	if (x){
		printf("가로, 세로줄 수x×y(x, y):");
		scanf("%d, %d", &x, &y);
		n=0; 
		m=999;
	}
	else{
		printf("횟수n~m(n, m):");
		scanf("%d, %d", &n, &m);
		x=100;
		y=50;
	}
	COORD pos={20, 30};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	for(f=0; f<x; f++){
		i+=5;
		for(int u=0; u<y; u++){
			a++;
			pos.X=i*4;
			pos.Y=u*2;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			if(z)
				printf("%2d", a);
			else
				printf("%2c", c);
			Sleep(s);
			if(a==m)
			break 0;
		}
	}
}*/
/*void main(){
	int i=0, s, f, a=0;
	scanf("%d", &s);
	COORD pos={20, 30};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	int u=0;
	for(f=0; f<=2; f++){
		i+=5;
		for(u=0; u<5; u++){
			a++;
			pos.X=i;
			pos.Y=u*2;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", a);
			Sleep(s);
		}
		i+=5;
		if(f<=1){
			for(u=4; u>=0; u--){
				a++;
				pos.X=i;
				pos.Y=u*2;
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
				printf("%d", a);
				Sleep(s);
			}
		}
	}
}*/

/*void main(){
	int i=0, n=1, s, f;
	scanf("%d", &s);
	COORD pos={20, 30};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	for(f=0; f<17; f++){
		int u=0, d=4, b=6;
		i++;
		for(u; u<=5; u++){
			pos.X=u+i;
			pos.Y-=1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", u);
			Sleep(s);
		}
		for(b; b>4; b--){
			pos.X=b+i-1;
			pos.Y+=1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", b);
			Sleep(s);
		}
		printf("%d", b);
		Sleep(s);
		for(d+=3; d<10; d++){
			pos.X=d+i;
			pos.Y+=1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", d);
			Sleep(s);
		}
		pos.Y+=1;
		i+=10;
	}
	pos.X=0;
	pos.Y=0;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("     ___\n       //   ) ) \n    __ / /  \n       ) )  \n ((___/ /   ");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("     ___    \n   //   ) ) \n    ___/ /  \n  / ____/    / /____  ");
	Sleep(1000);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n\t\t\t\t\t\t\n");
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("   /_  /    \n    / /     \n   / /      \n  / /   ");
	Sleep(1000);
	int a=54;
	while(1){
		int n=0;
		n=rand()%(a+140);
		pos.X=n;
		n=rand()%a;
		pos.Y=n;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("▒");
		Sleep(s/10);
	}
	
}*/
