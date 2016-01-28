#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
void F_TRI()
{
        int tri, choice;
        float A, B, C, D, E, XX, X;
        
                       printf ("\t\t\t   ******************************");
                       printf ("\n\t\t\t     Calculate the TRIANGLE AREA");
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t\t[1].TRIANGLE GENERAL");
                       printf ("\n\t\t\t\t[2].TRIANGLE");
                       printf ("\n\t\t\t\t[3].ISOSCELES TRIANGLE");
                       printf ("\n\t\t\t\t[4].RIGHT TRIANGLE");
                       printf ("\n\n\t\t\t       Select your number : ");
                       scanf ("%d", &tri);
                               
                       switch(tri)
                       {
                        A=0, B=0, C=0, D=0, E=0, X=0;
                                  case 1:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &B);
                                          X=A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : Base*High");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 2:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Side : ");
                                          scanf ("%f", &A);
                                          X=0.43*(A*A);
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t    Equation : 0.43*(Side*Side)");
                                          printf ("\n\n\t\t\t    Result   = %.2f", X);}
                                          break;
                                  case 3:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t    Input data Base assembly : ");
                                          scanf ("%f", &B);
                                          D=(A/4);
                                          E=(4*(B*B)-(A*A));
                                          X=sqrt(E);
                                          XX=D*X;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t          Result   = %.2f", XX);}
                                          break;
                                  case 4:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Corner : ");
                                          scanf ("%f", &A);
                                          X=0.5*(A*A);
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t   Equation : 0.5*(Corner*Corner)");
                                          printf ("\n\n\t\t\t   Result   = %.2f", X);}
                                          break;
                                  default:{}
                       

                           
                       }
                       
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t\tDo you want to...");
                       printf ("\n\n\t\t     Return.[1]   Main menu.[2]   Exit.[3] : ");
                       scanf ("%d", &choice);                 
        getch();
        
}
