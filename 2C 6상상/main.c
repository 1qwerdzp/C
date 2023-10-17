#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*struct Cd{
	int x;
	int y;
};

struct Ce{
	struct Cd cen;
	double r;
};

void printCd(struct Cd p);
void printCl(struct Cl c);

int main(int argc, char *argv[]) {
	struct Cd p={6, 9};
	struct Cl c={{4, 5}, 12.4};
	
	printCd(p);
	printCl(c);
	
	return 0;
}


void printCd(struct Cd p){
	
}
void printCl(struct Cl c){
	
}*/
/*struct sksnrl{
	int x;
	int y;
};

int main(int argc, char *argv[]) {
	int g, e;
	scanf("%d %d", &g, &e);
	struct sksnrl s={g/e, g%e};
	
	printf("몫:%d\n나머지:%d", s.x, s.y);
	return 0;
}*/
/*
struct sksnrl{
	int x;
};

/*int main(int argc, char *argv[]) {
	int g, e;
	printf("제한, 자동차의 속도:");
	scanf("%d, %d", &g, &e);
	struct sksnrl s={e-g};
	
	printf("초과 값: %d", s.x);
	return 0;
}*/
/*struct tjs{
	int n;
	char name[10];
	double wja;
	int tns;
}; 

void main(){
	struct tjs list[8]={{1,"돌고래", 15.5, 6}, {2,"범고래", 15.4, 5}, {3,"상괭이", 13.7, 1}, {4,"귀싱고래", 16.5, 7}, {5,"수염고래", 14.9, 9}, {6,"밍크고래", 15.1, 4}, {7,"향유고래", 17.5, 8}, {8,"이빨고래", 13.9, 2}};
	int i;
	
	for(i=0; i<8; i++){
		printf("%d. ", list[i].n);
		printf("%s_", list[i].name);
		printf("%lf|", list[i].wja);
		printf("%d\n", list[i].tns);
	}
	
	for(i=0; i<8; i++){
		printf("%d번성적:", i+1);
		scanf("%d", &list[i].wja);
	}
	
	int d1=0, d2=0, d3=0;
	
	for(i=0; i<8; i++){
		if(lis.wja[d1]>list.wja[i]){
			list.wja[i]=0;
			list.wja[d1]=1;
		}
	}
	for(i=0; i<8; i++){
		if(d1==i){
			continue;
		}
		if(list.wja[d2]>list.wja[i]){
			list.wja[i]=0;
			list.wja[d2]=2;
		}
	}
	for(i=0; i<8; i++){
		if(d1==i||d2==i){
			continue;
		}
		if(list.wja[d3]>list.wja[i]){
			list.wja[i]=0;
			list.wja[d3]=3;
		}
	}
	
	
	for(i=0; i<8; i++){
		printf("%d. ", list[i].n);
		printf("%s_", list[i].name);
		printf("%lf|", list[i].wja);
		printf("%d\n", list[i].tns);
	}
}*/
