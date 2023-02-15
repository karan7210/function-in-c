#include<stdio.h>

int abc(int , int );



int main(){
  
  
  int c = abc(50,50);

printf("%d",c);

  



    return 0;
}



int abc(int a , int b){
    return a+b;
}