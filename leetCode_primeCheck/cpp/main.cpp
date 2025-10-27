#include <cmath>
#include <vector>
#include <iostream>
using namespace std;
class  Solution
{
public:
        bool isPrime(int n)
         {
            if (n <= 1) return false;
            if (n <= 3) return true;
            if (n % 2 == 0 || n % 3 == 0) return false;

          
            // 6k ± 1 optimization — essential for large inputs
            for (int i = 5; i*i <= n; i += 6)
                if (n % i == 0 || n % (i + 2) == 0)
                    return false;
            return true;
         }
};
         
int main() {
    Solution sol;
    vector<int> tests = {2, 3, 17, 25, 49, 81,97};
    
    for (int num : tests) {
        cout << num << ": " << (sol.isPrime(num) ? "Prime" : "Composite") << endl;
    }
    return 0;
}

