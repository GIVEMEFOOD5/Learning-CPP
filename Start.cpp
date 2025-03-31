#include <iostream>
#include <string>

int x;
int y;
int sum;
std::string calculation;

void addition() 
{
   std::cout << "Type a number: ";
   std::cin >> x;
   std::cout << "Enter another number: ";
   std::cin >> y;
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
   std::cout << "enter the calculation you want: multiplication, addition, subtraction or division (please enter it like this else it wont work) ";
   std::cin >> calculation;
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
   return 0;
}