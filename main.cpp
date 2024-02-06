#include <stdio.h>

void modify_num(int &b)
{
    b=b+1;
}
int main() {
    int a=10;
    modify_num(a);
    printf("after modify_num a=%d\n",a);
    return 0;
}
