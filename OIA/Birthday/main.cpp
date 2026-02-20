#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main()
{

    auto hoy = floor<days>(system_clock::now());
    cout << hoy << endl;
    return 0;
}
