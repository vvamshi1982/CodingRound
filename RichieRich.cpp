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
// NOT WORKING CODE

int main(){
    int n=0;
    int k=0;
    int m=0;
    int l=0;
    int temp =-1;
    cin >> n >> k;
    string number;
    cin >> number;
    for (int i=0,j=number.size()-1; i < number.size() && j > 0 && i < j;i++,j--)
    {
          if (number.at(i) != number.at(j))
           m++;
          
    }
    
    if (k - m >=0 )
        l = k-m;
    else
        {
       cout<<  "-1" <<'\n';
        return 0;
    }
    for (int i=0,j=number.size()-1; i < number.size() && j > 0 && i < j && k > 0;i++,j--)
    {
        if (number.at(i) != number.at(j))
        {
            if (k > 2 && l > 0 && number[i] !=9  && number[j] !=9)
            {
                number[i] = '9';
                number[j] = '9';
                l = l-2;
                k = k-2;
                
            }
            else 
            {
            if (number[i] >   number[j])
             number[j] = number[i];
            else
              number[i] = number[j];
               k--;
            }
            
        }
        
    }
    
    
    
    if (k >=  0)
        cout << number ;
     
   
    return 0;
}
