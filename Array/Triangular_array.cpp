#include<bits/stdc++.h>

int main() {
    int **arr = new int *[5];

    for (int i = 1; i <= 5; i++)
        arr[i - 1] = new int[i];

    for (int i = 0; i < 5; i++)
        for (int j = 0; j <= i; j++)
            std::cin >> arr[i][j];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++)
            std::cin >> arr[i][j];
        std::cout << std::endl;
    }
}
