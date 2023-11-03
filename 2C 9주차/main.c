#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int n;
	
	scanf("%d", &n);
	printf("%d", n);

	return 0;
}*/
/*int main(int argc, char *argv[]) {
	int a ,b, c;
	
	scanf("%d", &a);
	printf("a=%d\n", a);
	scanf("%d%d", &a, &b);
	printf("a=%d, b=%d\n", a, b);
	scanf("%d%d%d", &a, &b, &c);
	printf("a=%d, b=%d, c=%d\n", a, b, c);

	return 0;
}*/
/*void main(){
	int a;
	char b;
	
	scanf("%d", &a);
	getchar();	//공백 제거. 
	scanf("%c", &b);
	printf("%d %c", a, b);
}*/
/*int main(){
	char ch;
	
	scanf("%c", &ch);
	printf("%c %d", ch, ch);
	
	return 0;
}*/
/*void main(){
	char str[20];
	scanf("%s", str);
	printf("%s", str);
}*/
/*void main(){
	char str[80];
	
	gets(str);
	printf("%s\n", str);
}*/
#include <conio.h>
/*void main(){
	char ch;
	
	ch=_getche();
	printf("\nch=%d:%c\n", ch, ch);
	putchar(ch);
}*/
/*int main(){
	int n=0;
	
	while(1){
		printf("%d%c", n, 13);//9, 10, 32
		n++;
	}
}*/

/*int main(){
	char ch=0;
	
	while(ch!='\n'){
		ch=getchar();
		printf("%c", ch);
	}
}*/

/*int main(){
	char ch=0;
	
	while(ch!='\n'){
		scanf("%c", &ch);
		if(('a'<=ch && ch<='z')||('A'<=ch && ch<='Z'))
			printf("%c", ch);
	}
}*/

/*int main(){
	char ch=0;
	
	while(ch!='\n'){
		scanf("%c", &ch);
		if('A'<=ch && ch<='Z')
			printf("%c", ch);
	}
}*/
/*int main(){
	char ch=0;
	
	while(ch!='\n'){
		scanf("%c", &ch);
		if(('a'<=ch && ch<='z')||('A'<=ch && ch<='Z')){
			if('a'<=ch && ch<='z')
				ch+='A'-'a';
			printf("%c", ch);
		}
	}
}*/
