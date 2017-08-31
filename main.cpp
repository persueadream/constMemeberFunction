/*
	author：persueadream
*/



#include <iostream.h>
#include <string>
using std::string;

class text{
	public:
		text();
	public:
		//string *str;
		mutable string *str;
		void w_printf (string strValue) const;
		inline void i_printf(string strValue);
			
};

text::text()
{
	str = new string("hello world! I love you!");
}

void text::w_printf(string strValue) const
{
	cout << strValue << endl;
	str = &strValue;   //const 成员不能改变其操作对象的数据成员 
	cout << *str << endl;
}

inline void text::i_printf(string StrValue)
{
	cout << StrValue << endl;
}

int main(int argc, char *argv[])
{
	text *tTest = new text();
	tTest->w_printf("hello wankgui!");
	tTest->i_printf("I love you my wife!");
	tTest->i_printf("Hello Github!");
//	cout<<"Hello C-Free!"<<endl;
	return 0;
}
