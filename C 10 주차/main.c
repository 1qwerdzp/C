#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int n=2;
	switch (){
	case 0:
		printf("���Դϴ�.");
		break;
	case 1:
		printf("���Դϴ�.");
		break;
	case 2:
		printf("���Դϴ�.");
		break;
	case 3:
		printf("���Դϴ�.");
		break;
	default:
		printf("�����ϴ�.");
		break;
	}
	return 0;
}*/
/*void main(){
	int y;
	scanf("%d", &y)
	switch(y-y%10){
		case 0:
			printf("���ҳ�");
			break;
		case 10:
			printf("û�ҳ�");
			break;
		case 20:
		case 30:
			printf("û��");
			break;
		case 40:
		case 50:
			printf("�߳�");
			break;
		case 70:
			printf("���");
			break;
		case 80:
		case 90:
			printf("���� �鼼");
			break;
		default:
			printf("���� �鼼"); 
	}
}*/
/*void main(){
	int n;
	scanf("%d", &n);
	switch(n%2){
	case 1:
		printf("Ȧ��");
		break;
	case 0:
		printf("¦��");
		break;
	}
}*/
/*void main(){
	int n;
	scanf("%d", &n);
	if (n<30){
		switch (n%7){
		case 0:
			printf("�ݿ���");
			break;
		case 1:
			printf("�����");
			break;
		case 2:
			printf("�Ͽ���");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("ȭ����");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("�����");
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
	printf("\n\n%d �� ����� ����: %d\n%d�� ������� ��:%d", b, c, b, n);
}
