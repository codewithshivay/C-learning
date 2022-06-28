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
{   int choice,suggest,sum=0,total;
    printf("Welcome to Restaurant. Please Order Something...");
    select_choice();
    list_of_vegitables();
    scanf("%d", &choice);
    list_of_Rotis();
    scanf("%d",&suggest);
    switch(choice){
     case 1:
        sum = sum + 60;
        break;
     case 2:
        sum = sum + 70;
        break;
     case 3:
        sum = sum + 100;
     case 4:
        sum = sum + 120;
    default:
       printf("Wrong choice, Please select right one.");
    }
    printf("%d total", sum);
}


