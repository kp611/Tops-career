#include<stdio.h>
int add(){
    int b,c,d;
       printf("\nenter first number:");
        scanf("%d",&b);
        printf("enter first number:");
        scanf("%d",&c);
        d=b+c;
        printf("%d",d);

}
int sub(){
    int b,c,d;
       printf("\nenter first number:");
        scanf("%d",&b);
        printf("enter first number:");
        scanf("%d",&c);
        d=b-c;
        printf("%d",d);

}
int mul(){
    int b,c,d;
       printf("\nenter first number:");
        scanf("%d",&b);
        printf("enter first number:");
        scanf("%d",&c);
        d=b*c;
        printf("%d",d);

}
int div(){
    int b,c,d;
       printf("\nenter first number:");
        scanf("%d",&b);
        printf("enter first number:");
        scanf("%d",&c);
        d=b/c;
        printf("%d",d);

}
int main(){
    int a,b,c,d;
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n"); 
    printf("Enter choice:");
    scanf("%d",&a);
    
    switch (a){
      case 1:add();
      break;
      
     case 2:
     sub();
     break;
     case 3:
     mul();
     
     break;
     case 4:
     div();
     break;
     
     
    
    
    default:
    printf("invalid option");
        break;
    }
        return 0;
}