#include <stdio.h>
int sum(int a,int b);///���ŧideclare

int main()
{///�b�Τ��e�A�n���ŧideclare �� �w�qdefine
    int ans=sum(2, 3);///�ϥ� �I�s
    printf("ans: %d\n",ans);
}
int sum(int a,int b)///�w�qdefine
{
    return a+b;
}///�^�� �^�Фj�a
