//operator overlaoding is a type of compile time polymorphism, in this we overload operators according to our needs.

#include<iostream>
using namespace std;

class Complex
{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (Complex &obj) //function of opertor overloading
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
    void display()
    {
        cout<<"the sum of complex numbers is: "<<real<<" + i"<<imag<<endl; 
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(3, 2);
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}