#include <iostream>
#include <iomanip>
#define    hexformat(fill,wd)    std::hex<<std::setfill(fill)<<std::setw(wd)
int main()
{
    const int SIZE = sizeof(int);
    unsigned char v[SIZE];    //    int の値を入れるための配列
    int x = 0x12345678;
    *(int *)&v[0] = x;        //    配列 v に無理やり x の値を格納
    for(int i = 0; i < SIZE; ++i) {
        std::cout << "v[" << i << "] = 0x"
                      << hexformat('0', 2) << (int)v[i] << "\n";
    }
}
