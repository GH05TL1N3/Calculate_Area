#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
void F_REC()
{
        int rec, choice;
        float A, B, C, X;               
                       
                       
                       printf ("\t\t\t   ******************************");
                       printf ("\n\t\t\t   Calculate the RECTANGULAR AREA");
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t\t [1].QUADRATE");
                       printf ("\n\t\t\t\t [2].RECTANGLE");
                       printf ("\n\t\t\t\t [3].RHOMBOHEDRON");
                       printf ("\n\t\t\t\t [4].PARALLELOGRAM");
                       printf ("\n\t\t\t\t [5].SHAPED KITES");
                       printf ("\n\t\t\t\t [6].TRAPEZOID");
                       printf ("\n\t\t\t\t [7].TRAPEZIUM");
                       printf ("\n\n\t\t\t      Select your number : ");
                       scanf ("%d", &rec);
                       //system("cls");
                       
                       switch(rec)
                       {
                       A=0, B=0, C=0, X=0;
                                  case 1:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t\tInput data Side1 : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t\tInput data Side2 : ");
                                          scanf ("%f", &B);
                                          X=A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t       Equation : Side1*Side2");
                                          printf ("\n\n\t\t\t       Result   = %.2f", X);}
                                          break;
                                  case 2:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t      Input data Width : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t      Input data Lengthy : ");
                                          scanf ("%f", &B);
                                          X=A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t      Equation : Width*Lengthy");
                                          printf ("\n\n\t\t\t      Result   = %.2f", X);}
                                          break;
                                  case 3:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t     Input data Diagonal1 : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t     Input data Diagonal2 : ");
                                          scanf ("%f", &B);
                                          X=0.5*(A*B);
                                          printf ("\n\t\t   ********************************************");
                                          printf ("\n\t\t\tEquation : 1/2(Diagonal1*Diagonal2)");
                                          printf ("\n\n\t\t\tResult   = %.2f", X);}
                                          break;
                                  case 4:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t     Input data Base : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t     Input data High : ");
                                          scanf ("%f", &B);
                                          X=A*B;
                                          printf ("\n\t\t\t   ******************************");
                                          printf ("\n\t\t\t     Equation : Base*High");
                                          printf ("\n\n\t\t\t     Result   = %.2f", X);}
                                          break;
                                  case 5:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t     Input data Diagonal1 : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t     Input data Diagonal2 : ");
                                          scanf ("%f", &B);
                                          X=0.5*(A*B);
                                          printf ("\n\t\t*****************************************************");
                                          printf ("\n\t\t\tEquation : 1/2(Diagonal1*Diagonal2)");
                                          printf ("\n\n\t\t\tResult   = %.2f", X);}
                                          break;
                                  case 6:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t     Input data Parallel1 : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t     Input data Parallel2 : ");
                                          scanf ("%f", &B);
                                          printf ("\n\t\t\t     Input data High : ");
                                          scanf ("%f", &C);
                                          X=0.5*(A+B)*C;
                                          printf ("\n\t\t*****************************************************");
                                          printf ("\n\t\t      Equation : 1/2(Parallel1+Parallel2)*High");
                                          printf ("\n\n\t\t      Result   = %.2f", X);}
                                          break;
                                  case 7:{printf ("\n\t\t\t   ******************************");
                                          printf ("\n\n\t\t\t     Input data Branch line1 : ");
                                          scanf ("%f", &A);
                                          printf ("\n\t\t\t     Input data Branch line2 : ");
                                          scanf ("%f", &B);
                                          printf ("\n\t\t\t     Input data Diagonal : ");
                                          scanf ("%f", &C);
                                          X=0.5*C*(A+B);
                                          printf ("\n\t\t*****************************************************");
                                          printf ("\n\t\t Equation : 1/2*Diagonal*(Branch line1+Branch line2)");
                                          printf ("\n\n\t\t Result   = %.2f", X);}
                                          break;       
                                  default:{}
                       
                     
                       
                       }
                       
                       printf ("\n\t\t\t   ******************************");
                       printf ("\n\n\t\t\t\tDo you want to...");
                       printf ("\n\n\t\t     Return.[1]   Main menu.[2]   Exit.[3] : ");
                       scanf ("%d", &choice);
                       
        getch();
}                           
