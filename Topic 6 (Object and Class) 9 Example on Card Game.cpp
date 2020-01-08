#include <iostream>

using namespace std;

enum Suit { Clubs, Diamond, Hearts, Spaders };
const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
private:
	int number;
	Suit suit;
public:
	card()
	{}
	card(int n, Suit s) : number(n), suit(s)
	{}
	void display();
	bool isEqual(card);
};

void card::display() {
	if (number >= 2 && number <= 10) {
		cout << number;
	}
	else {
		switch (number) {
			case jack: cout << " ����� "; break;
			case queen: cout << " ���� "; break;
			case king: cout << " ������ "; break;
			case ace: cout << " ��� "; break;
		}
		switch (suit) {
			case Clubs: cout << " ���� "; break;
			case Diamond: cout << " ���� "; break;
			case Hearts: cout << " ����� "; break;
			case Spaders: cout << " ��� "; break;
		}
	}
}

bool card::isEqual(card c2) {
	return (number == c2.number && suit == c2.suit) ? true : false;
}

int main() {
	setlocale(LC_ALL, "Rus");
	card temp, chosen, prize;
	int position;
	cout << "\n����� 1: ";
	card card1(7, Clubs);
	card1.display();
	cout << "\n����� 2: ";
	card card2(jack, Hearts);
	card2.display();
	cout << "\n����� 3: ";
	card card3(ace, Spaders);
	card3.display();

	temp = card1;
	card1 = card2;
	card2 = temp;
	cout << "\n����� 1 �������� � ������ 2\n";
	temp = card3;
	card3 = card1;
	card1 = temp;
	cout << "����� 3 �������� � ������ 1\n";
	cout << "�� ����� ������� ������:";
	card1.display();
	cin >> position;
	prize = card1;
	switch (position) {
	case 1: chosen = card1; break;
	case 2: chosen = card2; break;
	case 3: chosen = card3; break;
	}
	if (chosen.isEqual(prize)) {
		cout << "\mWon";
	}
	else {
		cout << "\nLost";
	}
	cout << "�� ������� ����� ";
	chosen.display();
	cout << endl;
	system("pause");
}