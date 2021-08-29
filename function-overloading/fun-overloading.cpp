/*
Everything about the function overloading in C++ you need to know.

Function overloading in c++ can have the same function name but different parameters.
1.  These  functions have different parameter type
2.   These functions have a different number of parameters
3.  These functions have a different sequence of parameters
The above three cases are valid cases of overloading. We can have any number of functions, but remember that the parameter list must be different. 

Why is function overloading in c++ is used?
-> Function overloading is similar to polymorphism that helps us to get different behaviour, with the same name of the function. Function overloading in c++ is used for code reusability and to save memory.
*/

#include<iostream>
using namespace std;
class Addition
{
    public:
    int sum(int a, int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
};

int main()
{
    Addition obj;
    cout<<obj.sum(10, 20)<<endl;
    cout<<obj.sum(10, 20, 30)<<endl;
    return 0;
}

/*
Causes of function overloading in c++
1.  Type Conversion.
2.  Function with default arguments.
3.  Function with a pass by reference.

Advantages of Function Overloading in c++
* The program is very simple and also easier to understand.
* It saves the memory space, maintains consistency, makes clear interface for methods regardless of the parameter’s type and readability of the program.
* Using the function overloading concept, we can develop more than one function with the same name, but the arguments passed should be of different types.
* Function overloading executes the program faster.
* Function overloading is used for code reusability and to save memory.

Disadvantages of Function Overloading in c++
* Function declarations that differ by their return type cannot be overloaded with the function overloading process.
* If any static member function is declared, then the same parameters or the same name types cannot be overloaded.
*/