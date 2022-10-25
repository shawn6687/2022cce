老師跟我們說用「左手i、右手j」的口訣, 來思考迴圈執行的樣子, 先把 i:5 i:4 i:3 i:2 i:1 印出來, 使用倒過來的迴圈。裡面的 j迴圈, 則是用基礎型。
#include <stdio.h>
int main()
{
    for(int i=5; i>0; i--)
    {
        for(int j=0; j<i; j++)
        {
            printf("*");
        }
        printf("i:%d星星\n", i);
    }
}



老師還有說「左手i 當鷹架, 右手j 一直做」的口訣,因為星星的數量是 1 3 5 7 9, 而且空格的數量也很奇怪, 是 4 3 2 1 0, 所以先利用左手i 建出鷹架, 看到很多樓層。接下來，最後老師改用 for(int k=0; k<space; k++) 的迴圈, 來畫出空格, 利用 for(int k=0; k<star; k++) 的迴圈。
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}

使用 1個for迴圈 for(int i=1; i<=a; i++) 去試全部的數, 這個數 i 如果可以兩個都整除 if(a%i==0 && b%i==0) 就可以找到答案了 ans = i; 
#include <stdio.h>
int main()
{
    printf("請輸入2個整數，要約分:");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for(int i=1; i<=a; i++)
    {
        if( a%i==0 && b%i==0)
        {
            ans = i;
        }
    }
    printf("ans: %d 可約分", ans);
}

step02-2_「輾轉相除法」可以找最大公因數。口訣是老大a、老二b、老三c=a%b 如果是0 則老二b是答案。老二變老大、老三變老二, 繼續做,就成功了。請用 CodeBlocks 實作 week06-4.cpp 裡面有把老大、老二、老三的數值印出來。
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1)
    {
        c = a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b,c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案b: %d ", b);
}







week08-1 for迴圈質數
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數", n);
    else printf("%d 不好, 不是質數", n);
}
///實數判別
///不能被約分的數字
///只能被1還有n本身可以整除/約分
///暴力法


week08-2 判斷 n是不是質數
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    for(int n=2; n<=a; n++)
    {
        int bad=0;
        for(int i=2; i<n; i++)
        {
            if(n%i==0) bad=1;
        }
        if(bad==0) printf("%d", n);
    }
}


week08-3 迴圈sum
#include<stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來):");

        int n;
        int sum=0;
        for(int i=0; i<5;i++)
        {
            scanf("%d", &n);
            sum +=n;
        }
        printf("總和是:%d",sum);
}


week08-4 for直角三角形
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n; i++)
    {
        for(int k=1; k<=n-i; k++)printf(" ");
        for(int k=1; k<=i; k++)printf("*");
        printf("\n");
    }
}


week08-5 while迴圈印直角三角形
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int k=1; k<=n; k++)
        {
            if(k<=n-i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}


week08-6 2個while迴圈三角形
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<+n)
    {
        int k=1;
        while(k<=n)
        {
            if(k<=n-i) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
