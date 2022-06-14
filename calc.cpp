# include <iostream>
#include <cmath>
using namespace std;

int main() {

  char op;
  float a,b;
  int i;
  float result=0;

  cout << "Enter operator: +, -, *, /\n";
  cin >> op;

  switch(op) {

    case '+':
             
             cout<<"Enter how many numbers you want to add\n";
            cin>>a;
             for(i=0;i<a;i++)
               {
                    cout << "enter number  ";
                    cin >> b;
                    result+=b;
                 
                
               }
               cout << " addition = " <<result;
             
      break;

    case '-':
           
            cout << "Enter first number ";
         cin >> a ;
         cout << "Enter second number: ";
         cin >> b;
         cout << a << " - " << b << " = " << a - b;
             
      break;

    case '*':
   
                 cout<<"Enter how many numbers you want to multiply\n";
                 cin>>a;
                 result=1;
                for(i=0;i<a;i++)
               {     
                    cout << "enter number  ";
                    cin >> b;
                   result=result*b;

                  
               }
               cout << "  multiplication  = " << result;
            
      break;

    case '/':
         cout << "Enter first number ";
         cin >> a ;
         cout << "Enter second number: ";
         cin >> b;
         if(b>0)
         {
         cout << a << " / " << b << " = " << a / b;
         }
         else
         {
             cout << " wrong num entered";
         }
         
      break;

    default:
      
      cout << "incorrect operator entered";
      break;
  }

  return 0;
}