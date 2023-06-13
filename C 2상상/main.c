#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	printf("------\n");
	printf(":    :\n");
	printf(":    :\n");
	printf(":    :\n");
	printf("------\n");
	return 0;
}*/
/*
int main(){
	printf("┌───┐\n");
	printf("│      │\n");
	printf("│      │\n");
	printf("│      │\n");
	printf("└───┘\n");
	return 0;
}*/
/*int main(){
	int a=8;
	int b=125;
	int c=128;
	printf("초당 1Gbit = 1 / %d Gbyte = 0.%d Gbyte = %d Mbyte\n", a, b, c);
	printf("속도에 불과한 것입니다.");
	return 0;
} */
int main(){
	int i,a;
	for(i=1;i<10;i++){
		for(a=1;a<10;a++){
			printf("%d \n", a*i);
		}
		printf("\n");
	}
	return 0;
}
