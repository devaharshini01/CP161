#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1], arr2[n2];

    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    int n = n1 + n2;
    int result[n];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    while (i < n1)
        result[k++] = arr1[i++];

    while (j < n2)
        result[k++] = arr2[j++];

    if (n % 2 == 1)
        cout << result[n / 2];
    else
        cout << (result[n / 2 - 1] + result[n / 2]) / 2.0;

    return 0;
}
