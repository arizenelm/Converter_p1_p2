#include "Conver_10_p.h"
#include <string>
using namespace std;


namespace PO1
{
    string Conver_10_p::Do(double n, int p, int c)
    {
        string integer = int_to_P(static_cast<int>(n), p);
        string fraction = flt_to_P(n - static_cast<int>(n), p, c);
        return integer + "." + fraction;
    }

    string Conver_10_p::int_to_P(int n, int p)
    {
        string result;
        string tmp;
        do {
            tmp.push_back(int_to_Char(n % p));
            n /= p;
        } while (n > 0);
        result.resize(tmp.size());
        for (int i = 0; i < tmp.size(); i++)
            result[i] = tmp[tmp.size() - 1 - i];
        return result;
    }

    string Conver_10_p::flt_to_P(double d, int p, int c)
    {
        string result;
        double delim = 1.0 / p;
        for (int i = 1; i <= c; i++)
        {
            int temp = static_cast<int>(d / delim);
            if (temp >= 1)
                d -= delim * temp;
            result.push_back(int_to_Char(temp));
            if (abs(d) < 1 / pow(p, c))
                break;
            delim /= p;
        }
        return result;
    }

    char Conver_10_p::int_to_Char(int d)
    {
        if (d < 10)
            return '0' + d;
        else
            return static_cast<char>(d - 10 + 'A');
    }
}