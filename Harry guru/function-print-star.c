#include<stdio.h>
int sum(int a, int b);
void printstar(int n){
    printf("Enter a number");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\n %c",'*');
            }
    
}
int takenumber(){
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}
int main(){
int a,b,c;
a=9;
b=87;
//c= sum(a,b);
// c= takenumber();
printstar(10);
// printf("\n The sum is %d",c);
// printf("\n The number Entered is %d",c);


return 0;

}
int sum(int a ,int b)
{
    return a +b ;
}
