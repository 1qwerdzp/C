#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int a1[3][4]={0};
	int a2[ ][4]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int a3[3][4]={{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int x, y;
	for (y=0; y<3; y++){
		for (x=0; x<4; x++){
			printf("%2d", a1[y][x]);
		}
		printf("\n");
	}
	printf("\n");
	for (y=0; y<3; y++){
		for (x=0; x<4; x++){
			printf("%2d ", a2[y][x]);
		}
		printf("\n");
	}
	printf("\n");
	for (y=0; y<3; y++){
		for (x=0; x<4; x++){
			printf("%2d ", a3[y][x]);
		}
		printf("\n");
	}
	return 0;
}*/
/*void main(){
	int x, y, n=0, i=0, t;
	int a[6][9]={{0, 0, 0, 1, 0, 0, 0, 0, 0},
				{0, 0, 0, 0, 0, 0, 0, 2, 0},
				{0, 0, 0, 0, 1, 0, 0, 0, 0},
				{0, 2, 0, 1, 0, 0, 1, 0, 0},
				{0, 0, 0, 1, 0, 0, 0, 0, 0},
				{0, 0, 1, 0, 0, 0, 1, 0, 0}};
	for (y=0; y<6; y++){
		for (x=0; x<9; x++){
			printf("%2d ", a[y][x]);
			if (a[y][x]==1){
				n++;
			}
		}
		printf("\n");
	}
	printf("\n1=>%d개\n\n", n);
	for (y=0; y<6; y++){
		t=0;
		for (x=0; x<9; x++){
			printf("%2d ", a[y][x]);
			if (a[y][x]==2){
				n=y;
				i=x;
				t=1;
			}
		}
		if (t)
			printf("\n%d, %d", y, x);
		printf("\n");
	}
	printf("\n");
	for (y=0; y<6; y++){
		for (x=0; x<9; x++){
			if (a[y+1][x]==2||a[y-1][x]==2||a[y][x+1]==2||a[y][x-1]==2){
				printf("%2d ", 5);
			}
			else{
				printf("%2d ", a[y][x]);
			}
		}
		printf("\n");
	}
	printf("\n");
	for (y=0; y<6; y++){
		for (x=0; x<9; x++){
			if (a[y][x]==0){
				printf("%2d ", 1);
			}
			else{
				printf("%2d ", 0);
			}
		}
		printf("\n");
	}
}*/
void main(){
	int i, g, q;
	int a[5][4]={{23, 22, 27, 21, 24},
				{21, 22, 25, 24, 23},
				{20, 23, 22, 21, 24},
				{25, 26, 24, 27, 26},
				{26, 24, 26, 29, 26},
				{27, 26, 29, 26, 27}};
for (g=0; g<6; g++){
	if (g==0){
		printf(" %4c%4c", '|', '|');
		for(q=0; q<6; q++){
			printf(" %2d반", q);
		}
	}
	printf("\n");
	printf("%5d학년", g+1);
	for (q=0; q<7; q++){
		printf("%4d", a[g][q]);
	}
}
	scanf("%d", g);
	printf("%5d학년", g);
	for (q=0; q<7; q++){
		printf("%4d", a[g][q]);
		i++;
	}
	printf("\n%d",i);

}
	/*printf("{")
	scanf("%d, %d", g, q);
	int a[g][q+1];
	for (g=0; g>=)*/
