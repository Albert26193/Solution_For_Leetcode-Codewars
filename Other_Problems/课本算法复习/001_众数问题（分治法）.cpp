#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>

#define Array_size 1000
using namespace std;

// 记录其重数
int times = 0;
int Gen_random(int random_size, int random[]);
int Find_Maxcout(int random[], int left, int right);
int Count_mid(int random[], int random_lenth, int mod);

int Gen_random(int random_size, int random[]) {
    int i = 0;
    srand((unsigned)time(NULL));

    for (i = 0; i < random_size; i++) {
        random[i] = rand() % 100;
    }

    return 0;
}

void Find_Maxcount(int random[], int left, int right) {
    int mid = (left+right)/2;
    int max_count = Count_mid(random,right-left + 1,1);
    int left = Count_mid(random,right-left +1,2);
    if(max_count )
}

// 全部遍历有点慢，此处使用双指针法
int Count_mid(int random[], int random_length, int mod) {
    int mid = random_length / 2;
    int left = mid;
    int right = mid;

    while ((random[right] == random[mid]) && (right < random_length)) {
        right++;
    }
    right--;

    while ((random[left] == random[mid]) && (left > 0)) {
        left--;
    }
    left++;

    if (mod == 1) {
        return right - left + 1;
    } else {
        return left;
    }
}

int main() {
    int random[Array_size];
    int i = 0;

    Gen_random(Array_size, random);
    sort(random, random + Array_size);

    // for (i = 0; i < Array_size; i++) {
    //     cout << random[i] << " ";
    //     if ((i + 1) % 10 == 0) {
    //         cout << endl;
    //     }
    // }

    Find_Maxcount(random, 0, Array_size);

    return 0;
}