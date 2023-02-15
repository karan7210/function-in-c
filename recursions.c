#include<stdio.h>


int abc( int ,int);



int main(){
  
  
int a , b;


  printf("Enter the first no =");

  scanf("%d", &a);

  
  printf("Enter the first no =");

  scanf("%d", &b);

  int c = abc( a,b);
  printf("%d\n",c);



return 0;

    
}

int abc( int small,int large ){

 if(large>=small){

    return large + abc(small,large-1);

 } else{

    return 0;
         
 }


}