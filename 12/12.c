#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int a,b,c=1,d=0;
	printf("¿é¤Jm:");
	scanf("%d",&a);
	while(a!=0){
		b=a%5;
		a=a/5;
		d=d+b*c;
		c=c*10;
	}
	printf("%d",d);
	return 0;
}*/
int main(int argc, char *argv[]) {
	char a[25],b[25];
	
	int i,count=0;
	gets(a);
	gets(b);
	//printf("%s\n",a);
	//printf("%s",b);
	for(i=0;i<strlen(a);i++){
		if(a[i]!=b[i]){
			count++;
		}
	}
	printf("\n");
	printf("%d",count);
	
	
/*	scanf("%[^\n]",a);
	for(i=0;i<25;i++){
		printf("%c",a[i]);
	}
	printf("\n");
	
	scanf("%*[^\n]",b);
	for(i=0;i<25;i++){
		printf("%c",b[i]);
	}*/


		
}
