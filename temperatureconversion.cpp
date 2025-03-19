/*

 4. Temperature Converter
Convert between Celsius, Fahrenheit, and Kelvin.
Use functions for each conversion.
Allow the user to choose the conversion type. 

*/

#include<cstdio>
#include<iostream>
#include<string>
#include<cmath>


void Terminal(std::string userName);
void errorMessage();
void thanksGivingMessage(std::string userName);
void CelciusAndFahrenheit(float value1, int option3,float result);
void KelvinsAndFahrenheit(float value1, int option3,float result);
void celciusAndKelvins(float value1, int option3,float result);

             int main(){
        std::string userName;
        int option, option2,option3;
        float value1,result;
        do
        {
            system("cls");
      Terminal(userName);
          std::cin>>option;
        switch (option)
        {
        case 1:
            CelciusAndFahrenheit( value1,  option3, result);
            thanksGivingMessage(userName);
              std::cin>>option2;
              system("cls");
            break;
        case 2:
            KelvinsAndFahrenheit(value1,  option3, result);
            thanksGivingMessage(userName);
              std::cin>>option2;
              system("cls");
            break;
        case 3:
            celciusAndKelvins(value1,  option3, result);
            thanksGivingMessage(userName);
               std::cin>>option2;
               system("cls");
            break;
        default:
            errorMessage();
               std::cin>>option2;
               system("cls");
            break;
        }
        } while (option2==1);
    if (option2==2)
    {
        printf("Thank You Have A Nice Day\n");
    }
      else{
        printf("INVALID RESPONSE\n");
      }
        
        system("pause>NULL");     
     }
     void Terminal(std::string userName){
     printf(" Enter your username:");
         getline(std::cin, userName);
        system("cls");
     printf("\nHello %s. Let's Do Some Temperature Conversions\n\n",userName.c_str());
     printf("Select The Type Of Conversion\n___________________\n\n1:Celsius And Fahrenheit\n2:Fahrenheit And Kelvin\n3:Kelvin And Celcius\n___________________\nOption:");
    }
     void errorMessage(){
        std::cout<<"The Response You've Entered Doesn't Align With The Principles Of The Program\nDo You Want To Restart?\n___________________\n1:Yes\n2:No\n___________________\nOption:";
    }
     void CelciusAndFahrenheit(float value1, int option3,float result){
        system("cls");
        printf("You've Selected The Celsius And Farhenheit Conversion Option.\n");
        printf("Select Operation\n___________________\n\n1:Celsius To Fahrenheit\n2:Fahrenheit To Celcius\n___________________\nOption:");
          std::cin>>option3;
          system("cls");
          switch (option3)
          {
          case 1:
            printf("You're Converting From Celcius To Fahrenheit\nEnter The Value In(C):");
               std::cin>>value1;
                result=(((value1*9)/5)+32);
                printf(" Given Value Is %.2fC \n\n CONVERTED TO FAHRENHEIT(F)\n   The Value Is %.2fF \n\n",value1,result);
            break;
          case 2:
          printf("You're Converting From Fahrenheit To Celcius\nEnter The Value In(F):");
               std::cin>>value1;
                result=(((value1-32)*5)/9);
                printf(" Given Value Is %.2fF \n\n CONVERTED TO CELCIUS(C)\n The   Value Is %.2fF \n\n",value1,result);
            break;
          default:
          printf("Invalid");
            break;
          }
     }
     void KelvinsAndFahrenheit(float value1, int option3,float result){
        system("cls");
        printf("You've Selected The Farhenheit And Kelvin Conversion Option.\n");
        printf("Select Operation\n___________________\n\n1:Kelvin To Fahrenheit\n2:Fahrenheit To Kelvin\n___________________\nOption:");
          std::cin>>option3;
          system("cls");
          switch (option3)
          {
          case 1:
            printf("You're Converting From Kelvin To Fahrenheit\nEnter The Value In(K):");
               std::cin>>value1;
                result=((((value1-273.15)*9)/5)+32);
                printf(" Given Value Is %.2fK \n\n CONVERTED TO FAHRENHEIT\n   The Value Is %.2fF \n\n",value1,result);
            break;
          case 2:
          printf("You're Converting From Fahrenheit To Kelvin\nEnter The Value In(F):");
               std::cin>>value1;
                result=((((value1-32)*5)/9)+273.15);
                printf(" Given Value Is %.2fF \n \nCONVERTED TO KElVIN\n   The Value Is %.2fK\n\n ",value1,result);
                break;
          default:
          printf("Invalid");
            break;
          }
     }
     void celciusAndKelvins(float value1, int option3,float result){
        system("cls");
        printf("You've Selected The Kelvin And Celcius Conversion Option.\n");
        printf("Select Operation\n___________________\n\n1:Kelvin To Celcius\n2:Celcius To Kelvin\n___________________\nOption:");
          std::cin>>option3;
          system("cls");
          switch (option3)
          {
          case 1:
            printf("You're Converting From Kelvin To Celcius\nEnter The Value In(K):");
               std::cin>>value1;
                result=(value1-273.15);
                printf(" Given Value Is %.2fK \n \nCONVERTED TO CELCIUS\n   The Value Is %.2fC \n\n",value1,result);
            break;
          case 2:
          printf("You're Converting From Celcius To Kelvin\nEnter The Value In(C):");
               std::cin>>value1;
                result=(value1+273.15);
                printf(" Given Value Is %.2fF \n\n CONVERTED TO KElVIN\n   The Value Is %.2fK\n\n ",value1,result);
                break;
          default:
          printf("Invalid");
            break;
          }
     }
     void thanksGivingMessage(std::string userName){
      std::cout<<"Thank You "<<userName<<" We Hope You Got The Results You Needed";
         std::cout<<std::endl;
      std::cout<<"Do You Want To Restart?"<<std::endl<<"___________________"<<std::endl<<"1:Yes"<<std::endl<<"2:No"<<std::endl<<"___________________"<<std::endl<<"Option:";
     }