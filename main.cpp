#include <iostream>
#include "omp.h"

using namespace std;

int main(){
    int k;
    double rank;
    int sum = 0;
    int n;
    if (!(cin >> k)){
        cout << "Не число!" << endl;
        return -1;
    }
    if (!(cin >> n)){
        cout << "Не число!" << endl;
        return -1;
    }
#pragma omp parallel num_threads(k) private(rank) reduction(+:sum)
    {
#pragma omp for
        for (int i = 1; i <= n; i++)
        {
            rank = omp_get_thread_num();
#pragma omp critical
            {
                sum += i;
            }
        }
#pragma omp critical
        {
            cout << "[" << rank << "]: Sum = " << sum << endl;
        }
    }
    cout << "Sum = " << sum << endl;
    return 0;
}
