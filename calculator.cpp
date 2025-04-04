#include <iostream>
#include <string>
#include <sstream>

int last;
int firstLastDigit;
int lastFirstDigit;
int x;
int y;
int symbol;
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
   sum = x - y;
   std::cout << "the sum of your numbers are: " << sum;
}

void divide() 
{
   sum = x / y;
   std::cout << "the sum of your numbers are: " << sum;
}

void multiply()
{
   sum = x * y;
   std::cout << "the sum of your numbers are: " << sum;
}

int main()
{
   std::cout << "please enter your calculation: ";
   std::cin >> equation;

   if (equation.find("*") != std::string::npos)
   {
      symbol = equation.find_first_of('*');
      lastFirstDigit = symbol - 1;
      firstLastDigit = symbol + 1;
      last = equation.back();
      int x = std::stoi(equation.substr(0,equation.find_first_of('*')));
      int y = std::stoi(equation.substr(equation.find_first_of('*')+1, std::string::npos));
      calculation = "multiplication";
   }

   else if (equation.find("+") != std::string::npos)
   {
      symbol = equation.find_first_of('+');
      lastFirstDigit = symbol - 1;
      firstLastDigit = symbol + 1;
      last = equation.back();
      int x = std::stoi(equation.substr(0,equation.find_first_of('+')));
      int y = std::stoi(equation.substr(equation.find_first_of('+')+1, std::string::npos));
      calculation = "addition";
   }

   else if (equation.find("-") != std::string::npos)
   {
      symbol = equation.find_first_of('-');
      lastFirstDigit = symbol - 1;
      firstLastDigit = symbol + 1;
      last = equation.back();
      int x = std::stoi(equation.substr(0,equation.find_first_of('-')));
      int y = std::stoi(equation.substr(equation.find_first_of('-')+1, std::string::npos));
      calculation = "subtraction";
   }
   else if (equation.find("/") != std::string::npos)
   {
      symbol = equation.find_first_of('/');
      lastFirstDigit = symbol - 1;
      firstLastDigit = symbol + 1;
      last = equation.back();
      int x = std::stoi(equation.substr(0,equation.find_first_of('/')));
      int y = std::stoi(equation.substr(equation.find_first_of('/')+1, std::string::npos));
      calculation = "division";
   }
   else 
   {
      return 0;
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
   else if (calculation == "division")
   {
      divide();
   }

   else 
   {
      return 0;
   }
}