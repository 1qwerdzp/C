#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	char a, b;
	
	a='A';
	b='a';
	printf("%c %c\n", a, b);
	printf("%d %d\n", a, b);
	
	printf("%c %c\n", 66, 98);
	printf("%d %d\n", 66, 98);
	return 0;
}*/
/*void main() {
	char a, A;
	
	A='A';
	a='a';
	
	A=a-A;
	a-=A;
	A=A+a;
	printf("a=%c, A=%c", a, A);
}*/
/*void main() {
	char a;
	
	printf("문자를 입력하세요:");
	a=getchar();
	putchar(a);
	printf("%c %d\n", a, a); 
}*/
/*void main() {
	char a[]={'H','i',' ','C','3',' ','C','o','d','i','n','g'};
	char b[]={'H','i',' ','C','3',' ','C','o','d','i','n','g', '\0'};
	
	printf("%s\n", a);
	printf("%s\n", b);
}*/
/*void main() {
	char a[15]={'H','i',' ','C','3',' ','C','o','d','i','n','g'};
	char b[15]={'H','i',' ','C','3',' ','C','o','d','i','n','g', '\0'};
	
	printf("%s\n", a);
	printf("%s\n", b);
}*/
/*void main() {
	char a[15]="Coding is fun";
	char b[]="Coding is fun";
	
	printf("%s\n", a);
	printf("%s\n", b);
}*/
/*void main() {
	char w[15];
	
	printf("단어를 입력하세요:");
	scanf("%s", w);
	printf("입력하신 단어는%s 입니다", w);
}*/
/*void main() {
	char stc[80];
	
	printf("문장을 입력하세요:");
	gets(stc);
	puts(stc);
	scanf("%s", stc);
	printf("%s", stc);
}*/
/*void main(){
	char str[15]={'H','i',' ','C','3',' ','C','o','d','i','n','g', '\0'};
	int i;
	while(str[i]!=NULL){
		printf("%c", str[i++]);
	}
	printf("\n%d", i);
}*/
/*void main(){
	char str[]="Coding is computer programming";
	int i=0;
	while(str[i]!=NULL)
		i++;
	while(i>=0)
		printf("%c ", str[i--]);
}*/
/*void main(){
	char str[100];
	int i=0;
	scanf("%s", str);
	while(str[i]!=NULL){
		if (str[i]>=97){
			str[i]-=32;
		}
		else{
			str[i]+=32;
		}
		printf("%c ", str[i++]);
	}
}*/
void main(){
	char str[]="Coding is computer programming";
	char c;
	int n=0, i=0;
	scanf("%c", &c);
	while(str[i]!=NULL){
		if(str[i]==c){
			n++;
		}
		i++;
	}
	printf("%d", n);
}
