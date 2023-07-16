#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Atm {
private:
	string pin_num;
	vector<int> Card;
public:
	Atm(vector<int> T_Card):Card(T_Card){}

	void work() {
		int Account_num;
		int option;
		bool A = true;
		while (true) {
			cout << "Your card is inserted!  Please enter you pin number (Type \"Correct\") : ";
			cin >> pin_num;
			if (pin_num == "Correct") {
				while (true) {
					cout << "Select your account: ";
					cin >> Account_num;
					if (Account_num > Card.size() || Account_num<1)
						cout << "Account num is not correct. Type your right account\n\n";
					else {
						cout << "You selected " << Account_num << " account \n\n";
						break;
					}
				}
				break;
			}
			else
				cout << "Sorry. You should type pin number again.\n";
		}
		while (A) {
			cout << "You can 1.See Balance  2.Deposit  3.Withdraw  4.Close  :  ";
			cin >> option;
			switch (option) {
			case 1:
				Check_Balance(Account_num-1);
				break;
			case 2:
				int deposit_money;
				cout << "Type the amount of money that you want to deposit: ";
				cin >> deposit_money;
				Deposit(Account_num-1, deposit_money);
				break;
			case 3:
				int draw_money;
				cout << "Type the amount of money that you want to withdraw: ";
				cin >> draw_money;
				Withdraw(Account_num-1, draw_money);
				break;
			case 4:
				cout << "Thank you. Have a good day\n";
				A = false;
				break;
			}

		}
	}
	void Check_Balance(int Account_num) {
		cout << "Your account balance is " << Card[Account_num] << " $. \n\n";
	}
	void Deposit(int Account_num, int money) {
		Card[Account_num] += money;
		cout << "Deposited " << money << "$.\n\n";
	}
	void Withdraw(int Account_num, int money) {
		if (Card[Account_num] - money < 0) 
			cout << "You have not much money.\n\n";

		else {
			Card[Account_num] -= money;
			cout << "Withdrew " << money << "$.\n\n";
		}
	}
};

int main() {
	vector<int> card1{ 100,123,222 };
	Atm acct1(card1);
	acct1.work();
}