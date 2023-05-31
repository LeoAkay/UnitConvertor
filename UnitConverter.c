#include <stdio.h>

int main()
{
    char category;
    int tempCh,currencyCh,massCh;
    int f,c,UE,UJ,UR;
    int o,g;
    int FahtoCel,CeltoFah;
    float USDtoEUR,USDtoJPY,USDtoRMB;
    float OunceToPound,GramToPound;
    printf("\t\tWelcome to Unit Converter\nHere is a list of conversions to choose from: \nTemperature(T),Currency(C),Mass(M)\nPlease enter the letter you want to convert.\n");
    scanf("%c",&category);
    if(category=='T'){printf("Welcome to Temperature Converter!\nHere is a list of conversions to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius.\nEnter 2 for Celsius to Fahrenheit.\n");
        scanf("%d",&tempCh);
        if(tempCh==1){
            printf("Please enter the Fahrenheit degree: ");
            scanf("%d",&f);
            FahtoCel=((f-32)*(95.0/9.0));
            printf("Celsius:%d\n",FahtoCel);
        }
        else if(tempCh==2){
            printf("Please enter the  Celsius degree: ");
            scanf("%d",&c);
            CeltoFah=((9.0/5.0)*c+32);
            printf("Fahrenheit:%d\n",CeltoFah);
        }
        else
            printf("Please enter a valid choice!\n");
    }
    else if(category=='C'){
        printf("Welcome to Currency Converter!\nHere is a list of conversations to choose from: \n");
        printf("Enter 1 for USD to EUR\nEnter 2 for USD to JPY\nEnter 3 for USD to RMB\n");
        scanf("%d",&currencyCh);
        if(currencyCh==1){
            printf("Please enter the USD amount: ");
            scanf("%d",&UE);
            USDtoEUR=UE*0.87;
            printf("Euro:%.2f\n",USDtoEUR);
        }
        else if(currencyCh==2){
            printf("Please enter the USD amount: ");
            scanf("%d",&UJ);
            USDtoJPY=UJ*111.09;
            printf("JPY:.2f\n",USDtoJPY);
        }
        else if(currencyCh==3){
            printf("Please enter the USD amount: ");
            scanf("%d",&UR);
            USDtoRMB=UR*6.82;
            printf("RMB:%.2f\n",USDtoRMB);
        }
        else
            printf("Please enter a valid choice!\n");

    }
    else if(category=='M'){
        printf("Welcome to Mass Convertor!\n");
        printf("Here is a list of conversions to choose from: \n Enter 1 for ounces to pounds.\nEnter 2 for gram to pounds.\n");
        scanf("%d",&massCh);
        if(massCh==1){
            printf("Please enter the ounce amount: ");
            scanf("%d",&o);
            OunceToPound=o*0.0625;
            printf("Pounds:%.2f\n",OunceToPound);
        }else if(massCh==2){
            printf("Please enter the gram amount: ");
            scanf("%d",&g);
            GramToPound=g*0.00220462;
            printf("Pound:%.2f\n",GramToPound);
        }
        else
            printf("Please enter a valid choice!\n");
    }
    return 0;
}