#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    long long int  sum=0.0;
	long long  int in1,in2,in3;
	scanf("#%d#%d#%d##",&in1,&in2,&in3);
	
	
	printf("%d \n",in1);
	printf("%d \n",in2);
	printf("%d \n",in3);
	sum=(in1+in2+in3);
	printf("%.2lf",sum/3.0);
	return 0;
}
