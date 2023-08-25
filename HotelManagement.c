#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
int a[10];
int qty[10];
int count=0;
void start();
void login();
void brfmenu();
void lunchmenu();
void snkmenu();
void billing();
void placeorder();
void pin1(int);
void del();
void shipping();
void payment(int);
struct address{
  unsigned  long long int value;
  char name[10];
  int address[10];
  char locality[20];
}b;
int main()
{
  FILE *fp;
  fp=fopen("hotel.txt","w");
  printf("\t\t\t\t\tFOODIES HUB\n\n\n\n");
  int opt;
  login();
  start();
  fclose(fp);
  
}
void login()
{
    
    char name1[4]="TED";
    char pass1[5]="t123";
    char name2[4]="JOE";
    char pass2[5]="j123";
    char username[4];
    char password[5];
    printf("\t\t\t\tLOGIN SYSTEM\n");
    start:
    printf("Enter username:  ");
    scanf("%s",username);
    printf("Enter password: ");
    scanf("%s",password);
    if((strcmp(username,name1)==0&&strcmp(password,pass1)==0)||(strcmp(username,name2)==0&&strcmp(password,pass2)==0))
    {
        printf("\n\tACCESS GRANTED\n");
    }
    else
    {
        printf("\t\tACCESS DENINED\n");
        goto start;
    }
}
void start()
{
  int opt;
  
   printf("Select the menu type\n");
  printf("1.Breakfast\n");
  printf("2.Lunch\n");
  printf("3.Snack\n");
  scanf("%d",&opt);
  switch(opt)
  {
    case 1:brfmenu();
          break;
    case 2:lunchmenu();
           break;
    case 3:snkmenu();
           break;
    default:printf("Select the right opt");
            start();
            break;
  }
}
void brfmenu()
{
  FILE *fp;
  fp=fopen("hotel.txt","a");
  
  int opt,n;
  char b;
  printf("\t\t\t\tBREAKFAST MENU\n\n");
  printf("\n------------------------------------------------------------------------------\n");
  printf("s.no\thotelname\t\titem\t\t\tprice\t\tqty");
  printf("\n------------------------------------------------------------------------------\n");
  printf("\n1.\tparivarveg\t\tmasaladosa\t\tRS 84\t\t1");
  printf("\n2. \tsuprabath\t\tvada\t\t\tRS 65\t\t1");
  printf("\n3. \tsukhasagar\t\ttamatobath\t\tRS 60\t\t1");
  printf("\n4. \tswagath    \t\tidly(6pcs)\t\tRS 85\t\t1");
  fprintf(fp,"\n\n\t\t\t\tBREAKFAST MENU\n");
  fputs("\n------------------------------------------------------------------------------\n",fp);
  fputs("s.no\thotelname\t\titem\t\t\tprice\t\tqty",fp);
  fputs("\n------------------------------------------------------------------------------\n",fp);
  fputs("\n1.\tparivarveg\t\tmasaladosa\t\tRS 84\t\t1",fp);
  fputs("\n2. \tsuprabath\t\tvada\t\t\tRS 65\t\t1",fp);
  fputs("\n3. \tsukhasagar\t\ttamatobath\t\tRS 60\t\t1",fp);
  fputs("\n4. \tswagath    \t\tidly(6pcs)\t\tRS 85\t\t1",fp);
  fclose(fp);
  goto start2;
  start2:
  printf("\n\nEnter 9 to place the order");
  printf("\nEnter 1 to see other menues\n");
  scanf("%d",&opt);
  switch(opt)
  {
    case 9:placeorder();
           break;
    case 1:start();
           break;
    default:printf("\n\nWRONG OPTION CHOOSEN\n");
           goto start2;
            break;
    
  }
 // goto start2;
  
  

}
void lunchmenu()
{       int opt;
FILE *fp;
fp=fopen("hotel.txt","a");
 printf("\t\t\t\tLUNCH MENU\n");
      printf("\n------------------------------------------------------------------------------\n");
    printf("s.no\thotelname\t\titem\t\t\tprice\t\tqty");
    printf("\n------------------------------------------------------------------------------\n");
    printf("\n5. \tkinargrand\t\tChickenBiryani\t\tRS 290\t\t1");
    printf("\n6. \tparivaar\t\tvegfriedrice\t\tRS 189\t\t1");
    printf("\n7. \tpistahouse\t\teggfriedrice\t\tRS 219\t\t1");
    printf("\n8. \tsantoshdhaba\t\tjeerarice\t\tRS 110\t\t1");
    fprintf(fp,"\n\n\t\t\t\tLUNCH MENU\n");
    fputs("\n------------------------------------------------------------------------------\n",fp);
    fputs("s.no\thotelname\t\titem\t\t\tprice\t\tqty",fp);
    fputs("\n------------------------------------------------------------------------------\n",fp);
    fputs("\n5. \tkinargrand\t\tChickenBiryani\t\tRS 290\t\t1",fp);
    fputs("\n6. \tparivaar\t\tvegfriedrice\t\tRS 189\t\t1",fp);
    fputs("\n7. \tpistahouse\t\teggfriedrice\t\tRS 219\t\t1",fp);
    fputs("\n8. \tsantoshdhaba\t\tjeerarice\t\tRS 110\t\t1",fp);
  fclose(fp);
  goto start3;
    start3:
    printf("\n\nEnter 9 to place the order");
    printf("\nEnter 1 to see other menues\n");
    scanf("%d",&opt);
    switch(opt)
  {
    case 9:placeorder();
           break;
    case 1:start();
           break;
    default:printf("\n\nWRONG OPTION CHOOSEN\n");
            goto start3;
            break;
    
  }
  //goto start3;
  
}
void snkmenu()
{
  FILE *fp;
  fp=fopen("hotel.txt","a");
    int opt;  
    printf("\t\t\t\tSNACK MENU\n");
  printf("------------------------------------------------------------------------------\n");
  printf("s.no\thotelname\t\titem\t\t\tprice\t\tqty");
  printf("\n------------------------------------------------------------------------------\n");
  printf("\n8. \trrrfoodcourt\t\tChickenNoodles\t\tRS 240\t\t1");  
  fprintf(fp,"\n\n\t\t\t\tSNACK MENU\n");
  fputs("\n------------------------------------------------------------------------------\n",fp);
  fputs("s.no\thotelname\t\titem\t\t\tprice\t\tqty",fp);
  fputs("\n------------------------------------------------------------------------------\n",fp);
  fputs("\n8. \trrrfoodcourt\t\tChickenNoodles\t\tRS 240\t\t1",fp);
  fclose(fp);
  goto start5;
  start5:
  printf("\n\nenter 9 to place the order");
  printf("\nenter 1 to see other menues\n");
    scanf("%d",&opt);
    switch(opt)
  {
    case 9:placeorder();
           break;
    case 1:start();
           break;
    default:printf("\n\nWRONG OPTION CHOOSEN\n\n");
            goto start5;
            break;
    
  }
  //goto start5;
  
}
void placeorder()
{
  int n;
  
    order:
      printf("Enter the s.no\n");
      scanf("%d",&a[count]);
      printf("Enter the qty\n");
      scanf("%d",&qty[count]);
      count+=1;
      goto start7;
      start7:
      printf("enter 20 to add order\n");
      printf("enter 6 to exit\n");
      printf("enter 0 to delete a odrer\n");
     
      scanf("%d",&n);
      if(n==0)
      del();
      else if(n==20)
      goto order;
     else if(n==6)
      billing();
      else
{
printf("\n\nWRONG OPTION CHOOSEN\n\n");
goto start7;
}
//goto start7;
       
}
void del()
{
  int b,i,opt;
 printf("Enter the s.no you want to delete\n");
 scanf("%d",&b);
 for(i=0;i<10;i++)
 {
   if(a[i]==b)
   {
   
   a[i]=0;
   break;
 }
 }
 printf("Delete any other item enter 0 or enter 5 to continue\n");
 scanf("%d",&opt);
 if(opt==0)
 del();
 else
 billing();
 
}
void billing()
{
 // clrscr();
 //system("clear");
 
  FILE *fp;
  fp=fopen("hotel.txt","a");
  int i,sum=0,count=0;
  for(i=0;i<8;i++)
  {
    if(a[i]==0)
    count+=1;
  }
  if(count==8)
  {
  printf("NO ITEMS TO PLACE THE ORDER") ; 
  exit(0);
}
  else
  {
  
  printf("\n\t\t\t\tBILL\n");
  printf("-------------------------------------------------------------------------\n");
  printf("s.no\t   hotel\t\titem\t\tqty\t\tprice");
  printf("\n-----------------------------------------------------------------------\n");
  fprintf(fp,"\n\n\t\t\t\tBILL\n");
  fputs("\n----------------------------------------------------------------------------\n",fp);
  fprintf(fp,"s.no\t   hotel\t\titem\t\tqty\t\tprice");
  fputs("\n-----------------------------------------------------------------------------\n",fp);
  for(i=0;i<count;i++)
  {
    switch(a[i])
    {   case 0:continue;
                break;
      case 1:  printf("\n1.\tparivarveg\t\tmasaladosa\t%d\t\t%d",qty[i],qty[i]*84);
          fprintf(fp,"\n1.\tparivarveg\t\tmasaladosa\t%d;\t\t%d",qty[i],qty[i]*84);
          sum+=qty[i]*84;
          break;
      case 2:  printf("\n2. \tsuprabath\t\tvada\t\t%d\t\t%d",qty[i],qty[i]*65);
      fprintf(fp,"\n2. \tsuprabath\t\tvada\t\t%d\t\t%d",qty[i],qty[i]*65);
          sum+=qty[i]*65;
          break;
      case 3:printf("\n3. \tsukhasagar\t\ttamatobath\t%d\t\t%d",qty[i],qty[i]*60);
    fprintf(fp,"\n3. \tsukhasagar\t\ttamatobath\t%d\t\t%d",qty[i],qty[i]*60);
          sum+=qty[i]*60;
          break;
      case 4:  printf("\n4. \tswagath    \t\tidly(6pcs)\t%d\t\t%d",qty[i],qty[i]*85);
          fprintf(fp,"\n4. \tswagath    \t\tidly(6pcs)\t%d\t\t%d",qty[i],qty[i]*85);
          sum+=qty[i]*85;
          break;
      case 5:  printf("\n5. \tkinargrand\t\tChickenBiryani\t%d\t\t%d",qty[i],qty[i]*290);
            fprintf(fp,"\n5. \tkinargrand\t\tChickenBiryani\t\t%d\t\t%d",qty[i],qty[i]*290);
          sum+=qty[i]*290;
          break;
      case 6:  printf("\n6. \tparivaar\t\tvegfriedrice\t%d\t\t%d",qty[i],qty[i]*189);
            fprintf(fp,"\n6. \tparivaar\t\tvegfriedrice\t\t%d\t\t%d",qty[i],qty[i]*189);
          sum+=qty[i]*189;
          break;
      case 7:  printf("\n7. \tpistahouse\t\teggfriedrice\t%d\t\t%d",qty[i],qty[i]*219);
            fprintf(fp,"\n7. \tpistahouse\t\teggfriedrice\t\t%d\t\t%d",qty[i],qty[i]*219);
          sum+=qty[i]*219;
          break;
      case 8: printf("\n8. \trrrfoodcourt\t\tChickenNoodles\t%d\t\t%d",qty[i],qty[i]*240);
          fprintf(fp,"\n8. \trrrfoodcourt\t\tChickenNoodles\t\t%d\t\t%d",qty[i],qty[i]*240);
          sum+=qty[i]*240;
          break;
      
      default:printf("\nOpt not found");
              break;
      }  
  }
  printf("\n---------------------------------------------------------------------------\n");
  printf("\n\t\t\t\t\t\t\tTOTAL=%d",sum);
  printf("\n----------------------------------------------------------------------------\n");
   fprintf(fp,"\n---------------------------------------------------------------------------\n");
 fprintf(fp,"\n\t\t\t\t\t\t\tTOTAL=%d",sum);
  fprintf(fp,"\n----------------------------------------------------------------------------\n");
 fclose(fp);
  pin1(sum);
  
}
}
void pin1(int sum)
{

 

  int i,n;
  char a[10];
  char b[10];
  srand(time(0));
  for(i=0;i<9;i++)
  switch(i+1)
  {
    case 1:a[i]=(rand()%(57-48+1)+48);
           break;
    case 5:a[i]=(rand()%(57-48+1)+48);
           break;
    case 3:a[i]=(rand()%(57-48+1)+48);
           break;
    case 4:a[i]=(rand()%(57-48+1)+48);
           break;
    case 2:a[i]=(rand()%(90-65+1)+65);
           break;
    case 6:a[i]=(rand()%(122-97+1)+97);
           break;
    case 7:a[i]=(rand()%(90-65+1)+65);
           break;
    case 8:a[i]=(rand()%(122-97+1)+97);
           break;
    case 9:a[i]=(rand()%(38-35+1)+35);
           break;
     default:printf("bye");
             break;
    
    }
  a[9]='\0';
    printf("\n\t\t\t%s\n",a);
    printf("\nEnter the above string\n");
    scanf("%s",b);
    b[9]='\0';
    n=strcmp(a,b);
    if(n==0)
    payment(sum);
    else
    {
  
    printf("You have entered a WRONG strig\n");
    pin1(sum);
  }
    
    

  
}
void payment(int sum)
{
  
  int amt;
  
    printf("\nLOADING..");
    sleep(2);
    printf("..");
    sleep(2);
    printf("..\n");
    sleep(2);
    printf("Enter the amount\n");
    scanf("%d",&amt);
    if(amt==sum)
    {
    printf(" PAYMENT SUCESSFUL\n");
    shipping();
    }
    else if(amt>sum)
    {
    
    printf(" PAYMENT SUCCESSFULL\n");
    printf("the extra amount paid is %d will be returned to u\n",amt-sum);
    shipping();
  }
    else
    {
    
    printf("NOT SUCESSFUL");
    payment(sum);
  }
  }

void shipping()
{
  //struct address a;
  FILE *fp;
//  fprintf(fp,"\n\t\t\tDETAILS\n");
  fp=fopen("hotel.txt","a");
  fprintf(fp,"\n\t\t\tDETAILS\n");
  fputs("\nNAME:  ",fp);
  
  
  
  printf("\nEnter your name\n");
  scanf("%s",b.name);
 fprintf(fp,"%s",b.name);
  printf("Enter your House number\n");
  scanf("%d-%d/%d",&b.address[0],&b.address[1],&b.address[2]);
  fputs("\nH.NO:   ",fp);
  fprintf(fp,"%d-%d/%d\n",b.address[0],b.address[1],b.address[2]);
  printf("Enter your locality\n");
  fputs("\nLOCALITY:   ",fp);
  
  scanf("%s",b.locality);
  fprintf(fp,"%s",b.locality);
  printf("Enter your phone no");
  scanf("%d",&b.value);
  fprintf(fp,"%d",b.value);
 // printf("%d",b.value);
  fclose(fp);  
}