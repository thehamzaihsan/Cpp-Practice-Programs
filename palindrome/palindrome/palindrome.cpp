#include <iostream>
using namespace std;

bool isPalindrome(int num) {
	int rev_num{0}, rem;
	int og_num = num;
	while (num > 0) {
		rem = num % 10;
		num = num / 10;
		rev_num = (rev_num * 10) + rem;
	}
	if (rev_num == og_num) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int num;
	cin >> num;

	cout << isPalindrome(num);

}
