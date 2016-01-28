#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
void F_MT()
{
      int X, Y, N=1, M, choice;
      
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
      scanf ("%d", &choice);
                 
      getch();
      
}
                 
