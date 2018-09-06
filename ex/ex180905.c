#include <stdio.h>

int set_ten( int no, int ten );
int seiseki[100][2];

int main( void )
{
	int tensu, gno, cnt = 0, i;

	printf( "学生番号と点数を入力してください（終了条件：CTRL+Z）" );
	while( scanf( "%d%d", &gno, &tensu ) != EOF ) {
		cnt = set_ten( gno, tensu );
		printf( "学生番号と点数を入力してください  " );
	}
	for ( i = 0; i < cnt; i++ ) {
		printf( "学生番号 = %d  点数 = %d\n", 
					seiseki[i][0], seiseki[i][1] );
	}
	
	return 0;
}

int set_ten( int no, int ten )
{
	static int errcnt = 0;
	static int setcnt = 0;

	if ( ten < 0 || ten > 100 ) {
		errcnt++;
		printf( "入力エラーです。エラーの回数は%d回です。\n", errcnt );
	}
	else {
		seiseki[setcnt][0] = no;
		seiseki[setcnt][1] = ten;
		setcnt++;
	}
	
	return setcnt;
}

/*
ーーーーーーーーーーーーーーーーーーーーーーー
【 web page URL 】
http://www9.plala.or.jp/sgwr-t/c/Q/ens12-2.html

①　外部変数で整数型の配列 seiseki[100][2]を用意する

seiseki [0]  [1]
        番号 点数

②　main関数で次の処理を行う。
   １． Ctrl+Z」（UNIXの環境では「Ctrl+D」） が入力されるまで、学生番号と点数を入力し、入力した学生番号と点数を引数にして、set_ten() 関数を呼ぶ。
   ２． Ctrl+Z が入力されたら、配列 seiseki の中身をデータがセットされた個数分表示する


ーーーーーーーーーーーーーーーーーーーーーーー*/
