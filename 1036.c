#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,D,R1,R2;
    scanf("%f %f %f",&A,&B,&C);
    D=(B*B)-(4*A*C);
    if(A==0.0)
    {


        printf("Impossivel calcular\n");
    }
   else if(D<0)
    {


        printf("Impossivel calcular\n");
    }
    else if(D>0)
    {
        R1=(-B+sqrt(D))/(2*A);
        R2=(-B-sqrt(D))/(2*A);
        printf("R1 = %0.5f\nR2 = %0.5f\n",R1,R2);
    }
     else if(D=0)
    {
        R1=R2=(-B)/(2*A);

        printf("R1 = %0.5f\nR2 = %0.5f\n",R1,R2);
    }

    return 0;
}


