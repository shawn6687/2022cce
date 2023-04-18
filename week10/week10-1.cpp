#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    for(int i=0;i<10;i++)
    {
        a.push_back(i*20);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
