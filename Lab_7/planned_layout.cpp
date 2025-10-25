#include <iostream>
#include <vector>
using namespace std;


int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void planned_debugging() 
{
    int q, b;
    cout << "Enter q and b: ";
    cin >> q >> b;

    vector<int> result;

    for (int i = 1; i < q; ++i) {
        int digitSum = sumOfDigits(i);
        if (digitSum * digitSum == b) {
            result.push_back(i);
        }
    }

    cout << "Numbers less than " << q << ", square of the sum of the digits of which is equal to " << b << ":\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

}
