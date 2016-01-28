#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
void F_SA()
{
       int sa, choice;
       float A, B, C, D, E, XX, X;
       
                       printf ("\t\t\t   ******************************");
                       printf ("\n\t\t\t     Calculate the SURFACE AREA");
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t      [1].CIRCULAR");
                       printf ("\n\t\t\t      [2].CIRCULAR SURFACE");
                       printf ("\n\t\t\t      [3].CYLINDRICAL SURFACE");
                       printf ("\n\t\t\t      [4].CONICAL SURFACE");
                       printf ("\n\t\t\t      [5].AS THE POLYGON SURFACE");
                       printf ("\n\t\t\t      [6].PYRAMID SURFACE");
                       printf ("\n\t\t\t      [7].PRISM SURFACE");
                       printf ("\n\n\t\t\t      Select your number : ");
                       scanf ("%d", &sa);
                       
                       switch(sa)
                       {
                        A=0, B=0, C=0, D=0, E=0, X=0;         
                                 case 1:{printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t\tInput data Radius : ");
                                         scanf ("%f", &A);
                                         X=PI*(A*A);
                                         printf ("\n\t\t\t   ******************************");
                                         printf ("\n\t\t\t    Equation : PI*(Radius*Radius)");
                                         printf ("\n\n\t\t\t    Result   = %.2f", X);}
                                         break;
                                 case 2:{printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t\tInput data Radius : ");
                                         scanf ("%f", &A);
                                         X=4*PI*(A*A);
                                         printf ("\n\t\t\t   ******************************");
                                         printf ("\n\t\t\t    Equation : 4PI*(Radius*Radius)");
                                         printf ("\n\n\t\t\t    Result   = %.2f", X);}
                                         break;
                                 case 3:{printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t\tInput data Radius : ");
                                         scanf ("%f", &A);
                                         printf ("\n\t\t\t\tInput data High : ");
                                         scanf ("%f", &B);
                                         D=2*PI*(A*B);
                                         X=2*PI*(A*A);
                                         XX=D+X;
                                         printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t        Result   = %.2f", XX);}
                                         break;
                                 case 4:{printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t       Input data Radius : ");
                                         scanf ("%f", &A);
                                         printf ("\n\t\t\t       Input data High tilt : ");
                                         scanf ("%f", &B);
                                         D=PI*(A*B);
                                         X=PI*(A*A);
                                         XX=D+X;
                                         printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t        Result   = %.2f", XX);}
                                         break;
                                 case 5:{printf ("\n\t\t\t   ******************************");
                                         printf ("\n\n\t\t\t   Input data Perimeter base : ");
                                         scanf ("%f", &A);
                                         printf ("\n\t\t\t   Input data High tilt : ");
                                         scanf ("%f", &B);
                                         X=0.5*(A*B);
                                         printf ("\n\t\t\t   ******************************");
                                         printf ("\n\t\t      Equation : 0.5*(Perimeter base*High tilt)");
                                         printf ("\n\n\t\t      Result   = %.2f", X);}
                                         break;
                                 case 6:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t      Input data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t      Input data High tilt : ");
                                          scanf ("%f", &B);
                                          D=0.5*(A*B);
                                          X=D+A;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                 case 7:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t      Input data Base line : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t      Input data High : ");
                                          scanf ("%f", &B);
                                          printf ("\n\t\t\t      Input data Cross : ");
                                          scanf ("%f", &C);
                                          D=A*B;
                                          X=D*C;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                 default:{}
                       
                       
                       
                       }
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t\tDo you want to...");
                       printf ("\n\n\t\t     Return.[1]   Main menu.[2]   Exit.[3] : ");
                       scanf ("%d", &choice);
       getch();
}
