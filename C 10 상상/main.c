#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�ݿ��� 4��, ����� 5�� �޷�/ ��¥�� �ް� ���� ��� 

/*int main(int argc, char *argv[]) {
	int w, d;
	scanf("%d", &d);
	w=d%7;
	if (0<d<31){
		switch(w)
		{
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
	return 0;
}*/
//�������� ����, ����, ���뵵 ���
/*void main{
	int w, n, c=0;
	for(a=4; a>0; a--){
		scanf("%d", &n);
		c+=n;
	}
	printf("%d, %d\n", c, c/=4);
	switsh(c/10){
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
		printf("\n������");
	case 7:
		printf("\n���ݸ� �� ������");
	case 8:
		printf("\n���ϳ�");
	case 9:
		printf("\n���� ���ϳ�"); 
}*/
//29~30p
void main(){
	int a, b, n=0, c, i=0;
	for(a=10; a>0; a--){
		if (a%2==0){
			n+=a;
			continue;
		}
		i+=a;
	}
	printf("¦ %d\t\Ȧ %d\n\n n:", n, i);
	
	scanf("%d", &n);
	for (a=0; a<n; a++){
		if (n%a==0){
			printf("\n\t%d", a);
		}
	}
	
	printf("10���� ����:"); 
	for (a=10; a>0; a--){
		scanf("%d", &n);
		if (n>i){
			i=n;
		}
	}
	printf("\n\n%d\n\n n:", i);
	
	i=0;
	scanf("%d", &n);
	for (b=0; b<n; b++){
		if (n%b==0){
			printf("\t%d", b);
			a++;
			i+=b;
		}
	}
	printf("Ȧ %d, ¦ %d", a, i);

	n=0;
	a=0;
	i=0;
	for (b=3; b<=100; b*=n){
		n++;
		if (b%2==0){
			a++;
			i--;
		}
		i++;
	}
	printf("Ȧ�� ���: %d\n¦�� ���: %d\n��� ����: %d\n\n a, b:", i, a, n);
	
	scanf("%d, %d", a, b);
	for (b; b>=a; b+=b){
		i++;
		n+=b;
		printf("\t%d", b);
	}
	printf("\n%����:%d\t��:%d\n\n a, b:", i, n);
	
	scanf("%d, %d", &a, &b);
	i=a;
	n=b;
	if (a<b){
		n=a;
		i=b;
	}
	for (n; n<i; n--){
		printf("%d", n);
	}
	
	printf("\n\n100�̸� �ڿ���:");
	scanf("%d", &a);
	for(i=0; a>=i; i++){
		b=i%10;
		n=i-b;
		if (b==0){
			printf("\n");
		}
		if (b==3||b==6||b==9){
			printf("\n%dX", n);
		}
		if (n==3||n==6||n==9){
			printf("\nX%d", b);
		}
	}
}
//���� ��� �� 
/*void main(){
	int n;
	while(1){
		printf("���ι�ȣ:");
		scanf("%d", &n);
		switch(n)
		{
		case 0:
			break;
		case 1:
			printf("��.");
		case 25:
			printf("ȣ��-ȸ��JC\t���-õ��JC");
		case 30:
			printf("JC");
		case 35:
			printf("JC");
		case 40:
			printf("JC");
		case 50:
			printf("JC");
		case 100:
			printf("JC");
		case 400:
			printf("JC");
		
		}
	}
}*/
//�Ҽ�(prime number) �Ǻ� 
/*void main(){
	int n, i, b;
	scanf("%d", &n); 
	for (i=2; i<n; i++){ 
		if (n%i==0&&b!=1){
			b=1;
			printf("\n\t�Ҽ��� �ƴմϴ�.");
		}
	}
	if (b!=1){
		printf("\n\t�Ҽ� �Դϴ�.");
	}
}*/
