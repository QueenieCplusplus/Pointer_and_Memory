// 2020, 4/11, pm 6:30, by Vivy Chen (Queen)
// ptr and var

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

// ➜  ~ git:(react2) ✗ /Users/pintred/Desktop/ptr_and_var ; exit;
// x var is locate on address: 0x7ffee321a988 
// y var is locate on address: 0x7ffee321a984 
// z var is locate on address: 0x7ffee321a980 
// x var content is: 1000 
//  y var content is: 2000 
//  z var content is: 3000 