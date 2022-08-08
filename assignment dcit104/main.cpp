#include <iostream>
using namespace std;
// 10970794 SALLY AFRIYIE QUANSAH.
int main(){
int num, i, limit, sum = 0;

    // Take input from user
    cout << "Find sum of prime numbers upto : ";
    cin >> limit;

    for(num = 2; num <= limit; num++) {

        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }

        // If the number is prime then add it.
        if(i != num) {
            sum += num;
        }
    }

    cout << endl << "Sum of all prime numbers upto " << limit << " : " << sum;


return 0;
}
