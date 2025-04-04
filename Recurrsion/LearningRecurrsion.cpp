//LearningRecurrsion

//Reccursion : When a function calls itself to solve a problem 
//When we have to solve a Problem whose solution is dependent on the solution of smaller similar problems, we use recursion.
//2 components are important in recursion:
//1. Base case : The condition under which the recursion stops
//2. Recursive case/(relation) : The condition under which the recursion continues
//3rd component is the processing of the data in the recursive case
//Both base case and recursive case are mandatory in recursion




#include <iostream>
using namespace std;

//Example : Factorial of a number
int factorial(int n){
    //Base case
    if(n==0 || n==1){
        return 1; //return statement is mandatory in base case
    }
    //Recursive case
    return n * factorial(n-1);
}

//Example : Power of a number
int power(int n, int p){
    //Base case
    if (p == 0){
        return 1;
    }
    else{
        return n * power(n, p-1); 
    }
}

//Example : Counting the number 

void count(int n){
    //Base case
    if(n == 0){
        return;
    }
    cout << n << " ";
    count(n-1); //Recursive case
}

int main(){

    int n, p;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the power: ";
    cin >> p;
    //cout << "Factorial of " << n << " is " << factorial(n) << 
    cout << p << " Power of " << n << " is " << power(n, p) << endl; 
    count(n); //This will print the numbers from n to 0
    cout << endl;
}

//What if we have no Base case?
//Segmentation fault (core dumped) error will occur
//This is because the function will keep calling itself and will never stop, leading to a stack overflow error
