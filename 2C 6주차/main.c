#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*struct Codi{
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	struct Codi p1;
	struct Codi p2 ={5, 9};
	struct Codi p3;
	struct Codi p4;
	
	p1.x=2;
	p1.y=3;
	
	printf("p1ÀÇ ÁÂÇ¥(%d, %d)\n", p1.x, p1.y);
	printf("p2ÀÇ ÁÂÇ¥(%d, %d)", p2.x, p2.y);
	
	return 0;
}*/

/*struct Circle{
	int x;
	int y;
	double r;
};

int main(){
	
	struct Circle c1, c3, c4;
	
	c1.r=4;
	c1.x=7;
	c1.y=5;
	
	printf("%.1lf %d %d\n", c1.r, c1.x, c1.y);
	
	struct Circle c2={5, 7, 8};
	
	printf("%.1lf %d %d\n", c2.r, c2.x, c2.y);
	
	c3=c1;
	
	c4.r=3;
	c4.x=c1.x;
	c4.y=c2.y;
	
	printf("%.1lf %d %d", c4.r, c4.x, c4.y);
}*/
/*struct Person{
	char name[10];
	int age;
	double height;
};

void main(){
	struct Person m1;
	struct Person m2= {"Çã³­¼³¿¬", 13, 159.9};
	
	strcpy(m1.name, "Çì±Õ");
	m1.age=19;
	m1.height=168,34;
	printf("%s %d %.2lf\n%s %d %.2lf\n", m1.name, m1.age, m1.height, m2.name, m2.age, m2.height);
	
	struct Person my={"³ª", 15, 170};
	printf("%s %d %.2lf", my.name, my.age, my.height);
}*/

/*struct Circle{
	double r;
	double l;
	double S;
};

void main(){
	struct Circle c;
	scanf("%lf", &c.r);
	
	c.l=2*c.r*3.141592;
	c.S=c.r*c.r*3.141592;
	printf("l=2¡¿c.r¡¿¥Ð=%lf S=c.r¡¿c.r¡¿¥Ð=%lf", c.l, c.S);
}*/
struct Person{
	char name[10];
	int age;
	double hight;
};

void main(){
	struct Person list[5]={{"±èÀ¯½Å", 15, 178.3}, {"±èÃáÁÖ", 13, 173.3}, {"»ç´ÙÇâ", 17, 183.2}, {"¿ø¿ä", 19, 168.9}, {"Àåº¸°í", 19, 187.3}};
	int i;
	
	for(i=0; i<5; i++){
		printf("%s",list[i].name);
		printf("%d",list[i].age);
		printf("%lf\n",list[i].hight);
	}
	
	for(i=0; i<5; i++){
		printf("%d:", i+1);
		scanf("%s", &list[i].name);
		scanf("%d", &list[i].age);
		scanf("%lf", &list[i].hight);
	}
	
	for(i=0; i<5; i++){
		printf("%s\t",list[i].name);
		printf("%d\t",list[i].age);
		printf("%lf\n\n",list[i].hight);
	}
}
