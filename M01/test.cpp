#include <iostream> //display output with cout
using namespace std;// std is define in iostream lib for cout, 42 cheating

// int main()
// {
//     cout << "This is C++ Programming" << endl;
//     std::cout << "Without using namespace" << endl << endl;// same without namespace, 42 enable

//     int num1 = 70;
//     int num;

//     std::cout << num1 << " A" << endl;
//     std::cin >> num;
//     std::cout << "num: " << num1;

//     char a;
//     std::cout << "Enter a character and an integer: ";
//     std::cin >> a >> num;

//     std::cout << "Character: " << a << std::endl;
//     std::cout << "Number: " << num;

//     int num_int;
//     double num_double = 9.99;

//     num_int = num_double;//type casting

//     std::cout << "num_int = " << num_int << std::endl;
//     std::cout << "num_double = " << num_double << std::endl;

//     double num_double = 3.56;
//     std::cout << "num_double = " << num_double << std::endl;
//     int num_int1 = (int)num_double;
//     std::cout << "num_int1   = " << num_int1 << std::endl;
//     double num_int2 = (num_double);
//     std::cout << "num_int2   = " << num_int2 << std::endl;


//     int a, b, c;
//     a = 7;
   
//     std::cout << "Enter b " << std::endl;
//     std::cin >> b;
//     c = a - b;
//     if (c > 0)
//         std::cout << "a + b = " << c << std::endl;
//     else
//         std::cout << "c < 0 " << std::endl;

//    char oper;
//     float num1, num2;
//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> oper;
//     cout << "Enter two numbers: " << endl;
//     cin >> num1 >> num2;

//     switch (oper) {
//         case '+':
//             cout << num1 << " + " << num2 << " = " << num1 + num2;
//             break;
//         case '-':
//             cout << num1 << " - " << num2 << " = " << num1 - num2;
//             break;
//         case '*':
//             cout << num1 << " * " << num2 << " = " << num1 * num2;
//             break;
//         case '/':
//             cout << num1 << " / " << num2 << " = " << num1 / num2;
//             break;
//         default:
//             // operator is doesn't match any case constant (+, -, *, /)
//             cout << "Error! The operator is not correct";
//             break;
// }

// These functions having the same name 
// but different arguments are known as overloaded functions
// int test() { }
// int test(int a) { }
// float test(double a) { }
// int test(int a, double b) { }

//     return 0;
// }

//CoD MW2 35:10

//cout  -> print outpit
//cin   -> get input
//endl  -> \n

//A class is a blueprint for the object.
//When a class is defined, only the specification for the object is defined; 
//no memory or storage is allocated.

// defining the default arguments
// void display(char = '*', int = 3);

// int main() {
//     int count = 5;

//     cout << "No argument passed: ";
//     // *, 3 will be parameters
//     display(); 
    
//     cout << "First argument passed: ";
//      // #, 3 will be parameters
//     display('#'); 
    
//     cout << "Both arguments passed: ";
//     // $, 5 will be parameters
//     display('$', count); 

//     return 0;
// }

// void display(char c, int count) {
//     for(int i = 1; i <= count; ++i)
//     {
//         cout << c;
//     }
//     cout << endl;
// }



// class Room
// {
//     private:
//         double  l;
//         double  b;
//         double  h;
//     public:
//     void initData(double len, double brth, double hgt) {
//         l = len;
//         b = brth;
//         h = hgt;
//     }
//         double  cArea(){
//             return l * b;}
//         double  cVolume(){
//             return l * b * h;}
// };

// int main()
// {
//     Room room1;
//     Room room2;

//     room1.initData(42.5, 30.8, 19.2);
//     room2.initData(5, 6, 2);

//     cout << "Area of Room1 " << room1.cArea() << endl;
//     cout << "Volume of Room1 " << room1.cVolume() << endl;

//     cout << "Area of Room2 " << room2.cArea() << endl;
//     cout << "Volume of Room2 " << room2.cVolume() << endl;

//     return 0;
// }



// class  Wall {
//   private:
//     double length;

//   public:
//     Wall() {
//       length = 5.5;
//       cout << "Creating a wall." << endl;
//       cout << "Length = " << length << endl;
//     }
// };

// int main() {
//   Wall wall1;
//   return 0;
// }



// class Count {

//     public:
//     int value;

//     Count() : value(2) {}
//     Count(int m) {value = m;}

//     void operator ++ () {
//         ++value;
//     }

//     void operator ++ (int) {
//         value++;
//     }
/*
    Count operator ++ () {
        Count temp;

        temp.value = ++value;
        return temp;
    }

    Count operator ++ (int) {
        Count temp;

        temp.value = value++;
        return temp;
    }
*/
//     void display() {
//         cout << "Count: " << value << endl;
//     }
// };

// void calculateAverage(Count s1, Count s2) {

//     double average = (s1.value + s2.value) / 2;
//    cout << "Average Marks = " << average << endl;
// }

// int main() {
//     Count count1, count2(5), result;

//     result = count1++;
//     count1.display();

//     result = ++count2;
//     count2.display();
//     calculateAverage(count1, count2);
//     return 0;
// }

// ?????
// class Complex {
//    private:
//     float real;
//     float imag;

//    public:
//     Complex() : real(0), imag(0) {}

//     void input() {
//         cout << "Enter real and imaginary parts respectively: ";
//         cin >> real;
//         cin >> imag;
//     }

/*
Operator Overloading
using & makes our code efficient by referencing the complex2 object instead of making a duplicate object inside the operator function.
using const is considered a good practice because it prevents the operator function from modifying complex2.

There are 4 operators that cannot be overloaded in C++.
a   :: (scope resolution)
b   . (member selection)
c   .* (member selection through pointer to function)
d   ?: (ternary operator)
*/

//     Complex operator + (const Complex& obj) {
//     // Complex operator + (Complex obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     void output() {
//         if (imag < 0)
//             cout << "Output Complex number: " << real << imag << "i";
//         else
//             cout << "Output Complex number: " << real << "+" << imag << "i";
//     }
// };

// int main() {
//     Complex complex1, complex2, result;

//     cout << "Enter first complex number:\n";
//     complex1.input();
//     cout << "Enter second complex number:\n";
//     complex2.input();
//     result = complex1 + complex2;
//     result.output();
//     return 0;
// }


// base class

class Animal {

   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal { //Dog is /inherited/ from Animal.
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}

// public: If a derived class is declared in public mode, then the members of the base class are inherited by the derived class just as they are.
// private: In this case, all the members of the base class become private members in the derived class.
// protected: The public members of the base class become protected members in the derived class.
