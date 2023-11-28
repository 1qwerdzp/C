#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define X_END 79
#define Y_END 24

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void GXY(int x, int y);
void MLRK(char chr, int *x, int *y);

int main(int argc, char *argv[]) {
	char key;
	int x=0, y=0;
	
	do{
		GXY(x, y);
		system("cls");
		printf("@");
		key=getch();
		key=getch();
		MLRK(key, &x, &y);
	}while (key != 27);
	return 0;
}

void GXY(int x, int y){
	COORD Pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void MLRK(char key, int *x1, int *y1){
	switch (key){
		case 75:
			*x1=*x1-1;
			if(*x1<1) *x1 = X_END;
			break;
		case 77:
			*x1=*x1+1;
			if(*x1>X_END) *x1 =1;
			break;
	}
}*/

/*void GXY(int x, int y);
void MLRK(char chr, int *x, int *y);
void MUDK(char chr, int *x, int *y);

int main(int argc, char *argv[]) {
	char key;
	int x=0, y=0;
	
	do{
		GXY(x, y);
		printf("¢Ô");
		key=getch();
		key=getch();
		MLRK(key, &x, &y);
		MUDK(key, &x, &y);
	}while (key != 27);
	return 0;
}

void GXY(int x, int y){
	COORD Pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void MLRK(char key, int *x1, int *y1){
	switch (key){
		case 72:
			*y1=*y1-1;
			if(*y1<1) *y1 = Y_END;
			break;
		case 80:
			*y1=*y1+1;
			if(*y1>Y_END) *y1 =1;
			break;
	}
}
void MUDK(char key, int *x1, int *y1){
	switch (key){
		case 72:
			*y1=*y1-1;
			if(*y1<1) *y1 = Y_END;
			break;
		case 80:
			*y1=*y1+1;
			if(*y1>Y_END) *y1 =1;
			break;
	}
}*/
void GXY(int x, int y);
void MLRK(char chr, int *x, int *y);
void MUDK(char chr, int *x, int *y);

int main(int argc, char *argv[]) {
	char key;
	int x=0, y=0;
	
	do{
		system("cls");
		GXY(x, y);
		printf("¢·¡á¢¹");
		GXY(x+2, y-1);
		printf("¡â");
		GXY(x+2, y+1);
		printf("¡ä");
		key=getch();
		key=getch();
		MLRK(key, &x, &y);
		MUDK(key, &x, &y);
	}while (key != 27);
	return 0;
}

void GXY(int x, int y){
	COORD Pos={x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void MLRK(char key, int *x1, int *y1){
	switch (key){
		case 75:
			*x1=*x1+1;
			printf("¡ë");
			*x1=*x1-2; 
			if(*x1<1) *x1 = X_END;
			break;
		case 77:
			*x1=*x1-1;
			printf("¡ë");
			*x1=*x1+2;
			if(*x1>X_END) *x1 =1;
			break;
	}
}
void MUDK(char key, int *x1, int *y1){
	switch (key){
		case 72:
			*y1=*y1+1;
			printf("¡ë");
			*y1=*y1-2;
			if(*y1<1) *y1 = Y_END;
			break;
		case 80:
			*y1=*y1-2;
			printf("¡ë");
			*y1=*y1+3;
			if(*y1>Y_END) *y1 =1;
			break;
	}
}
