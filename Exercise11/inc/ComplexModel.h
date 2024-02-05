#ifndef _COMPLEX_MODEL_H_
#define _COMPLEX_MODEL_H_
#include <iostream>

class ComplexModel
{
public:
    ComplexModel(){};
    ComplexModel(double r) : real(r){};
    ComplexModel(double r, double i) : real(r), imaginary(i){};
    ~ComplexModel(){};

    double getReal() const { return real; }
    void setReal(double r) { real = r; }
    double getImaginary() const { return imaginary; }
    void setImaginary(double i) { imaginary = i; }

    ComplexModel operator+(const ComplexModel &other)
    {
        return ComplexModel(real + other.real, imaginary + other.imaginary);
    }

    ComplexModel operator-(const ComplexModel &other)
    {
        return ComplexModel(real - other.real, imaginary - other.imaginary);
    }

    ComplexModel operator*(const ComplexModel &other)
    {
        return ComplexModel(real * other.real - imaginary * other.imaginary,
                            real * other.imaginary + imaginary * other.real);
    }

    ComplexModel operator/(const ComplexModel &other)
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        return ComplexModel((real * other.real + imaginary * other.imaginary) / denominator,
                            (imaginary * other.real - real * other.imaginary) / denominator);
    }
    friend std::ostream &operator<<(std::ostream &os, const ComplexModel &complexModel);

private:
    double real = 0;
    double imaginary = 0;
};

#endif /* _COMPLEX_MODEL_H_ */