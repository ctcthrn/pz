#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stack>

using namespace std;

void Vector() {
    setlocale(LC_ALL, "ru");
	int a = 0, b = 0;
    double sum1 = 0, sum2 = 0;
	cin >> a >> b;

    vector<int> vec1(a);
    vector<int> vec2(b);

    cout << "?????? ??????: ";

    for (int i = 0; i < a; i++) {
        vec1[i] = rand() % 10;
		sum1 += vec1[i];
        cout << vec1[i] << " ";
    }

    cout << endl << "?????? ??????: ";

    for (int i = 0; i < b; i++) {
        vec2[i] = rand() % 10;
        cout << vec2[i] << " ";
    }

    cout << endl << "??????? ?????????????? 1: " << (sum1 / a);

    for (int i = 0; i < b; i++) {
        sum2 += vec2[i];
    }

    cout << endl << "??????? ?????????????? 2: " << (sum2 / b) << endl;

	cout << "??????: ";
	int j = 0;
	if (a <= b)
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				if (vec1[i] == vec2[j])
				{
					cout << vec1[i] << " ";
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < b; i++)
		{
			for (int j = 0; j < a; j++)
			{
				if (vec2[i] == vec1[j])
				{
					cout << vec2[i] << " ";
				}
			}
		}
		std::cout << endl;
	}
}


void Map() {
    setlocale(LC_ALL, "ru");
	string c, d;
	map <string, int> cont;

	cout << "??????? ??????: ";

	getline(cin, c);

	for (int i = 0; i < c.size() + 1; i++)
	{
		d += c[i];
		if (isspace(c[i]) || c[i] == '\0')
		{
			d.pop_back();
			cont[d]++;
			d = "";
		}
	}

	for (pair<string, int> itog : cont)
	{
		cout << itog.second << " - " << itog.first << endl;
	}
}


int main() {
    Map();
	Vector();
}
