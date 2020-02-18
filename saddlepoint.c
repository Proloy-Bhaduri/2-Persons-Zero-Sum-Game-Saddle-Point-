
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,col,row,Pay_off_Arr[100][100],Rowminn,Rowmin[100],Colmax[100];
    printf("Enter \n1.)Number of rows\n2.)Number of columns\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++)
       {
           for(j=0;j<col;j++)
           {
              scanf("%d",&Pay_off_Arr[i][j]);
           }
       }
       printf("---------------------------------------");
       printf("The Pay-off Matrix that you entered is:");
       printf("---------------------------------------\n");


       for(i=0;i<row;i++)
       {
           for(j=0;j<col;j++)
           {

              printf("\t\t%4d",Pay_off_Arr[i][j]);
           }
           printf("\n\n");
       }//end of matrix printing
         for(i=0;i<row;i++)
       {
           Rowminn = Pay_off_Arr[i][0];
           for(j=1;j<col;j++)
           {

             // printf("\t\t%4d",Pay_off_Arr[i][j]);
              if(Rowminn>Pay_off_Arr[i][j])
                   Rowminn = Pay_off_Arr[i][j];

            }

           Rowmin[i] = Rowminn;
       }//end of rowmin calculation
        printf("\t\tRow-minimums are: ");
       for(i=0;i<row;i++)
         printf("%d ",Rowmin[i]);
         //starting colmax calculation
           for(j=0;j<col;j++)
       {
           int Colmaxx = Pay_off_Arr[0][j];
           for(i=1;i<row;i++)
           {

             // printf("\t\t%4d",Pay_off_Arr[i][j]);
              if(Colmaxx<Pay_off_Arr[i][j])
                   Colmaxx = Pay_off_Arr[i][j];

            }

           Colmax[j] = Colmaxx;
       }
       printf("\n\t\tColumn-maximums are: ");
       for(j=0;j<col;j++)
          printf("%d ",Colmax[j]);

          //calculating max of Rowmin[i]
          int maxof_rowmin = Rowmin[0];
          for(i=1;i<row;i++)
          {
              if(maxof_rowmin<Rowmin[i])
                 {
                     maxof_rowmin = Rowmin[i];

                 }

          }

          printf("\n\t\tMaximum of rowmins is : %d\n\n",maxof_rowmin);
          //calculating minimum of colmax[j]
          int minof_colmax = Colmax[0];

          for(j=1;j<col;j++)
          {
              if(minof_colmax>Colmax[j])
                 {

                     minof_colmax = Colmax[j];

                 }
          }

          printf("\n\t\tMinimum of colmax is : %d\n\n",minof_colmax);

          if(maxof_rowmin==minof_colmax )
            {
              int mr_pos=1;
           for(i=0;i<col;i++)
          {
            if(Rowmin[i]!=maxof_rowmin)
                mr_pos++;
            else if(Rowmin[i]==maxof_rowmin)
                break;
          }
          int mx_pos =1;
          for(j=0;j<col;j++)
          {
            if(Colmax[j]!=maxof_rowmin)
                mx_pos++;
            else if(Colmax[j]==maxof_rowmin)
                break;
          }
          printf("\t\t Saddle point for this game is (A%d,B%d) and a(%d,%d) = %d\n",mr_pos,mx_pos,mr_pos,mx_pos,minof_colmax);
             int val_ofgm = minof_colmax;
             printf("\n\n\t\t Saddle point exists for this Payoff matrix\n\t\tValue of Game = %d\n\n",minof_colmax);

             if(val_ofgm>0)
                    printf("\t\tPlayer-1 is the winner\n");
             else if(val_ofgm<0)
                    printf("\t\tPlayer-2 is the winner\n");
             else
                    printf("\t\tThe match is draw\n");

            }
          else
             printf("\n\t\tSaddle point  doesn't exists for this Payoff matrix\n\t\tValue of Game = Undefined\n\n");



getch();
return 0;

}

