#include<stdio.h>

int mod (int b, int p, int m){
int y;
    if(p==0)
        return 1;
    else if(p%2==0)
        {
            y=mod(b,p/2,m)
            return ((y*y)%m);
        }
    else
    return {(b%m)*mod(b,p-1,m)}%m;

}
void main()
{
    int b,p,m,result;
    printf("Enter base : ");
    scanf("%d",&b);
    printf("Enter power : ");
    scanf("%d",&p);
    printf("Enter mod value : ");
    scanf("%d",&m);

    result=mod(b,p,m);


}
