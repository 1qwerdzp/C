#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int x, y;
	COORD pos = { 40, 12 };
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("Hello C3coding");
	_getch();
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int x, y;
	COORD pos = { 10, 999 };
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int x, y;
	COORD pos = { 1, 10 };
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=2;
	pos.Y=20;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=8;
	pos.Y=30;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=32;
	pos.Y=40;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=128;
	pos.Y=50;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=240;
	pos.Y=60;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=480;
	pos.Y=70;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=1920;
	pos.Y=90;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=1920;
	pos.Y=360;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	pos.X=1920;
	pos.Y=1440;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("←: 커서 시작위치(%d, %d)", pos.X, pos.Y);
	_getch();
	
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int x, y;
	COORD pos;
	do
	{
		pos.X=0;
		pos.Y=0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("커서의 위치를 입력 하세요:");
		scanf("%d %d", &pos.X, &pos.Y);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("▣"); 
	}while(pos.X<=80 && pos.Y <= 24); 
	return 0;
}*/
/*void GotoXY(int x, int y);
void MyDelay(int d);

int main(){
	int i;
	int s;
	
	printf("출력속도:");
	scanf("%d", &s);
	for(i=1; i<=10; i++){
		GotoXY(40, i);
		printf("%d", i);
		MyDelay(s);
	}
	return 0;
}

void GotoXY(int x, int y){
	COORD pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void MyDelay(int d){
	Sleep(d);
}*/
/*void main(){
		COORD pos={20, 4};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("출력값:");
	for(int i=0; i<=10; i++){
		pos.X=i+28;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		printf("%d", 10*i);
	}
}*/
void main(){
	COORD pos={20, 30};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	int i;
	while(1){
		i++;
		int u=0, d=0;
		for(u; u<=5; u++){
			pos.X=u+i;
			pos.Y-=1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", u);
			Sleep(100);
		}
		
		for(int d=6; d<10; d++){
			pos.X=d+i;
			pos.Y+=1;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d", d);
			Sleep(100);
		}
	}
}
