#include "History.h"
#include "Conver_10_p.h"
#include <msclr\marshal_cppstd.h>

namespace PO1
{
	History::Record::Record(int p1, int p2, string n1, string n2)
	{
		Record::p1 = p1; Record::p2 = p2; 
		Record::number1 = n1; Record::number2 = n2;
	}

	string History::Record::ToString()
	{
		string p1_ch = to_string(p1);
		string p2_ch = to_string(p2);
		return "From " + p1_ch + " to " 
			+ p2_ch + "\n" + number1
			+ " -> " + number2 + "\n";
	}

	string History::GetHistory()
	{
		string result;
		for (auto it : L)
			result.append(it.ToString() + '\n');
		return result;
	}

	void History::AddRecord(int p1, int p2, string n1, string n2) 
	{
		L.push_back(Record(p1, p2, n1, n2));
	}

	void History::Clear() 
	{
		L.clear();
	}

	int History::Count() 
	{
		return L.size();
	}

	History::History() = default;

}