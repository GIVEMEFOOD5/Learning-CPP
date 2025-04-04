#include <iostream>
#include <string>

int v;
int w;
int x;
int y;
int z;
float sum;
std::string calculation;
std::string equation;
char typeOfEquation;

void addition() 
{
   sum = x + y;
   std::cout << "the sum of your numbers are: " << sum;
}

void subtraction() 
{
   std::cout << "Type a first: ";
   std::cin >> x;
   std::cout << "Type a second number: ";
   std::cin >> y;
   sum = x - y;
   std::cout << "the sum of your numbers are: " << sum;
}

void divide() 
{
   std::cout << "Type a number: ";
   std::cin >> x;
   std::cout << "Enter another number: ";
   std::cin >> y;
   sum = x / y;
   std::cout << "the sum of your numbers are: " << sum;
}

void multiply()
{
   std::cout << "Type a number: ";
   std::cin >> x;
   std::cout << "Enter another number: ";
   std::cin >> y;
   sum = x * y;
   std::cout << "the sum of your numbers are: " << sum;
}

int main()
{
   std::cout << "please enter your calculation: ";
   std::cin >> equation;

   if (equation.find("*") != std::string::npos)
   {
      calculation = "multiplication";
   }

   else if (equation.find("+") != std::string::npos)
   {
      z = equation.find_first_of('+');
      w = z - 1;
      v = z + 1;
      equation.substr(0, w);
      equation.substr(v, )
      calculation = "addition";
   }
   else if (equation.find("-") != std::string::npos)
   {
      calculation = "subtraction";
   }

   if (calculation == "addition")
   {
      addition();
   }
   else if (calculation == "subtraction") 
   {
      subtraction();
   }
   else if (calculation == "multiplication")
   {
      multiply();
   }
   else
   {
      divide();
   }
}