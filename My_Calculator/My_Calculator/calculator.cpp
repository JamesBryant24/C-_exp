#include"stdio.h"
#include"iostream"
#include"math.h"
#include"string.h"
#include"../../std_lib_facilities.h"
using namespace std;
void cal(void);
int main() {
	while (1) {
		cal();
	}
}
void cal(void) {
	cout << "请输入三个参数如3.1 + 2\n\n";
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (!(a >= 0))
		cout<< "参数值必须大于等于0\n\n";
	else
		if(!(b>=0))
			cout << "参数值必须大于等于0\n\n";
		else 
			switch (c)
			{
			case  '+': 
				cout << "the answer is " << a + b << "\n\n";
				break;
			case '/': 
				if (b != 0)
					cout << "the answer is " << a/b<< "\n\n";
				else
					cout << "做除法时除数不能为0\n\n";
				break;
			case '-':
		        cout << "the answer is " << a - b << "\n\n";
				break;
			case '*':
				cout << "the answer is " << a * b << "\n\n";
				break;
			case '%':
				if (a == int(a) && b == int(b) && b != 0)
					cout << "the answer is " << int(a) % int(b) << "\n\n";
				else
					if (b == 0)
						cout << "取余操作时除数不能为0\n\n";
					else
						cout << "取余操作时两个操作数必须为整数\n\n";
				break;
			default:
				cout << "操作符输入错误请重新输入\n\n";
				break;
			}


}