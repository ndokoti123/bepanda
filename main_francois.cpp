/* cette fonction recursive calcule le pgcd de deux nombre */
#include <iostream>

using namespace std;

int gcd (int a, int b)

{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a>b)
        return gcd(a-b, b); //
    return gcd(a, b-a);
} ;

class Rational
{
private:

    int a;
    int b;

public:
      // constructeur
        Rational(int , float); // un nombre rationeel a un deno relatif d'ou le flaot
        int numerateur();
        float denominateur();
        void print();

};


    /* definition des fonction membre de la classe */
    Rational:: Rational(int num, float deno): a(1), b(1)
    {
        a = num;
        b = deno;
    }

    int Rational::numerateur()
    {
        return a;
    }

    float Rational::denominateur()
    {
        return b ;
    }
    void Rational::print()
    {
        cout <<a<<"/"<<b;
    }
