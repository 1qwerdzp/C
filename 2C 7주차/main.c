#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	FILE *fp;
	
	fp=fopen("CharOut.txt", "w");
	
	if(fp==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputc(97, fp);
	fputc(98, fp);
	
	return 0;
}*/
/*int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;
	
	fp=fopen("CharOut.txt", "r");
	
	if(fp==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	ch=fgetc(fp);
	printf("%c", ch);
	ch=fgetc(fp);
	putchar(ch);
	
	ch=fgetc(fp);
	printf("%c", ch);
	ch=fgetc(fp);
	printf("%c", ch);
	ch=fgetc(fp);
	printf("%c", ch);
	
	fclose(fp);
	
	return 0;
}*/
/*void main(){
	FILE *out=fopen("StringFile.txt", "w");
	char str1[]="Hello C3Coding";
	char str2[]="�ȳ��ϼ��� ��ť���ڵ��Դϴ�.\n";
	
	if (out==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	fputs("���ڿ��� ����մϴ�\n", out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	
	fclose(out);
}*/
/*void main(){
	FILE *in=fopen("StringFile.txt", "r");
	char str1[30];
	char str2[30];
	char str3[30];
	
	if (in==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	fgets(str1, sizeof(str1), in);
	fgets(str2, sizeof(str2), in);
	fgets(str3, sizeof(str3), in);
	
	puts(str1);
	printf("%s", str2);
	
	fputs(str3, stdout);
	
	fclose(in);
}*/
/*void main(){
	FILE *out = fopen("NumberFile.txt", "w");
	int n,m;
	double d1, d2;
	
	if (out == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	printf("������ �ΰ� �Է��ϼ���:");
	scanf("%d %d", &n, &m);
	printf("�Ǽ��� �ΰ� �Է��ϼ���:");
	scanf("%lf %lf", &d1, &d2);
	
	printf("\n\n\n�Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	
	fprintf(out, "%d %d\n", n, m);
	fprintf(out, "%lf %lf\n", d1, d2);
	
	fclose(out);
}*/
/*void main(){
	FILE *in = fopen("NumberFile.txt", "r");
	int n,m;
	double d1, d2;
	
	if (in== NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	printf("������ �ΰ� �Է��մϴ�\n");
	fscanf(in, "%d %d", &n, &m);
	printf("�Ǽ��� �ΰ� �Է��մϴ�\n");
	fscanf(in, "%lf %lf", &d1, &d2);
	
	printf("\n\n\n�Է� ���� ������ ��� �մϴ�.\n");
	printf("%d %d\n", n, m);
	printf("%lf %lf\n", d1, d2);
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	
	
	fclose(in);
}*/
void main(){
	int n, num;
	char *res, str[20];
	
	printf("���� �Է�:");
	n=getchar();
	printf("n=%d\n", n);
	
	printf("���ڿ� �Է�:");
	res=gets(str);
	printf("res=%d\n", res);
	
	printf("���� �Է�:");
	n=scanf("%d", &num);
	printf("n=%d", n);
}
