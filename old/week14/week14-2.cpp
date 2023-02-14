#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("剛進來func()時，z是%d\n",z);
    z=2;
    printf("在func()裡，把z改成%d\n",z);
}
int main()
{
    int x;
    func();

    printf("在main()裡，z的值是%d\n",z);
    z=1;
    printf("在main()裡改z的值，現在是%d\n",z);
}
