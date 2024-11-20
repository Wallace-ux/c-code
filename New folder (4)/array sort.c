#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
int a[10],b,c,d,e,i;
srand(time(0));
printf("Unsorted random array ");
for(i=0;i<10;i++){

	a[i]=rand()%6;
	printf("%d ",a[i]);
	}
	for (b=0;b<10;b++){
		for (c=0;c<9;c++){
			if (a[c]>a[c+1]){
				d=a[c];
				a[c]=a[c+1];
				a[c+1]=d;
			}
		}
	}printf("\n---------------------------------");
	printf("\nThe above array sorted below\n ");
	for(e=0;e<10;e++){
		printf("\t%d\n",a[e]);
	}
	return 0;
   }

