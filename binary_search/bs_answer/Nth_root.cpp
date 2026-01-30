#include<cmath>
#include<iostream>

using namespace std;

class Solution {
public:
  int NthRoot(int N, int M) {
              int low = 1 , high = M;

            while(low <= high)
            {
              long long mid = low + (high - low)/2;
              long long x = pow(N , mid);

              if(x == M) return mid;
              else if(x > M) high = mid -1;
              else low = mid +1;
            }

            return -1;


    }
};

int main()
{
    Solution solution;
    int n = 3, m = 27;
   int result =  solution.NthRoot(n , m);
   cout<<result<<endl;
}
