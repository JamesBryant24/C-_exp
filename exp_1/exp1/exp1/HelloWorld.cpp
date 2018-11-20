#include"stdio.h"
#include"iostream"
#include"math.h"
#include"string.h"
#include"../../../std_lib_facilities.h"
using namespace std;
int m = 1;
vector<string>name;
vector<string>age;
void cal_su(int i) {
	int j = 2;
	for (j = 2; j < i; j++)
	{
		if (!(i%j)) return;
	}
	if (m != 4)
	{
		printf("%4d", i);
		m++;
	}

	else {
		printf("\n%4d", i); m = 1;
	}
	

}
void print_sushu() {
	vector<int>sushu;
	int i = 2;
	printf("100以内的素数为：\n");
	for (i = 2; i < 101; i++)
		cal_su(i);

}
int single(string s) {
	int j = 0;
	for (j = 0; j < name.size(); ++j)
		if (s.compare(name[j])) return 0;
	return 1;
}
void print_name() {
	
	int j=0;
	string stop1 = "No";
	string stop2 = "More";
	string pre_name = "Yes";
	string pre_age = "Yes";
	while ((pre_name.compare(stop1)) && (pre_age.compare(stop2)))
	{cin >> pre_name >> pre_age;
	if (!single(pre_name)) cout<<"输入同一个名字请重新输入\n";
	else {
		name.push_back(pre_name);
		age.push_back(pre_age);
	}
}

	for(j=0;j<name.size()-1;++j)
	cout  << name[j]  << ":" << age[j] << "\n";

}
int main() {
	cout << "  Hello World!\n";
	//keep_window_open();
	//error("Hello_error");
	int k = 0;
	cin >> k;
	if (k == 1) error("Hello_error");
	if (k==2)   print_sushu();
	if (k ==3)   print_name();
	keep_window_open();
	return 0;
}