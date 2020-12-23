#include <iostream>

using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
  // 기본 생성자 대신에 매개변수에 디폴트 값 주는 방식
  // Complex(double real_ = 0, double imag_ = 0)

  // 초기화 목록
  // 들어오는 이름이 같아도 안/밖으로 소속 구분 가능
	Complex() : real(0), imag(0) {	}
	Complex(double real_, double imag_) : real(real), imag(imag) {	}

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