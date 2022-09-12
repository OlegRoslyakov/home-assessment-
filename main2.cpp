#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

   int number1, number2;

    cout << "Введите первое число: ";
   cin >> number1;
  if (number1 >= 0) 
   {
    cout << "Позитивное"<< endl;
  }
  else cout << "Негативное"<< endl;
    
    cout << "Введите второе: ";
   cin >> number2;

  if (number2 >= 0) 
   {
    cout << "Второе число позитивное"<< endl;
  }
  else 
   cout << "Второе число негативное"<< endl;
   if (number1>number2 )
   {
    cout << "Самое большое " <<number1<< endl;
   }
   else if (number2> number1 )
   {
    
    cout << "Самое большое"  <<number2<< endl;
   }
   else cout << "Числа равны"<<endl;
  


   
    string string1, string2;
    bool a;
cout << endl;
 
   getline(cin, string1);

    cout << "Введите первую строку: " ;
   getline(cin, string1);
   cout << "Введите вторую строку: " ;
   getline(cin, string2);

   if ( string1 == string2 )
   {
    cout <<"\""<< string1 <<"\""<< " is equal to " << "\""<< string2 <<"\""<< endl;
    a = true;
   }
   else{a = false;
   cout << std::boolalpha;

   cout << a << endl;
   } 



cout << endl;
{
  setlocale(0, "");
    
    int one = 0, two = 0, three = 0;
    cout << "Введите первое число: ";
    
    cin >> one;
    
    
    cout << "Введите второе число: ";
    
    cin >> two;
    
    
    cout << "Введите третье число: ";
    
    cin >> three;
        
    if (one > two && one > three)
    
    cout << 'F' << endl;
       
    else
            
    if (two > one && two > three)
    
    cout << 'S' << endl;
    
    else
    
    if (three > one && three > two)
    
    cout << 'T' << endl;
    
    else
    
    if (one == two && two == three)
    
    cout << 'E' << endl;
    
    else
    
    cout << 'N' << endl;
    }
  return 0; 
    
}