#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*void main(){
	int n;
	int *eh;
	scanf("%d", &n);
	eh=(int*)malloc(sizeof(int)*n);
	int i=0;
	for(i; i<n; i++){
		eh[i]=rand()%100;
		printf("%d ", eh[i]);
	}
}*/
/*void MyStrlen();
void main(){
	char c;
	char ci[100]="a";
	int i=0;
	
	/*while(1){
		ci=(int*)malloc(sizeof(int)*i);
		scanf("%c", &ci[i]);
		if(ci[i]==""){
			break;
		}
		printf("%c", ci[i]);
		i++;
	}*//*
	
	MyStrlen(ci);
	
}

void MyStrlen(ci){
	int n=0, t;
	for(t=0; t<sizeof(ci)/sizeof(int); t++){
		n+=sizeof(ci[t])/sizeof(int);
	}
	printf("%d", n);
}*/

/*void main(){
	char c;
	char *ci;
	int i=0;
	
	while(1){
		ci=(int*)malloc(sizeof(int)*i);
		scanf("%c", &ci[i]);
		if(ci[i]==""){
			break;
		}
		printf("%c", ci[i]);
		i++;
	}
	
}*/
void MS();
void main(){
	MS();
}

void MS(){
	int i=0;
	char *eh;


	
	while(1){
		eh=(int*)malloc(sizeof(int)*i);
		scanf("%c", &eh[i]);
		if(i==1){
			break;
		}
		i++;
	}	
	printf("%c", eh);
}
