#include<stdio.h>
int main()
{
	int i = 23;
	FILE *fp = NULL;
	
	fp = fopen("/home/shockwave/Desktop/g.jpg","wb");
	if(fp != NULL){
		fwrite( &i , sizeof(int) , 1, fp);
	fclose(fp);
	printf("Corrupted");
	}
	else{
		printf("Error");
	}
	return 0;
}
