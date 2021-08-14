 
 #include <iostream>
 using namespace std;

 int mySum (int &); // Declaring the function

 void main (void)
 {
     
     int a;
     int b;
     
     cout << "Please enter first number: ";
     cin >> a;
     cout << "Please enter second number: ";
     cin >> b;
     
     int suma = a + b;
     cout << mySum(suma) << endl;
     cout << "Sum of 2 numbers is: " << suma << endl;
     
 }

 int mySum (int &sum) { // Defining the function
     
     int a;
     int b;
     sum = a + b;
     
     return (sum);
 }


