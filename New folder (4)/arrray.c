#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int a,b[10];
	srand(time(0));
	do{
		b[a]=rand()%6;
		++a;
	}while(a<10);
	for(int i=0;i<=10;++i){
		printf("%d = %d\n",i,b[i]);
	}
	return 0;
}
