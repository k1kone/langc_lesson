#include <stdio.h>

int main (void){
FILE *fp;

fp = fopen("test1.txt","w");

if(fp==NULL){
	printf("file can't open. ");
	return 1;
}else printf("file open.");

fputs("Hello!\n\v",fp);
fputs("Good by!\n\v",fp);

fclose(fp);
printf("file close.\n\v");

}
