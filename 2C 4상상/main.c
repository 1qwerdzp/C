#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int a[6][6]={0};
	int n[1]={0};
	int i, t, x, y;
	
	srand(time(NULL));
	
	for(y=0; y<6; y++){
		for(x=0; x<7; x++){
			a[y][x]=rand()%99+1;
			i+=a[y][x];
			if(n[0]<a[y][x]/10 || (n[0]==a[y][x]/10 && n[1]<a[y][x]%10)){
				n[0]=('a[y][x]'-'0')/10;
				n[1]=('a[y][x]'-'0')%10;
			}
		}
	}
	y=0;
	while(y<6){
		x=0;
		while(x<7){
			printf("%3d", a[y][x]);
			x++;
		}
		printf("\n");
		y++;
	}
	
	printf("%d\n", i);
	printf("%c", n[1]);
	printf("%c", n[1]);
	return 0;
}*/
int main(int argc, char *argv[]) {
	int a[6][6]={0};
	int b, c, n;
	int i, t, x, y;
	
	srand(time(NULL));
	
	for(y=0; y<6; y++){
		for(x=0; x<6; x++){
			a[y][x]=rand()%99+1;
			i+=a[y][x];
		}
	}
	y=0;
	while(y<6){
		x=0;
		while(x<6){
			printf("%3d", a[y][x]);
			if(n<(a[y][x])){
				n=a[y][x];
			}
			x++;
		}
		printf("\n");
		y++;
	}
	printf("%d\n", i);
	printf("%d", n);
	
	return 0;
}
