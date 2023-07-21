//FIRAT KARAKUSOGLU   
//firatkarakusoglu@hotmail.com     
//SIMPLE CALCULATIONS FOR USING "f_graph.h" HEADER FILE

#include <cstdlib>
#include <iostream>  
#include "f_graph.h" //basic graphic and some additional functions

#define s2 "                    " //20 pix    

using namespace std;
 
int menu(void)   
{ 
     gf.makeSkeleton();
     gf.headerLine("Basic Calculations");
     gf.setTitle(s2"Sample Project For \"f_graph.h\" Header File - by FIRAT KARAKUSOGLU"); 
     gf.showLeftSide("   MENU   ",1);
     gf.showLeftSide("");
     gf.showLeftSide("1 Summation"); 
     gf.showLeftSide("2 Substraction");
     gf.showLeftSide("3 Multiplication");
     gf.showLeftSide("4 Division");
     gf.showLeftSide("5 Exit");
     gf.footerLine("Enter your choice [1-5]: ");
     int intUserChoice = 0;
     cin>>intUserChoice;
     while(intUserChoice<1 || intUserChoice>5)
     { 
                           intUserChoice = 0;
                           gf.warning("Error: Your choice should be [1-5]!");
                           gf.footerLine("Enter your choice [1-5]: ");
                           cin>>intUserChoice;
                           };
     return intUserChoice;
     };
      
void menu1(void)
{ 
     double x=0;
     double y=0;
     double sum=0;
     
     gf.showRightSide("        SUMMATION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter augend : "); cin>>x;
     gf.showRightSide("Augend is: "); cout<<x; 
     
     gf.footerLine("Enter addend : "); cin>>y;
     gf.showRightSide("Addend is: "); cout<<y;
     
     sum = x+y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Sum is: "); cout<<sum;
     gf.showRightSide("-----------------------------------------");
     };     
   
void menu2(void)
{
     double x=0;
     double y=0;
     double subtraction=0;

     gf.showRightSide("        SUBSTRACTION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter minuend : "); cin>>x;
     gf.showRightSide("Minuend is: "); cout<<x; 
     
     gf.footerLine("Enter subtrahend : "); cin>>y;
     gf.showRightSide("Subtrahend is: "); cout<<y;
     
     subtraction = x-y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Subtraction is: "); cout<<subtraction;
     gf.showRightSide("-----------------------------------------");
     };
void menu3(void)
{
     double x=0;
     double y=0;
     double sum=0;
     
     gf.showRightSide("        MULTIPLICATION",1);
     gf.showRightSide("-----------------------------------------");   
     
     gf.footerLine("Enter multiplicand : "); cin>>x;
     gf.showRightSide("Multiplicand is: "); cout<<x; 
     
     gf.footerLine("Enter multiplier : "); cin>>y;
     gf.showRightSide("Multiplier is: "); cout<<y;
     
     sum = x*y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Multiplication is: "); cout<<sum;
     gf.showRightSide("-----------------------------------------");
     };     
void menu4(void)
{
     double x=0;
     double y=0;
     double division=0;

     gf.showRightSide("        DIVISION",1);
     gf.showRightSide("-----------------------------------------");
     
     gf.footerLine("Enter dividend : "); cin>>x;
     gf.showRightSide("Dividend is: "); cout<<x; 
     
     gf.footerLine("Enter divider : "); cin>>y;
     gf.showRightSide("Divider is : "); cout<<y;   
      
     division = x/y;
     gf.showRightSide("-----------------------------------------");
     gf.showRightSide("Division is: "); cout<<division;
     gf.showRightSide("-----------------------------------------"); 
     };
 
void menu5(void)
{
     gf.showRightSide("GOOD BYE...",1); 
     gf.wait(1000);
     exit(1);     
     };
     
int main(int argc, char *argv[])
{
    while(1==1)
    {
        switch(menu())
        {
                      case 1: menu1(); break;
                      case 2: menu2(); break;
                      case 3: menu3(); break;
                      case 4: menu4(); break;
                      case 5: menu5(); break;
                      };
        };
    system("PAUSE");
    return EXIT_SUCCESS;
}
