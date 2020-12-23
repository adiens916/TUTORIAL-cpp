#include <iostream>

using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) {
		real = real_;
		imag = imag_;
	}

	void setReal(double real_) {
		real = real_;
	}
	void setImag(double imag_) {
		imag = imag_;
	}
	double getReal() {
		return real;
	}
	double getImag() {
		return imag;
	}
};

int main() {
  Complex c1;
  Complex c2 = Complex(2, 3);
  Complex c3(2, 3);

	// 중괄호 방식
	Complex c4 = {2, 3};
	Complex c5 = Complex{2, 3};
	Complex c6{2, 3};

  cout << "real = " << c2.getReal() << endl;
  cout << "imag = " << c2.getImag() << endl;
}