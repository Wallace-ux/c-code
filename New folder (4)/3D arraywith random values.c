#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
srand(time(0));
int a,b,c,e,d[2][3][4];
	for (a=0;a<2;a++){
		for (b=0;b<3;b++){
			for (c=0;c<4;c++){
				d[a][b][c]=rand()%6;
			}
		}
	}
	for(a=0;a<2;a++){
		for (b=0;b<3;b++){
			for (c=0;c<4;c++){
				printf("\n %d %d %d %d",a,b,c,d[a][b][c]);
				}
			}
		}
return 0;
}
