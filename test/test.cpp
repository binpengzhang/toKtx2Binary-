#include <iostream>
#include "../ToKtx.h"
int main(int argc, char* argv[])
{
   /* char* tett[4];
    tett[0] = const_cast<char*>("test.exe");
    tett[1] = const_cast<char*>("--t2");
    tett[2] = const_cast < char*>("D:/1.ktx");
    tett[3] = const_cast < char*>("D:/1.jpeg");
    auto ww =ToKtx(4, tett);
    int i = 0;*/

    //用FILE打开"D:\1.jpeg"图片
    FILE* file = fopen("D:/1.jpeg", "rb");

    unsigned char* outfile = nullptr;
    size_t outSize = 0;
    auto ret = BufferToKtx2(file, &outfile,outSize);
    //关闭文件
    fclose(file);
    //
    //将outfile存入文件中
    FILE* file2 = fopen("D:/1.ktx2", "wb");
    fwrite(outfile, 1, outSize, file2);
    fclose(file2);
}
