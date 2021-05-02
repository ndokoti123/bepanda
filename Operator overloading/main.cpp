#include <vector>
#include <iostream>
//class rational
class Rational {
private:
	//Data structure indicated for the greatest common divisor
	int num;
	int deno;
public:
	//constructor of the class which initialise the division with 1
	Rational(int a, int b) : num(1), deno(1)
	{
		num = a, deno = b;
	}
	
	//Function to print data in the console.
	void print(int a, int b)
	{
		std::cout << num/deno << std::endl;
	}
	//Function of the denominator
	int denominator()
	{
		return deno;
	}
	//function of the numerator
	int numerator()
	{
		return num;
	}
	//implementation of the recursive fucntion of the great comon divisor
	int gcd(int a, int b)
	{
		if (b == 0)
			return a;
		else
			return gcd(b, a % b);
	}
};
//class to implement every operator in the exercice.
class Operatoren
{
private :
	float x;
public:
	//fucntion to print out the data when it is called in the main fucntion
	void print()
	{
		std::cout << x << std::endl;
	}

	//contructor that initialize the value of the class
	Operatoren(float a) : x(0){ x = a; }

	//diffent prototype of every funtion implemented out of the class
	Operatoren operator -=(const float&suit);
	Operatoren operator +=(const float& suit);
	Operatoren operator /=(const float& suit);
	Operatoren operator ==(const float& suit);
	Operatoren operator *= (const float& suit);
	Operatoren operator +(const float& suit);
	Operatoren operator -(const float& suit);
	Operatoren operator *(const float& suit);
	Operatoren operator /(const float& suit);

};

Operatoren Operatoren::operator+(const float& suit)
{
	x += suit;
	return *this;
}

Operatoren Operatoren::operator-(const float& suit)
{
	x -= suit;
	return *this;
}
Operatoren Operatoren::operator*(const float& suit)
{
	x *= suit;
	return *this;
}
Operatoren Operatoren::operator/(const float& suit)
{
	x /= suit;
	return *this;
}
Operatoren Operatoren::operator*=(const float& suit) {
	x = x * suit;
	return *this;
}
Operatoren Operatoren::operator+=(const float& suit)
{
	x = x + suit;
	return *this;
}

Operatoren Operatoren::operator/=(const float& suit)
{
	x = x / suit;
	return *this;
}

Operatoren Operatoren::operator-=(const float&suit)
{
	x = x - suit;
	return *this;
}

Operatoren Operatoren::operator==(const float& suit)
{
	if (x == suit) {
		x = true;
		return *this;
	}
	else
	{
		x = false;
		return *this;
	}
}

int main()
{
	float f1 = static_cast<float>(-3) / 12, f2 = static_cast<float>(4) / 3;
	Operatoren f3 = 0/1;
	f3 = f1 + f2;
	f3.print();
	f3 = f1 * f2;
	f3.print();
	f3 = 4 + f2;
	f3.print();
	f3 = f2 + 5;
	f3.print();
	f3 = 12 * f1;
	f3.print();
	f3 = f1 * 6;
	f3.print();
	f3 = f1 / f2;
	f3.print();
	return 0;

}
