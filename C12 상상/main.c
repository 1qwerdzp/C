#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Per(int n);
int DNer(int n);
int RN(int n);
int ISN(int n);

int main(int argc, char *argv[]) {
	int t, n;
	while(1){
		printf("\n번호(2, 4, 8, 9, 12, 13):");
		scanf("%d", &t);
		if (t<14){
			scanf("%d", &n);
		}
		else{
			break;
		}
		printf("\n");
		if (t==2){
			printf("%d", Per(n));
			continue;
		}
		if (t==4){
			printf("%d자리", DNer(n));
			continue;
		}
		if (t==8){
			printf("\n%d\n", n);
			printf("%d", RN(n));
			continue;
		}
		if (t==9){
			if (ISN(n)==1){
				printf("같은 숫자로 된 수가 아닌것이");
			}
			printf(" 아닙니다.");
			continue;
		}
		if (t==12){
			while(n>9){
				n/=10;
			} 
			printf("%d", n);
			continue;
		}
		if (t==13){
			printf("%d", 1);
			continue;
		}
	}
	return 0;
}

int Per(int n){
	return n*n;
}

int DNer(int n){
	int x=0, i;
	for (i=1; n/i>1; i*=10){
		x++;
	}
	return x;
}

int RN(int n){
	int i, x=0, y=n*100;
	for (i=10; y/i>10; i*=10){
		x=x*10+(n%i)*10/i;
		n-=n%i;
	}
	return x;
}

int ISN(int n){
	int i=1, x=n%10;
	while(n>=1){
		if (x!=n%10){
			i=0;
			break;
		}
		n/=10;
		x=n%10;
	}
	return i;
}
