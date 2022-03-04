#include <stdio.h>
#include <math.h>
struct student
{
    int a;
    int b;
    char cor;
};
struct store
{
    int a;
    char cor1;
    char cor2;
};
int main()
{
    int n;
    printf("Enter Total Number of Cordinate : ");
    scanf("%d", &n);
    struct student s[n];
    struct store str[n];
    char k=65;
    for(int i=0; i<n; i++)
    {
        s[i].cor= k;
        printf("Enter X coordinate of %c : ", k);
        scanf("%d", &s[i].a);
        printf("Enter Y coordinate of %c : ", k);
        scanf("%d", &s[i].b);
        k=k+1;
    }
    for(int i=0; i<n; i++)
    {
        printf("%c=(%d,%d) ", s[i].cor, s[i].a, s[i].b);
    }
    int dist;
    int p=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            str[p].a=sqrt(pow((s[i].a-s[j].a),2)+pow((s[i].b-s[j].b),2));
            str[p].cor1=s[i].cor;
            str[p].cor2=s[j].cor;
            p++;
        }
    }
    int j=0, min=str[0].a;
    for(int i=0; i<n; i++)
    {
        if(str[i].a<min)
        {
            min=str[i].a;
            j=i;
        }
    }
    printf("\nTwo Coordinate which have Shortest Distance \n");
    for(int i=0; i<n; i++){
        if(str[j].cor1==s[i].cor){
            printf("%c=(%d,%d) ", str[j].cor1, s[i].a, s[i].b);
        }
        if(str[j].cor2==s[i].cor){
            printf("%c=(%d,%d) ", str[j].cor2, s[i].a, s[i].b);
        }
    }
    printf("\nValue of These Two Coordinate %c and %c is : %d ",str[j].cor1,str[j].cor2, str[j].a);

}
