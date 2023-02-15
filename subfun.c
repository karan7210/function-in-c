#include<stdio.h>

int abc(int a,int b)  {


    return a-b;
};




int main(){

    int a,b;

   

    printf("Enter the first no = \n");
    scanf("%d",&a);

    printf("Enter the second no = \n");
    scanf("%d",&b);

 int c = abc(a,b);


 printf("%d",c);

    

    return 0;
}