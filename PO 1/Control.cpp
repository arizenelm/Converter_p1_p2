#include "Control.h"
#include "Conver_10_p.h"
#include "Conver_p_10.h"

namespace PO1
{

    Control_::Control_() : pin(10), pout(16), accuracy(10), St(State::Converted)
    {}

    string Control_::DoCommand(int j)
    {
        if (j == 19)
        {
            double tmp = Conver_p_10::dval(ed.Number(), pin);
            string result = Conver_10_p::Do(tmp, pout, accuracy);
            St = State::Converted;
            his.AddRecord(pin, pout, ed.Number(), result);
            return result;
        }

        if (j == 22)
        {
            return his.GetHistory();
        }

        if (j == 23)
        {
            his.Clear();
            return string{};
        }
           
        else
        {
            St = State::Editing;
            return ed.DoEdit(j);
        }
        return "";
    }

}