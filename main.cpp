#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

//=========================================
// problem 1
int arraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    auto start = high_resolution_clock::now();


    int arr[n];
    arraySum(arr, n);


    auto end = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(end - start);
    cout <<"Time taken :"<< duration.count()<<"microseconds" << endl;

    return 0;
}
