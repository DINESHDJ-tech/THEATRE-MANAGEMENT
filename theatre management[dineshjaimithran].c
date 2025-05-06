//location
//theater
//movies
//date
//timings
//c.seatss
//amount
//snacks
//bill
//exit
//ratings
//#include <stdio.h>
//#include <wchar.h>
//#include <locale.h>
//
//int main() {
//    // Set the locale to support UTF-8
//    setlocale(LC_ALL, "");
//
//    // Top-left corner
//    wprintf(L"Top-left: ╭\n");
//
//    // Top-right corner
//    wprintf(L"Top-right: ╮\n");
//
//    // Bottom-left corner
//    wprintf(L"Bottom-left: ╰\n");
//
//    // Bottom-right corner
//    wprintf(L"Bottom-right: ╯\n");
//
//    return 0;
//}



#include <wchar.h>
#include <locale.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Cinema{
    char location[50];
    char theatre[50];
    char movies[50];
    char date[50];
    char timings[50];
    char seats[10000];
    int amount;
    char snacks[50];

}c;

const char locations[5][500]={ "SALEM","KOVAI","CHENNAI","MADURAI","BANGLORE"};

const char s_theatres[3][50]={"ARRS","ROX","ASCARS"};
const char k_theatres[3][50]={"BROADWAY","Kauvery","FUNMALL"};
const char c_theatres[3][50]={"Sathyam","Rohini","INOX"};
const char m_theatres[3][50]={"VETRI","GOPURAM","INOX"};
const char b_theatres[3][50]={"URVASHI","PVR ORION","MUKUNDAN"};

const char movies[7][50]={" Sachein  ","   GBU    ","   Retro   ","    U     ","   U/A    ",
                            "    U/A    "};

const char date[3][50]={__DATE__,__DATE__,__DATE__};

const char timings[5][50]={"8.30 AM","12.00 PM","4.00 PM","7.00 PM","10.00 PM"};

const char seats[1000][1000]={"\n","╭---------------------------------------------------------------╮\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t"," ","  ","1","2","3","   ","4","5","6","7","   ","8","9","10","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","A","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","B","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","C","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","D","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","E","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","F","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","G","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","H","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t","I","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t","J","  ","□","□","□","   ","□","□","□","□","   ","□","□","□","\t","|\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "|\t\t╰------------------------------------╯\t\t  |\n",
                           "|\t\t\t\t\t\t\t\t  |\n",
                           "╰---------------------------------------------------------------╯\n"};

//const char c.seatss[1000][1000]={"\n","□ a1","a2","a3","   ","a4","a5","a6","a7","   ","a8","a9","a10","\n",
//                           "b1","b2","b3","   ","b4"b5","b6","b7","   ","b8","b9","b10","\n",
//                           "c1","c2","c3","   ","c4","c5","c6","c7","   ","c8","c9","c10","\n",};

const char amount[3][100]={"First class = 200 ","Second class = 180 ","Front Row = 60"};

const char snacks[3][100]={"| Popcorn 100 |","  | Coca cola 40 |","| Puffs 50 |"};

