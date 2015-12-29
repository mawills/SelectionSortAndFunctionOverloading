#include<iostream>

class Complex
{
  double real;
  double imaginary;

  public:
  //Overloaded constructors
  Complex(double realPart, double imaginaryPart)
  {
    real = realPart;
    imaginary = imaginaryPart;
  }

  Complex(double realPart)
  {
    real = realPart;
    imaginary = 0;
  }

  Complex()
  {
    real = 0;
    imaginary = 0;
  }

  //Overloaded operators

  //Adds the real values together and the imaginary values together of two complex numbers
  Complex operator+(const Complex& c)
  {
    Complex newComplex;
    newComplex.real = this->real + c.real;
    newComplex.imaginary = this->imaginary + c.imaginary;
    return newComplex;
  }

  //Finds the difference of the real and imaginary values respectively of two complex numbers
  Complex operator-(const Complex& c)
  {
    Complex newComplex;
    newComplex.real = this->real - c.real;
    newComplex.imaginary = this->imaginary - c.imaginary;
    return newComplex;
  }

  //Checks to see if two complex numbers are the same
  bool operator==(const Complex& c)
  {
    if(this->real      == c.real      &&
       this->imaginary == c.imaginary)
        return true;
    else
        return false;
  }

  //Multiply two complex numbers together
  Complex operator*(const Complex& c)
  {
    Complex newComplex;
    newComplex.real = ((this->real * c.real)-(this->imaginary * c.imaginary));
    newComplex.imaginary = ((this->real * c.imaginary)+(this->imaginary * c.real));
    return newComplex;
  }

  void printComplex()
  {
    std::cout << real << " + " << imaginary << "i" << std::endl;
  }



};
