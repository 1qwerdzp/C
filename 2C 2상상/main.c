#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//�ݺ������� A~Z, a~z ���(32p, 2��) 
/*int main(int argc, char *argv[]) {
	int i;
	for(i='A'; i+1<=26+'A'; i++){
		printf("%2c", i);
	}
	printf("\t");
	for(i='a'; i+1<=26+'a'; i++){
		printf("%2c", i);
	}
	return 0;
}*/

//�ƽ�Ű�ڵ� ������ ���ڸ� 3�� �Է¹޾� 3�ڸ� ���� ���(32p, 3��) 
/*int main(int argc, char *argv[]) {
	int i;
	char c1, c2, c3;
	
	printf("�Է�: ");
	scanf("%c, %c, %c", &c1, &c2, &c3);
	i=100*c1+10*c2+c3;
	printf("\n���: %d", i-5328);
	return 0;
}*/
//(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR){
//�ƽ�Ű�ڵ� ������ ���� �Ҽ��� ���� ���� �Է¹޾� �Ǽ� ���(32p, 4��)
/*void main(){
	char c[100];
	int n=10, i=0;
	double d=0;
	
	printf("�Է�: ");
	scanf("%s", c);
	printf("\n���: ");
	while(c[i+2]!=NULL){
		d+=(c[i]-48)/n;
		printf("\t%lf\n", c[i]/n);
		n*=10;
		i++;
	}
	printf("%lf", d);
}*/
//(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)(ERROR)}
//�ܾ� �Է¹ް� ������(33p, 5��) 
/*void main(){
	char str[100];
	int i=0;
	printf("�Է�: ");
	scanf("%s", str);
	printf("\n���:");
	while(str[i]!=NULL){
		if (str[i]>=97){
			str[i]-=32;
		}
		printf("%c", str[i++]);
	}
}*/
//�ܾ� �Է¹ް� ������(33p, 6��) 
/*void main(){
	char str[100];
	int i=0;
	printf("�Է�: ");
	scanf("%s", str);
	printf("\n���:");
	while(str[i]!=NULL)
		i++;
	while(i>=0)
		printf("%c", str[i--]);
}*/
//���� �Է¹ް� �ܾ��� ���� ���(33p, 7��) 
void main(){
	char str[100];
	int i=0, n=0;
	printf("�Է� ����: ");
	scanf("%s", str);
	printf("\n���:");
	while(str[i]!=NULL){
		printf("\n%d", i);
		if(i<100){
			printf("a%da", i);
			n++;
		}
		i++;
	}
	printf("\n%d����", n+1);
}
