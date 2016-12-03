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
    string S;
    int i,Count,j;
    char TempStr[]="SOS";
    cin >> S;
    int n = S.size();
    i=j=Count=0;
    while (i< n)
    {
      for (j=0;j < 3;)
      {
          if (S.at(i) != TempStr[j])
          Count++;
          j++;
          i++;
      }
    }
    cout << Count;
    return 0;
}
