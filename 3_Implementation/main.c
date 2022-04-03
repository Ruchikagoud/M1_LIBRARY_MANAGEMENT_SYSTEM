#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library
	{
   char book_name[50];
   char author[50];
   int no_of_pages;
   float price;
};
int main()
	{
   struct library lib[100];
   char book_name[30];
   int i,k, keep_count;
   i=k=keep_count = 0;
   while(k!=6){
      printf("\n\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. no of books in the library\n");
      printf("4. Exit");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&k);
      switch (k){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].book_name);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].no_of_pages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keep_count++;
            i++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keep_count; i++){
               printf ("book name = %s\n",lib[i].book_name);
               printf ("\t author name = %s\n",lib[i].author);
               printf ("\t pages = %d\n",lib[i].no_of_pages);
               printf ("\t price = %f\n",lib[i].price);
            }
            break;
         case 3:
            printf("\n No of books in library : %d", keep_count);
            break;
         case 4:
            exit (0);
      }
   }
   return 0;
}