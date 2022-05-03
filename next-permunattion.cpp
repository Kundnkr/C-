#include <algorithm>
#include <iostream>
using namespace std;

// next_permuntation simply return next permntation of given nums or cot elemnt

int main()
{
    int arr[] = {1, 2, 3, 4};

    sort(arr, arr + 4);

    cout << "The 3! possible permutations with 3 elements:\n";
    do
    {
        cout << arr[0] << " "
             << "\n";
    } while (next_permutation(arr, arr + 4));

    cout << "After loop: " << arr[0] << ' '
         << arr[1] << ' ' << arr[2] << '\n';

    return 0;
}