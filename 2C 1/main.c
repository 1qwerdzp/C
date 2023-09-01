#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	double hight[4];
	int j=2;
	
	hight[0] = 145.7;
	hight[1] = 156.3;
	hight[j] = 147.89;
	j++;
	hight[j] = 159.4;
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int ar[10]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int br[10];	
	
	for (int i=0; i<10; i++){
		scanf("%d", &br[i]);
	}
	for (int i=0; i<10; i++){
		printf("\n%d", ar[i]);
	}
	for (int i=0; i<10; i++){
		printf("\n%d", br[i]);
	}
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int num[ ]={5, 2, 6, 7, 8, 9, 4, 3, 1};
	int page[10]={123, 57, 67, 86};	
	int i, j;
	for (int i=0; i<10; i++){
		printf("%d\n", num[i]);
	}
	
	for (int i=0; i<10; i++){
		printf("\n%d", page[i]);
	}
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	char c; int i; long l; float f; double d;
	
	printf("%d %d %d %d %d\n", sizeof(c), sizeof(i), sizeof(l), sizeof(f), sizeof(d));
	printf("%d %d %d\n", sizeof(char), sizeof(int), sizeof(long);
	printf("%d %d\n", sizeof(float), sizeof(double));
	printf("%d %d\n", sizeof(153), sizeof(5.2));
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int ar[10];
	int br[ ]={1, 2, 3, 4, 5};
	double dr[20];
	printf("%d %d %d\n", sizeof(ar), sizeof(br), sizeof(dr));
	printf("%d %d %d", sizeof(ar)/sizeof(ar[0]), sizeof(br)/sizeof(br[0]), sizeof(dr)/sizeof(dr[0]));
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int ar[10];
	int n=0;
	
	srand(time(NULL));
	
	for (int i=0; i<10; i++){
		ar[i]=rand()%10;
		printf("%d ", ar[i]);
	}
	
	for (int i=0; i<10; i++){
		n+=ar[i];
	}
	printf("\n\n%d", n);
	
	return 0;
}*/

/*int main(int argc, char *argv[]) {
	int ar[10];
	int n=0, a=0;
	
	srand(time(NULL));
	
	for (int i=0; i<10; i++){
		ar[i]=rand()%100;
		printf("%d ", ar[i]);
	}
	n=ar[0];
	for (int i=1; i<10; i++){
		if (ar[i]<n){
			n=ar[i];
			a=i;
		}
	}
	printf("\n\nmin=%d\nindex=%d", n, a);
	
	return 0;
}*/
int main(int argc, char *argv[]) {
	double ar[10]={94.6, 89.7, 78.9, 92.3, 89.6, 88.7, 87.6, 91.5, 88.5, 93.2};
	int emd[10];
	int n=0, a=0;
	printf("Æò±Õ ¦¢ ");
	for (int i=0; i<10; i++){
		printf("2%d ¦¢", ar[i]);
	}
	printf("µî¼ö ¦¢ ");
	for (int i=0; i<10; i++){
		n=ar[0];
		for (int t=1; t<10; t++){
			if (ar[t]>n){
				n=ar[t];
				a=i;
			}
		}
		emd[a]=i;
		ar[a]=0;
	}
	for (int i=0; i<10; i++){
		printf("%d¦¢ ", emd[i]);
	}
	return 0;
}
