#include <stdio.h>

int main()
{
    float x,y,xP1=4.00,xP2=4.50,xP3=5.00,xP4=2.00,xP5=1.50;
    scanf("%f %f",&x,&y);
    if(x==1){
        printf("Total: R$ %.2f\n",xP1*y);
    }
    else if(x==2){
        printf("Total: R$ %.2f\n",xP2*y);
    }
      else if(x==3){
        printf("Total: R$ %.2f\n",xP3*y);
    }
      else if(x==4){
        printf("Total: R$ %.2f\n",xP4*y);
    }
      else {
        printf("Total: R$ %.2f\n",xP5*y);
    }
    return 0;
}