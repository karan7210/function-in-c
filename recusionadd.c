#include<stdio.h>

int abc(int a );


int main(){
  
int a;


  printf("Enter the first no =");

  scanf("%d", &a);

  

int c  = abc(a);
  


printf("%d",c);



return 0;

}

int abc( int a ){ 
 if(a>0){
    return a + abc(a-1);

 } else{
    return 0;
 }


}