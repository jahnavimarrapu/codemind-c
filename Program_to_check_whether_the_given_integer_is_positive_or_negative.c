#include<stdio.h>
void fun(int a)
{
    if(a>0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    fun(a);
}
