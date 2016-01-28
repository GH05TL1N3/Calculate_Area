#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

int JAYJUNG; 

void F_REC()
{
        JAYJUNG=1;
        
        int rec;
        float A, B, C, X;               
                       
        while(JAYJUNG==1)                
        {
        A=0, B=0, C=0, X=0;
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
                       scanf ("%d", &JAYJUNG);
                       system("cls");
                       
       // getch();
}  
}

















void F_TRI()
{
        JAYJUNG=1;
        
        int tri;
        float A, B, C, D, E, XX, X;
        
        while(JAYJUNG==1)
        {
        A=0, B=0, C=0, D=0, E=0, X=0;
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
                       scanf ("%d", &JAYJUNG);
                       system("cls");                 
        //getch();
        
}

}











void F_SA()
{
       JAYJUNG=1;
       
       int sa;
       float A, B, C, D, E, XX, X;
       
       while(JAYJUNG==1)
       {
       A=0, B=0, C=0, D=0, E=0, X=0;
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
                       scanf ("%d", &JAYJUNG);
                       system("cls");
       //getch();
}
}









void F_VS()
{
      JAYJUNG=1;
      
      int vs;
      float A, B, C, D, E, XX, X;
      
      while(JAYJUNG==1)
      {
      A=0, B=0, C=0, D=0, E=0, XX=0, X=0;
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
                       scanf ("%d", &JAYJUNG);
                       system("cls");
      //getch();
      
} 
}







void F_MT()
{
      JAYJUNG=1;
      
      int X, Y, N=1, M;
      
      while(JAYJUNG==1)
      {
      
      printf ("\t\t\t     ************************");
      printf ("\n\t\t\t       MULTIPLICATION TABLE");
      printf ("\n\t\t\t     ************************");
      printf ("\n\n\t\t\t      Input your Data X : ");
      scanf ("%d", &X);
      printf ("\n\n\t\t\t      Input your Data Y : ");
      scanf ("%d", &M);
      system("cls");
      printf ("********************");
      printf ("\n** MULTIPLICATION ** : %d\n", X);
      printf ("********************");
      
      while(N<=M) 
      {
                 
                 Y=X*N;
                 printf ("\n\n     %d x %d  =  %d",X, N, Y);
                 N++;}
                 
      printf ("\n\n******************************");
      printf ("\n\nDo you want to...");
      printf ("\n\nReturn.[1]   Main menu.[2]   Exit.[3] : ");
      scanf ("%d", &JAYJUNG);
      system("cls");
                 
      //getch();
      
}   
}


main()
{
      JAYJUNG=2;      
       
       while(JAYJUNG==2)
      {
                        
      int number;
      
      printf ("\n\t\t   ****************************************");
      printf ("\n\t\t\t   Program Calculate The Area");
      printf ("\n\t\t   ****************************************");
      printf ("\n\n\t\t   [1].Calculate the RECTANGULAR AREA");
      printf ("\n\t\t   [2].Calculate the TRIANGLE AREA");
      printf ("\n\t\t   [3].Calculate the SHAPES AREA");
      printf ("\n\t\t   [4].Calculate the VOLUME SHAPE");
      printf ("\n\t\t   [5].Program MULTIPLICATION TABLE");
      printf ("\n\t\t   [6].Exit the Program");
      printf ("\n\n\t\t   Select your number : ");
      scanf ("%d", &number);
      system("cls");
      
      
      switch(number)
      {
                    case 1:F_REC();
                    break;
                    case 2:F_TRI();
                    break;
                    case 3:F_SA();
                    break;
                    case 4:F_VS();
                    break;
                    case 5:F_MT();
                    break;
                    case 6:exit(0);
                    break;
                    default:{system("cls");
                             printf ("\n\n\n\t\t\t\tERROR NO CHOICE !!");
                             printf ("\n\n\t\t\t  Press any key to continue ...");
                             getch();
                             system("cls");}
      }

      }        
               
               
               
               
               
               
               
               
               
               
               
               
               
      
       
       
       
       
       
       
       //getch();
       
       
       
       
       
       
       
       
       
       
       
       
       
       }                     
