#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
void F_VS()
{
      int vs, choice;
      float A, B, C, D, E, XX, X;
      
                       printf ("\t\t\t   ******************************");
                       printf ("\n\t\t\t     Calculate the VOLUME SHAPE");
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t      [1].RECTANGULAR VOLUME");
                       printf ("\n\t\t\t      [2].CUBIC VOLUME");
                       printf ("\n\t\t\t      [3].ROUND VOLUME");
                       printf ("\n\t\t\t      [4].CYLINDRICAL VOLUME");
                       printf ("\n\t\t\t      [5].CONICAL VOLUME");
                       printf ("\n\t\t\t      [6].PRISM VOLUME");
                       printf ("\n\t\t\t      [7].PYRAMID VOLUME");
                       printf ("\n\n\t\t\t      Select your number : ");
                       scanf ("%d", &vs);
                       
                       switch(vs)
                       {
                       A=0, B=0, C=0, D=0, E=0, XX=0, X=0;
                                  case 1:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Width : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t\tInput data Lengthy : ");
                                          scanf ("%f", &B);
                                          printf ("\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &C);
                                          X=A*B*C;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : Width*Lengthy*High");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 2:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Side : ");
                                          scanf ("%f", &A);
                                          X=A*A*A;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : Side*Side*Side");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 3:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Radius : ");
                                          scanf ("%f", &A);
                                          X=1.33*(PI*(A*A*A));
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 4:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Radius : ");
                                          scanf ("%f", &A);
                                          printf ("\n\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &B);
                                          X=PI*(A*A)*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : PI*(Radius*Radius)*High");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 5:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Radius : ");
                                          scanf ("%f", &A);
                                          printf ("\n\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &B);
                                          X=0.33*(3.14*(A*A)*B);
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 6:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &B);
                                          X=A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : Base*High");
                                          printf ("\n\n\t\t\t        Result   = %.2f", X);}
                                          break;
                                  case 7:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\n\t\t\t\tInput data High : ");
                                          scanf ("%f", &B);
                                          X=0.33*A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t        Equation : 0.33*Base*High");
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
