#include <stdio.h>
#include <stdlib.h>

/* int main()            apla pragmata gia print kai characters (STRING) + INT VARIABLES
{
    int num,num_1;
    char num_name [] ="hello world";
    num = 1;
    num_1 = 12;
    printf(" the number is :%d%d%s",num,num_1,num_name);
    return 0;
} */


/*VARIABLE TYPES
int a = 5;
float b = 3.14;
char c[] = 'A';
char c = 'A';
Double d = 3.14159;

DONT FORGET TO USE %d for int, %f for float, %c/s for char, %lf for double
*/




/*

askhsh 1 prin test

int main()
{
    int epilogi;
    float num1, num2, apotelesma;

    printf("1.Prossthese\n");
    printf("2.Afairesi\n");
    printf("3.Pollaplasiasmos\n");
    printf("4.Diairesi\n");
    printf("Epiloge: ");
    scanf("%d", &epilogi);

    if (epilogi == 1) {
        printf("Dwse arithmo 1: ");
        scanf("%f", &num1);
        printf("Dwse arithmo 2: ");
        scanf("%f", &num2);
        apotelesma = num1 + num2;
        printf("Apotelesma: %.2f\n", apotelesma);
    }
    else if (epilogi == 2) {
        printf("Dwse arithmo 1: ");
        scanf("%f", &num1);
        printf("Dwse arithmo 2: ");
        scanf("%f", &num2);
        apotelesma = num1 - num2;
        printf("Apotelesma: %.2f\n", apotelesma);
    }
    else if (epilogi == 3) {
        printf("Dwse arithmo 1: ");
        scanf("%f", &num1);
        printf("Dwse arithmo 2: ");
        scanf("%f", &num2);
        apotelesma = num1 * num2;
        printf("Apotelesma: %.2f\n", apotelesma);
    }
    else if (epilogi == 4) {
        printf("Dwse arithmo 1: ");
        scanf("%f", &num1);
        printf("Dwse arithmo 2: ");
        scanf("%f", &num2);
        if (num2 == 0)
            printf("Adynati diairesi me to miden!\n");
        else {
            apotelesma = num1 / num2;
            printf("Apotelesma: %.2f\n", apotelesma);
        }
    }
    else {
        printf("Lathos epilogi!\n");
    }

    return 0;
}

*/


/* askhsh 2 prin test 

#include <stdio.h>

int main(){
    float arxikh, ekpt, telikh;
    int apadish;

    printf("arxikh timh?\n");
    scanf("%f", &arxikh);

    printf("exete kouponi ekptoshs?\n");
    scanf("%d", &apadish);

    if (apadish==1){
        printf("poio einai to pososto ekptoshs?\n");
        scanf("%f", &ekpt);

        if (ekpt >= 0 && ekpt <= 100){
            telikh = arxikh * (1 - ekpt/100);
            printf("telikh timh: %.2f", telikh);
        } else {
            printf("lathos pososto ekptoshs");
        }
    }
    else if (apadish==2){
        telikh = arxikh;
        printf("telikh timh: %.2f", telikh);
    }
    else {
        printf("lathos apadish");
    }

    return 0;


}*/


/* askhsh 3 prin test */


/* o xrhsths dinei ena akeraio n. Typwse:

diaireitai me 3 kai 5 an diaireitai kai me ta dyo
diaireitai mono me 3
diaireitai mono me 5
den diaireitai me kanena alliws 



#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if ((n%3==0)&&(n%5==0)){
        printf("diaireitai me 3 kai 5");
    }
    else if (n%3==0) {
        printf("diaireitai mono me 3");
    }
    else if (n%5==0) {
        printf("diaireitai mono me 5");
    }else {
        printf("den diaireitai me kanena");
    }
        
    return 0;
    
}*/










/*

int main(){


    int x;

    char y;

    scanf("%d",&x);

    switch (x)
    {
    case 1:
        printf("x=1");
        break;
    case 12:
        printf("x=12");
        break;
    case 102:
        printf("x=102");
        break;
    case 203:
        printf("x=20");
        break;
    default:
        break;
    }

    




    scanf("%c",&y);

    switch (y)
    {
    case 'a':
        printf("x=a");
        break;
    case 'b':
        printf("y=b");
        break;
    case 'v':
        printf("y=b");
        break;
    case 'n':
        printf("y=n");
        break;
    default:
        break;
    }

    return 0;
}

*/





/*

int main() {

    char c;
    c = 'i';
    printf("%c",c);
    return 0;

}
*/ 






/*int main() {
    
    int i = 1, sum = 0;

    while (i <= 100) {
        if (i % 2 != 0) {
            printf("%d\n", i);
            sum += i;
        }
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;

}*/



/*int main() {
    int n, x, sum = 0;

    printf("Posous arithmous? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Dose arithmo: ");
        scanf("%d", &x);
        sum += x;
    }

    printf("Sum = %d\n", sum);
    return 0;
}*/



//tropou me tous opoiou xrisimopoioume gia na kanoume increment to i.
/*i = i + 1;
i++;
i += 1;
*/








/*int main(){

    int x;
    char y;



    scanf("%c",&y);

    switch (y)
    {
    case 'a':
        printf("y=a");
        break;
    case 'b':
        printf("y=b");
        break;
    case 'v':
        printf("y=v");
        break;
    case 'n':
        printf("y=n");
        break;
    }
    return 0;
}*/



























