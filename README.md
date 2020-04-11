# Pointer_and_Memory
using C

當程式定義一變數時，編譯器 Compiler 會依照設計師指定的資料型別從而配置適當大小的記憶體 Memory 給變數，以便於儲放資料。

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


