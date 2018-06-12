/*deque - ��� vector, ������ ��� ���������� pushFront,delfront, ���� ��� �� queue
������������ ��� ������ � ��, ��� ������
*/

#include<iostream>
#include<queue>
#include<string>
#include<fstream>
#include<set>
#include<math.h>
#include<algorithm>
using namespace std;

string& toLowerString(string &s) {
	for (int i = 0; i< s.size();i ++ )
		s[i] = tolower(s[i]);
	return s;
}
void lessK05(double v) {
	if (sin(v) < 0.5)
		cout << v << endl;
}
//�������- �����, ������� � ���������� ������������, ��� �������, �����
class less05 {
public:
	bool operator()(double v) {
		return (sin(v) < 0.5);
	}
};

void print(double d) {
	cout << d << endl;
}

int main() {
	int n;
	cout << "num: ";
	cin >> n;
	switch (n) {
		/*1.	�������� ���������, � ������� �������� ��� ���������� �����.
		���� ���� �����������,������ ����� �������� � ����������� � deque<string>.
		����� ��� ����� ����������� � ������ �������, �����������, ��������� 
		��������� � ���������� ���������.*/
	case 1: {
		ifstream in_file;
		string file_name;
		string word;
		deque<string>words;
		set<string> ordered_words;
		cout << "Enter file name: ";
		cin >> file_name;
		in_file.open(file_name);
		if (!in_file) {
			cerr << "file open error" << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >>word;
				words.push_back(word);
			}
		}
		for (auto it = words.begin();it != words.end();it++)
		{
			ordered_words.insert(toLowerString(*it));
		}
		for (auto it = ordered_words.begin();it != ordered_words.end();it++) {
			cout << *it << endl;
		}
		
	}break;

		/*2.	�������� �����, � �������  ���� ostream& operator<<.
		����� ������ ��������� ������� � �����������. �������� ���������
		� ����������� ������� ���������� �������.��������� priority_queue, 
		��������� ���������, ����� �������� ���������� ������� �� �����.*/
	case 2: {

	}break;

		/*1.	��������� ������ vector<double> �������, ���������������
		����� ���� � ��������. ��������� ������ � �������, ������� ��
		������� ��� �����, ����� ������� ������ 0,5.*/
	case 3: {
		vector<double>v;
		v.push_back(5);
		v.push_back(1.5);
		v.push_back(5.2);
		v.push_back(5.8);
		
		for_each(v.begin(), v.end(), lessK05); //algorithm


	}break;

	case 4: {
		vector<double> vd;
		vd.push_back(5);
		vd.push_back(1.5);
		vd.push_back(5.2);
		vd.push_back(1.8);
		auto itr = vd.erase(remove_if(vd.begin(), vd.end(), less05()), vd.end());
		//for_each(vd.begin(), vd.end(), print);

		for (auto i = vd.begin();i != vd.end();i++)
			cout << *i << endl;
	}break;

		/*4.	�������� ���������, ������������ ����� ���������� ���������
		���������� ����������� ������ list::sort() � ��������� std::sort().
		�������� ��������������� ������. */
	case 5: {

	}break;
	}
	system("pause");
	return 0;
}