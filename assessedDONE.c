
#include <stdio.h>
#include <stdlib.h>
 
 int main()
{
  char suit[3];

  suit[0]='H';
  suit[1]='C';
  suit[2]='D';
  suit[3]='S';

  struct card 
  {
   char suit;
   int value;
  };

   struct card *deck=(struct card*)malloc(sizeof(struct card)*52);
   
   struct card *d=deck;

   int i=0;

    for (int sui=0; sui<4; sui++)
     for (int val=0; val<13; val++)
     { 
      d[i].suit=suit[sui];
      d[i].value=val+1;
      i++;
     }  
    
     for (int i=0; i<52; i++)
      {
       printf("%d",d[i].value);  
       printf("%c  ", d[i].suit);       
      }    
      
      printf("\n\n");
     
      int position;

      printf("Give a number between 1 and 52 (1 and 52 included), and I will show you the card at that position.\n");
      scanf("%d",&position);
      printf("The card at position %d is %d%c.\n",position,d[position-1].value,d[position-1].suit);
     
      printf("\n\n");

      printf("Give a number between 1 and 52 (1 and 52 included),which will represent the position of a card in the deck, and I will show you the card that is positiond before the position you gave and the card after the position you gave.\n");
      scanf("%d",&position);
      
      if (position==1)
      {
       printf("The card in the position before %d is %d%c.\n",position,d[51].value,d[51].suit);
       printf("The card in the position after %d is %d%c.\n",position,d[position].value,d[position].suit);
      } 

      if (position==52)
      {
       printf("The card in the position before %d is %d%c.\n",position,d[position-2].value,d[position-2].suit);
       printf("The card in the position after %d is %d%c.\n",position,d[0].value,d[0].suit);
      }

      if ((position>1) && (position<52))
       { 
        printf("The card in the position before %d is %d%c.\n",position,d[position-2].value,d[position-2].suit);
       printf("The card in the position after %d is %d%c.\n",position,d[position].value,d[position].suit);
       }

       struct card *deck2=(struct card*)malloc(sizeof(struct card)*52);
   
       struct card *d2=deck2;

        printf("\n\n");

       suit[0]='C';
       suit[1]='H';
       suit[2]='S';
       suit[3]='D';

       d2[0].value=1;
       d2[0].suit=suit[0];

       int j=1; 
       int s=1;

       for (i=1; i<52; i++)
       {     
        j=j+3;

        d2[i].value=j;
        d2[i].suit=suit[s];

        s++;

        if (s>3)
          s=s-4;
       
         if (j>10)
          j=j-13;
       }

       printf("Give a number between 1 and 52 (1 and 52 included), and I will show you the card at that position.\n");

      scanf("%d",&position);

      printf("The card at position %d is %d%c.\n",position,d2[position-1].value,d2[position-1].suit);

     printf("\n\n");

     struct card bottom;
         

     printf("Cut the deck and places the top stack underneath the bottom stack. Give the card at the bottom of the new deck and I will tell you the card which is now on top!!\n\n"); 

     printf("Give the value of the card.\n");
     scanf("%d", &bottom.value);
     
     
     printf("Give the suite of the card.\n");
     scanf(" %c", &bottom.suit);

     printf("\n\n");

      int oldposition=100;

   while (oldposition==100)
     for (i=0; i<52; i++)
      if ((d2[i].value==bottom.value) && (d2[i].suit==bottom.suit))
         oldposition=i;

    if (oldposition==51)
     printf("The card at the top of the deck is %d%c.\n",d2[0].value,d2[0].suit);

    if (oldposition>0)
     printf("The card at the top of the deck is %d%c.\n",d2[oldposition+1].value,d2[oldposition+1].suit);

    printf("\n\n");

   struct card *deck3=(struct card*)malloc(sizeof(struct card)*104);
   
   struct card *d3=deck3;

       d3[0].value=d2[0].value;
       d3[0].suit=d2[0].suit;

       d3[1].value=d[0].value;
       d3[1].suit=d[0].suit;
     
     int je=1;

     for (i=2; i<104; i++)
      {     
       d3[i].value=d2[je].value;
       d3[i].suit=d2[je].suit;

       i++;

       d3[i].value=d[je].value;
       d3[i].suit=d[je].suit;

       je++;
      } 

    printf("Give a number between 1 and 104 (1 and 104 included), and I will show you the card at that position.\n");

      scanf("%d",&position);

      printf("\n\n");

      printf("The card at position %d is %d%c.\n",position,d3[position-1].value,d3[position-1].suit);

    

}
   
