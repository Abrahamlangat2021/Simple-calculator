#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,difference,product,answer,quotetient,module,selection,num1,num2;

      printf("enter num1\n");
      scanf("%d",&num1);
      printf("enter num2\n");
      scanf("%d",&num2);
      //calculate sum
      sum=num1+num2;
      //display sum
      printf("sum=%d",sum);
      //calculate difference
      difference=num1-num2;
      //display difference
      printf("difference=%d",difference);
      //calculate product
      product=num1*num2;
      //display product
      printf("product=%d",product);

      //calculate quotetient
      quotetient=num1/num2;
      //display quotetient
      printf("quotetient=%d",quotetient);
      //calculate module
      module=num1%num2;
      //display module
      printf("module=%d",module);



    return 0;
}
