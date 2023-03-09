#pragma once
#include <string>
using namespace std;



namespace PO1 
{

    class Conver_10_p
    {
    public:

        static string Do(double n, int p, int c);

        static char int_to_Char(int d);

    private:            
        static string int_to_P(int n, int p);

        static string flt_to_P(double d, int p, int c);

        

    };
}
