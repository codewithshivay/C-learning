new_line()
{
 printf("\n");
 printf("------------------------------------------------------------------------------");
 printf("\n");
 }


 select_choice(){
  new_line();
  printf("Please Select any choice from below list");
  new_line();
 }

 list_of_vegitables(){
  new_line();
  printf("1. Bhindi         -------->>   Price:  60");
  new_line();
  printf("2. Aalu           -------->>   Price:  70");
  new_line();
  printf("3. panir          -------->>   Price:  100");
  new_line();
  printf("4. panir masala   -------->>   Price:  120");
  new_line();
 }
 int quantity(){
 int quty;
 new_line();
 printf("Enter quantity");
 new_line();
 scanf("%d",&quty);
 return quty;
 }

 list_of_Rotis(){
  new_line();
 printf("1. tava Roti     -------->>   price 7");
  new_line();
 printf("2. Tandoori Roti -------->>   price 10");
  new_line();
 printf("3. Maaka Roti    -------->>   price 15");
  new_line();
 printf("4. Paratha       -------->>   price 20");
  new_line();
 printf("5. Puran Poli    -------->>   price 30");
 new_line();
 }
int main()
{   int choice,suggest,sum=0,qunt;
    char roti[70];
    printf("Welcome to Restaurant. Please Order Something...");
    select_choice();
    list_of_vegitables();
    scanf("%d", &choice);
    switch(choice){
     case 1:
        sum = sum + 60;
        break;
     case 2:
        sum = sum + 70;
        break;
     case 3:
        sum = sum + 100;
        break;
     case 4:
        sum = sum + 120;
        break;
    default:
       printf("Wrong choice, Please select right one.");
    }
    select_choice();
    list_of_Rotis();
    scanf("%d",&suggest);
    qunt = quantity();
    new_line();
    switch(suggest){
     case 1:
        sum = sum + 7*qunt;
        break;
     case 2:
        sum = sum + 10*qunt;
        break;
     case 3:
        sum = sum + 15*qunt;
        break;
     case 4:
        sum = sum + 20*qunt;
        break;
    case 5:
        sum = sum + 30*qunt;
        break;
    default:
       printf("Wrong choice, Please select right one.");
    }
    printf("Your bill, Sir");
    new_line();
    printf("%s * %d \n",roti,qunt);
    printf("%d total", sum);
}


