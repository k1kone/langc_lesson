#include <stdio.h>

void main (void){

	for(int i=1; i<=5; i++){
		for(int j = 1; j<=5; j++){
		printf("%5d",i*j);
		//if(i%5==0)printf("\n");
		}
		printf("\n");
	}

	printf("\n\v");

}

/*ーーーーーーーーーーーーーーー


下記のように
     1     2     3    4     5
     2     4     6    8    10
     3     6     9   12     15 


..５の段まで出力結果だ出るようにコーディング


ーーーーーーーーーーーーーー*/