/*-------------LOOPS-------------*/




// otan kseris poses fores thes na epanalaveis,xrisimopoieis for loop (px:pas gym kai kaneis 10 pushups)


/*int main() {

    //int i; enalaktikh gia arxikopoihsh ths metablhths i



 for (int i = 0; i < 5; i++) { 
    printf("%d\n", i);
 }



  return 0;


}*/






// otan den kseris posses fores, apla les “oso isxyei auto kane kati”.tote xrisimopoieis while loop (px:tros soublakia oso pinas)


/*int main() {

  int i;
  i=0;

  while (i < 5) {
    printf("%d\n", i);
    i++;
   }

 return 0;

}*/


// do while loop, kanei kati kai meta elegxei an isxyei h sinthiki.ara trexei toulaxiston 1 fora.(px:otan anoigeis to kinito sou kai pas na to jeklidoseis prota bazeis to pin kai epeita checkarei to systhma an einai sosto to pin h oxi)



/*int main() {
 int i;
 i=0;

 do {
    printf("%d\n", i);
    i++;
 } while (i < 5);//mexris_otou

 return 0;
}*/










//paradeigma 2:


/*int main() {
    int N, i;
    printf("Dose arithmo gia antistrofi metrisi: ");
    scanf("%d", &N);


    for (i = N; i >= 1; i--) {
        printf("%d\n", i);
    }
    printf("Ektoxeusi!\n");

    return 0;
}*/








/*int main() {
    int N, i;
    printf("Dose arithmo gia antistrofi metrisi: ");
    scanf("%d", &N);

    i = N;                  // 1. Archi ekso
    while (i >= 1) {        // 2. Elenchos stin archi
        printf("%d\n", i);
        i--;                // 3. Meiosi sto telos
    }
    printf("Ektoxeusi!\n");

    return 0;
}*/





/*int main() {
    int N, i;
    printf("Dose arithmo gia antistrofi metrisi: ");
    scanf("%d", &N);

    i = N;                  // 1. Archi ekso
    do {
        printf("%d\n", i);
        i--;                // 2. Meiosi mesa
    } while (i >= 1);       // 3. Elenchos sto telos (me ;)
    printf("Ektoxeusi!\n");

    return 0;
}*/























/*int main() {
    int N, i;
    int sum = 0; // 1. O adeios koumparas

    printf("Dose arithmo: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        sum = sum + i; // 2. Richnoume kathe arithmo mesa
    }

    // 3. Typwnoume to teliko apotelesma EXW apo to loop
    printf("To synoliko athroisma einai: %d\n", sum);

    return 0;
}*/




















//---------1D ARRAY--------//



/*int main() {
    int b[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}*/


/*int main() {


   int b[5] = {10, 20, 30, 40, 50},i;
  

  for (i = 0; i < 5; i++) {
    scanf("%d", &b[i]);
  }


  for (i = 0; i < 5; i++) {
    printf("%d ", b[i]);
  }
    

   return 0;
}*/



/*int main() {
 char c[5];
 int i;

 for (i = 0; i < 5; i++) {
    scanf(" %c", &c[i]);   // note the space before %c
 }

 for (i = 0; i < 5; i++) {
    printf("%c ", c[i]);
 }

   return 0;
}*/



/*example:

foititis:   0    1    2    3    4
          //[ 7 ] [ 9 ] [ 5 ] [10] [ 8 ]





int main() {
    int grade[5];
    int i, sum = 0;
    float mesos_oros;   

    // 1. vazoume vathmo gia kathe foititi
    for (i = 0; i < 5; i++) {
        printf("Vathmos foititi %d: ", i);
        scanf("%d", &grade[i]);
    }

    // 2. tous ektypwnoume kai prosthetoume
    for (i = 0; i < 5; i++) {
        printf("grade[%d] = %d\n", i, grade[i]);
        sum = sum + grade[i];
    }

    mesos_oros = sum / 5.0; 

    printf("Mesos oros: %.1f\n", mesos_oros);
    return 0;


}*/






























//---------2D ARRAY--------//




/*int main() {

    int num[][3] = {{1, 2, 3,}, //rows einai ta horizontal kai columns einai ta vertical,to proto [] einai ta rows kai to deutero [] einai ta columns
                   {4, 5, 6}, 
                   {7, 8, 9}};

   //printf("%d ", num[0][0]);//prints 1

   //with loop

   for (int i = 0; i < 3; i++) { //loop gia ta rows
        for (int j = 0; j < 3; j++) { //loop gia ta columns
            printf("%d ", num[i][j]); //prints kathe stoixeio tou array
        }
        printf("\n"); //prints new line meta apo kathe row
    }

   return 0;
}*/


//------with character variable----//


/*int main() {

    char x[][3] = {{'a', 'b', 'c',}, //rows einai ta horizontal kai columns einai ta vertical,to proto [] einai ta rows kai to deutero [] einai ta columns
                   {'d', 'e', 'f'}, 
                   {'g', 'h', 'i'}};

   //printf("%d ", x[0][0]);//prints a

   //with loop

   for (int i = 0; i < 3; i++) { //loop gia ta rows
        for (int j = 0; j < 3; j++) { //loop gia ta columns
            printf("%c ", x[i][j]); //prints kathe stoixeio tou array
        }
        printf("\n"); //prints new line meta apo kathe row
    }
    
   return 0;
}*/


