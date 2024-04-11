#include <iostream>

using namespace std;

int main()
{
	int dayBirth, monthBirth, yearBirth;
	int dayTo, monthTo, yearTo;

	birthday:
	cout << "Введите датy рождения (число, месяц, год)\n";
	cin >> dayBirth >> monthBirth >> yearBirth;
	
	if (monthBirth < 1 || monthBirth > 12) {
		cout << "Так не бывает\n";
		goto birthday;
	}
	else {
		int daysInMonth;
		if (monthBirth == 1 || monthBirth == 3 || monthBirth == 5 || monthBirth == 7 || monthBirth == 8 || monthBirth == 10 || monthBirth == 12) {
			daysInMonth = 31;
			if (daysInMonth - dayBirth < 0) {
				cout << "Так не бывает\n";
				goto birthday;
			}
		}
		else if (monthBirth == 4 || monthBirth == 6 || monthBirth == 9 || monthBirth == 11) {
			daysInMonth = 30;
			if (daysInMonth - dayBirth < 0) {
				cout << "Так не бывает\n";
				goto birthday;
			}
		}
		else if (yearBirth % 400 == 0 || (yearBirth % 4 == 0 && yearBirth % 100 != 0)) {
			daysInMonth = 29;
			if (daysInMonth - dayBirth < 0) {
				cout << "Так не бывает\n";
				goto birthday;
			}
		}
		else {
			daysInMonth = 28;
			if (daysInMonth - dayBirth < 0) {
				cout << "Так не бывает\n";
				goto birthday;
			}
		}

		if (1 <= dayBirth && dayBirth <= daysInMonth) {
			goto today;
		}
		else {
			cout << "Так не бывает\n";
			goto birthday;
		}
	}

	today:
	cout << "Введите сегодняшнюю дату (число, месяц, год)\n";
	cin >> dayTo >> monthTo >> yearTo;

	if (monthTo < 1 || monthTo > 12) {
		cout << "Так не бывает\n";
		goto today;
	}
	else {
		int daysInMonth;
		if (monthTo == 1 || monthTo == 3 || monthTo == 5 || monthTo == 7 || monthTo == 8 || monthTo == 10 || monthTo == 12) {
			daysInMonth = 31;
			if (daysInMonth - dayTo < 0) {
				cout << "Так не бывает\n";
				goto today;
			}
		}
		else if (monthTo == 4 || monthTo == 6 || monthTo == 9 || monthTo == 11) {
			daysInMonth = 30;
			if (daysInMonth - dayTo < 0) {
				cout << "Так не бывает\n";
				goto today;
			}
		}
		else if (yearTo % 400 == 0 || (yearTo % 4 == 0 && yearTo % 100 != 0)) {
			daysInMonth = 29;
			if (daysInMonth - dayTo < 0) {
				cout << "Так не бывает\n";
				goto today;
			}
		}
		else {
			daysInMonth = 28;
			if (daysInMonth - dayTo < 0) {
				cout << "Так не бывает\n";
				goto today;
			}
		}

		if (1 <= dayTo && dayTo <= daysInMonth) {
			goto check;
		}
		else {
			cout << "Так не бывает\n";
			goto today;
		}
	}

	check:
	if ((yearTo - yearBirth > 18)||(yearTo - yearBirth == 18 && monthTo - monthBirth >= 0 && dayTo - dayBirth > 0)) {
		cout << "Продано!\n";
	}
	else {
		cout << "Нос не дорос!\n";
	}

	return 0;
}
