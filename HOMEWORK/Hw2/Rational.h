/************************************************************************************
*             This is a specification file for the Rational class                   *
*	                   that determines what this class does.                        *
*************************************************************************************/
#ifndef RATIONAL_H
#define RATIONAL_H

/************************************************************************************
*         RATIONAL Class Declaration: Data Members and Inline Functions             *
*************************************************************************************/
class Rational
{
    //
    private:
        int numer;
        int denom;
        static int gcd(int, int)



    //
    public:
        //Overloaded Constructor
        Rational();
        Rational(int n = 0, int d = 1);
        void simplify();


};
#endif
