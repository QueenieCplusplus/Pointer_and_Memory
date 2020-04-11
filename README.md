# Pointer & Memory
using C

當程式定義一變數時，編譯器 Compiler 會依照設計師指定的資料型別從而配置適當大小的記憶體 Memory 給變數，以便於儲放資料。

# using &

* & 為位址運算子。

此運算式 expression 的表達目的是呈現變數的記憶體位址 address in memory。

    #include <stdio.h>

    int main(){

        int x=1000, y=2000, z=3000;

        printf("x var is locate on address: %p \n", &x);
        printf("y var is locate on address: %p \n", &y);
        printf("z var is locate on address: %p \n", &z);

        printf("x var content is: %d \n ", x);
        printf("y var content is: %d \n ", y);
        printf("z var content is: %d \n ", z);

        getchar();
        return 0;

    }
    
# about Ptr

    x var is locate on address: 0x7ffee321a988 
    y var is locate on address: 0x7ffee321a984 
    z var is locate on address: 0x7ffee321a980
    

* 64 位元的編譯器:

輸出結果中，每一個變數的位址皆有 14 個數字，每一數字有 16 個位元 bits，共計 225 bits。

* 32 位元的編譯器:

輸出結果中，每一個變數的位址皆有 8 個數字，每一數字有 4 個位元 bits，共計 32 bits。

# about Memory

    +----------------+----------------+----------------+----------------+
    | 0x7ffee321a980 | 0x7ffee321a984 | 0x7ffee321a988 | 0x7ffee321a992 |
    +----------------+----------------+----------------+----------------+
    |      3000      |       2000     |      1000      |                |
    +----------------+----------------+----------------+----------------+
    |        Z       |        y       |        x       |                |
    +----------------+----------------+----------------+----------------+
    

