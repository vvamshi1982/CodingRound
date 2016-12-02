#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    int count=0;
    cin >> s;
    for (int i=0; i < s.size();i++)
    {
        if (s.at(i) >= 65 and s.at(i) <=90)
        count++;
       
    }
    cout << count+1;
    return 0;
}
