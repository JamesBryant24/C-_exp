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
	cout << "����������������3.1 + 2\n\n";
	double a, b;
	char c;
	cin >> a >> c >> b;
	if (!(a >= 0))
		cout<< "����ֵ������ڵ���0\n\n";
	else
		if(!(b>=0))
			cout << "����ֵ������ڵ���0\n\n";
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
					cout << "������ʱ��������Ϊ0\n\n";
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
						cout << "ȡ�����ʱ��������Ϊ0\n\n";
					else
						cout << "ȡ�����ʱ��������������Ϊ����\n\n";
				break;
			default:
				cout << "�����������������������\n\n";
				break;
			}


}