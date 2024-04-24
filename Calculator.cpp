#include <iostream>

using namespace std;

int main(){
      
      int numb1,numb2,choice ,sum;
      char cancel = 'y';
    

   do {
   
   cout << " MENU " << endl;

   cout << "Hello  welcome to Calcuator press number which represents the operation you want to use..."<< endl;
   cout << " 1. Add " << endl;
   cout << " 2. Substact " << endl;
   cout << " 3. Multiply " << endl;
   cout << " 4. Divide " << endl;
   cout << " 5. Modulus " << endl;
   cout << "Enter your choice (1-5) :" << endl; 
    
      cin >> choice;
   
  
   if(choice == 1){
    
     cout <<  "You choose Adding Operator " << endl;
   
      cout << "Enter a number 1 :" ;
     cin >> numb1;

     cout << "Enter a number 2 :";
       cin >> numb2;

       sum = numb1 + numb2;

       cout << "Result " << sum <<  endl ;
        

  }
   else if(choice == 2){
    
    cout << "You chose The Subtracting operator" << endl;

        cout << "Enter a number 1 :";
     cin >> numb1;

     cout << "Enter a number 2 :";
       cin >> numb2;
        
         sum = numb1 - numb2;
        
       cout << "Result " << sum << endl ;

   }
   else if(choice == 3){
      
      cout << "You chose Multiplication operator " << endl;

      cout << "Enter a number 1 :";
     cin >> numb1;

     cout << "Enter a number 2 :";
       cin >> numb2;
         sum = numb1 * numb2;
        
       cout << "Result " << sum << endl ;

   }
    else if(choice == 4){
        
          
         cout << "You chose The Dividing operator" << endl; 

        cout << "Enter a number 1 :";
     cin >> numb1;

     cout << "Enter a number 2 :";
       cin >> numb2;

         if(numb2 == 0){

               cout << " You cannot divide by zero!! \n Would you like to  use the Calculator again? \n press 2 if you want to try agin.. \n press 3 if you dont want to use it again... " << endl; 
              
               cin >> cancel;
          }
          
         sum = numb1 / numb2;
       cout << "Result " << sum << endl ;
      }
    
    else 
    if (choice ==5){

      cout << "You chose Modulus operator " << endl;  
   
   cout << "Enter a number 1 :";
     cin >> numb1;

     cout << "Enter a number 2 :";
       cin >> numb2;
        
        sum = numb1 % numb2;

       cout << "Result " << sum  << endl;

    }
     
     else {
      
            cout << "You entered the wrong number enter number between (1 to 5)" << endl;
        
     }
         cout << " Would you like to  use the Calculator again? \n press y if you want to continue \n press Y if you dont want to use it again... " << endl; 
           cin >> cancel;
   }
   
     while( cancel != 'Y'); 
      
       return 0;
     

}