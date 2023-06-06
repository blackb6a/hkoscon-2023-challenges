#include <bits/stdc++.h>

using namespace std;

// 10 ^ 18 + 3, this way plus wont overflow
#define MOD 1000000000000000003ull

unsigned long long fib(unsigned int i) {
    if (i == 0) {
        return 0;
    }
    unsigned long long prev = 0, val = 1;
    i--;
    for (unsigned int j = 0; j < i; j++) {
        unsigned long long tmp = val;
        val = (val + prev) % MOD;
        prev = tmp;
    }
    return val % MOD;
}

uint key[] = {
    1, 4, 2, 7, 15, 17, 31, 125, 255, 13283,
    37430, 50731, 31795, 3576, 30323, 50276, 44420, 45033, 6161, 37434,
    43354, 37137, 26063, 55410, 17757, 5197, 10497, 65305, 36190, 9589,
    17139, 63125, 26182, 22881, 62993, 19541, 34071, 8824, 43362, 15255,
    53597, 45432, 56954, 33126, 33099, 12915, 57540, 48526, 38230, 2246,
    41792, 43843, 61986, 26259, 1820, 36372, 38254, 56308, 950, 7037,
    23422, 33922, 41248, 63769, 50560, 12846, 27394, 43220
};
char const flag[] = {
    (char)105, (char)104, (char)98, (char)104, (char)16, (char)73, (char)239, (char)85, (char)202, (char)124, (char)177, (char)88, (char)36, (char)67, (char)240, (char)128, (char)47, (char)0, (char)194, (char)57, (char)4, (char)226, (char)221, (char)165, (char)37, (char)163, (char)76, (char)148, (char)156, (char)17, (char)161, (char)61, (char)232, (char)64, (char)43, (char)137, (char)250, (char)178, (char)192, (char)88, (char)202, (char)165, (char)63, (char)79, (char)177, (char)61, (char)168, (char)213, (char)90, (char)217, (char)158, (char)251, (char)246, (char)169, (char)2, (char)90, (char)236, (char)114, (char)2, (char)210, (char)187, (char)45, (char)41, (char)176, (char)19, (char)183, (char)3, (char)15
};

int main() {
    for (int i = 0; i < 68; i++) {
        unsigned long long val = fib(key[i]);
        int key = val % 256;
        cout << char(int(flag[i]) ^ key);
    }
    cout << endl;
}

// flag: hkcert22{d0-y0u-u53-m3m01z4t1oN-0r-ju5t-i7i73r4t1v3-0R-ju5t-g00g13?}