int main(){
    system("chcp 65001");
    char location[500];
    printf("==============================\t\t\tBOOK MY SHOW\t\t\t==============================\t\n");
    printf("            ___________                                                    ___________       \n");
    printf("       _____|_________|_____                                          _____|_________|_____\n");
    printf("      |                     |                                        |                     |     \n");
    printf("      |     ________        |                                        |     ________        |     \n");
    printf("      |    |  ____  |       |                                        |    |  ____  |       |          \n");
    printf("      |    | |____| |       |=====\\=                          =\\=====|    | |____| |       |    \n");
    printf("      |    |________|       |=====|                            |=====|    |________|       |     \n");
    printf("      |                     |=====/=                          =/=====|                     |     \n");
    printf("      |_____________________|                                        |_____________________|          \n");
    printf("              ||   ||                                                        ||   ||                    \n");
    printf("              ||   ||                                                        ||   ||                    \n");
    printf("             _||_ _||_                                                      _||_ _||_                  \n");
    printf("******************************************\tSELECT YOUR LOCATION\t******************************************\n\n\n");
    printf("╭-------╮\t╭-------╮\t╭---------╮\t╭---------╮\t╭----------╮\n");

    for(int i=0;i<5;i++){
        printf("| %s | \t",locations[i]);
    }
   printf("\n╰-------╯\t╰-------╯\t╰---------╯\t╰---------╯\t╰----------╯\n");

    printf("\nPLEASE ENTER YOUR LOCATION:\t");
    scanf("%s", c.location);


        printf("\n*********************SELECT YOUR THEATER*********************\n\n");
        if(strcasecmp(c.location,"salem")==0){
        printf("╭-------╮\t╭------╮\t╭---------╮\n");
                for(int i=0;i<3;i++){
                    printf("| %s  |\t",s_theatres[i]);
                }
                 printf("\n╰-------╯\t╰------╯\t╰---------╯\n");
           }else if(strcmp(c.location,"kovai")==0){
               printf("╭----------╮\t╭---------╮\t╭---------╮\n");
                for(int i=0;i<3;i++){
                    printf("| %s |\t",k_theatres[i]);
                }
                 printf("\n╰----------╯\t╰---------╯\t╰---------╯\n");


           }else if(strcmp(c.location,"chennai")==0){
                printf("╭----------╮\t╭---------╮\t╭-------╮\n");
                for(int i=0;i<3;i++){
                    printf("| %s  |\t",c_theatres[i]);
                }
                 printf("\n╰----------╯\t╰---------╯\t╰-------╯\n");
           }else if(strcmp(c.location,"madurai")==0){
                printf("╭--------╮\t╭----------╮\t╭-------╮\n");
               for(int i=0;i<3;i++){
                    printf("| %s  |\t",m_theatres[i]);
           }
            printf("\n╰--------╯\t╰----------╯\t╰-------╯\n");
           }else if(strcmp(c.location,"banglore")==0){
                printf("╭----------╮\t╭------------╮\t╭-----------╮\n");
               for(int i=0;i<3;i++){
                    printf("| %s  |\t",b_theatres[i]);
           }
            printf("\n╰----------╯\t╰------------╯\t╰-----------╯\n");
           }

           printf("\nENTER THE THEATER NAME:\t\t");
           scanf("%s", c.theatre);

           printf("\n**********SELECT YOUR MOVIE**********\n\n");

    printf("╭------------╮\t╭------------╮\t╭-------------╮\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");

    for(int i=0;i<3;i++){
        printf("| %s | \t",movies[i]);
    }
    printf("\n");
    for(int i=3;i<6;i++){
        printf("| %s | \t",movies[i]);
    }

    printf("\n|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    printf("|\t     |\t|\t     |\t|\t      |\n");
    //printf("|  \t  |\t|  \t  |\t|  \t  |\n");
    printf("╰------------╯\t╰------------╯\t╰-------------╯\n\n\n");
    printf("ENTER THE MOVIE NAME:\t");
    scanf("%s", c.movies);
    printf("\n\n");


        printf("**********SELECT THE DATE**********\n\n");
        printf("╭-------------╮\t╭-------------╮\t╭-------------╮\n");
        for(int i=0;i<3;i++){
        printf("| %s |\t",date[i]);
    }
    printf("\n╰-------------╯\t╰-------------╯\t╰-------------╯");
    printf("\n\nENTER THE DATE (without space):\t");
    scanf("%s",&c.date);


            printf("\n\n**********\tSELECT TIMING\t**********:\n\n");
            printf("╭---------╮\t╭----------╮\t╭---------╮\t╭---------╮\t╭----------╮\n");
        for(int i=0;i<5;i++){
        printf("| %s |\t",timings[i]);
    }   printf("\n╰---------╯\t╰----------╯\t╰---------╯\t╰---------╯\t╰----------╯");

    printf("\n\nENTER THE TIMING:\t");
    scanf("%s",&c.timings);
    printf("\n\n\n\n");


    printf("--------------------\tSELECT YOUR SEATS\t--------------------\n");
        for(int i=0;i<198;i++){
        printf("%s  ", seats[i]);
    }


while   (getchar() != '\n');
printf("\n\nENTER THE NUMBER OF seats:\t");

    fgets(c.seats, sizeof(c.seats), stdin);



        printf("\n**********\tSELECT THE AMOUNT\t**********\n\n");
        printf("╭-------------------╮\t╭--------------------╮\t╭---------------╮\n");
        for(int i=0;i<3;i++){
        printf("|%s |\t",amount[i]);
    }
    printf("\n╰-------------------╯\t╰--------------------╯\t╰---------------╯");
    printf("\n\nENTER THE TICKET AMOUNT:\t");
    scanf("%d",&c.amount);


        printf("\n\n***************\tSELECT SNACK\t***************\n\n");
        printf("╭-------------╮\t  ╭--------------╮\t╭----------╮\n");
        for(int i=0;i<3;i++){
        printf("%s\t",snacks[i]);
    }   printf("\n╰-------------╯\t  ╰--------------╯\t╰----------╯");

    printf("\nENTER THE SNACK NAME:\t\t");
    scanf("%s",&c.snacks);
    int snacks_amount=0;
    if(strcmp(c.snacks,"popcorn")==0){
        snacks_amount=100;
    }else if(strcmp(c.snacks,"coca cola")==0){
        snacks_amount=40;
    }else if(strcmp(c.snacks,"puffs")==0){
        snacks_amount=50;
    }
    printf("\n╭------------------------------------------------╮\n");
    printf("\n Book My Show\t\t\t\t%s\n",c.theatre);
    printf("\t\t\t\t\t%s\n",c.location);
    printf("-------------------------------------------------\n");
    printf(" \n");
    printf(" Booking ID: 81297 \t\t    %s\n",c.date);
    printf(" Paytm Order ID: 19273456 \t\t %s\n",c.timings);
    printf(" \n");
    printf(" %s\n",c.movies);
    printf(" %s",c.seats);
    printf(" \n");
    printf("\n--------------------------------------------------\n");
    int ticket_count=strlen(c.seats)/3;
    int ticket_amount=c.amount*ticket_count;
    float cgst =(float)0.09*ticket_amount;
    float sgst =(float)0.09*ticket_amount;
    float total_amount= ticket_amount+cgst+sgst+snacks_amount;

    printf("\tTicket Amount : %d\n",ticket_amount);
    printf(" \tSnacks        : %d\n",snacks_amount);
    printf(" \tcgst          : %f\n",cgst);
    printf(" \tsgst          : %f\n",sgst);
    printf(" \n");
    printf(" \tTotal Amount  : %f\n",total_amount);


    printf( "---------------------------------------------------\n\n");
    printf("        ****\tIMPORTANT DISCRIPTION\t****\n\n");
printf("    Tickets & food once ordered cannot be exchanged,\n    cancelled or refunded.\n");
printf("    Children aged 3 years and above will require a \n    separate ticket.\n");
printf("    Kindly deposit at the baggage counter of mall.\n");
printf("    Please check the suitability of the movie as\n    per the Censor Board rating.\n\n");
printf("    U: Unrestricted Public Exhibition throughout\n    India, suitable for all age groups\n");
printf("     A: Viewing restricted to adults above 18\n    years only\n");
printf("     U/A: Unrestricted public exhibition with\n    parental guidance for children below age 12\n");





FILE *ptr;

ptr=fopen("Movie_ticket_bill.txt","w");

    fprintf(ptr,"\nBook My Show\t\t\t\t%s\n",c.theatre);
    fprintf(ptr,"\t\t\t\t\t%s\n",c.location);
    fprintf(ptr,"------------------------------------------------\n\n");
    fprintf(ptr,"Booking ID: 81297 \t\t    %s\n",c.date);
    fprintf(ptr,"Paytm Order ID: 19273456 \t\t %s\n\n",c.timings);
    fprintf(ptr,"%s\n",c.movies);
    fprintf(ptr,"%s\n\n",c.seats);


        fprintf(ptr,"\tTicket Amount : %d\n",ticket_amount);
    fprintf(ptr,"\tSnacks        : %d\n",snacks_amount);
     fprintf(ptr,"\tsgst          : %f\n\n",sgst);
    fprintf(ptr,"\tTotal Amount  : %f\n\n",total_amount);

    fprintf(ptr,"------------------------------------------------\n\n");
    fprintf(ptr,"Important Notes:\n\n");
fprintf(ptr,"Tickets & food once ordered cannot be exchanged,\ncancelled or refunded.\n");
fprintf(ptr,"Children aged 3 years and above will require a \nseparate ticket.\n");
fprintf(ptr,"Kindly deposit at the baggage counter of mall.\n");
fprintf(ptr,"Please check the suitability of the movie as\n per the Censor Board rating.\n\n");
fprintf(ptr," U: Unrestricted Public Exhibition throughout\n India, suitable for all age groups\n");
fprintf(ptr," A: Viewing restricted to adults above 18\n years only\n");
fprintf(ptr," U/A: Unrestricted public exhibition with\n parental guidance for children below age 12\n");


fclose(ptr);
printf("Bill Generated Success fully\n\n\n\n");}


