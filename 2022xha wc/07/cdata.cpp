#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
using namespace std;
int a[100000010];
int main()
{
    int fidx = 0;
    int fn, n = 0, m = 0;
    cin >> fn;

    unsigned seed = time(0);
    srand(seed);
    for (fidx = 1; fidx <= fn; fidx++)
    {
        string fname = to_string(fidx) + ".in";
        ofstream of(fname);

        if (of.is_open())
        {

            //数据生成代码开始
            int a,b;
            //m = 100 + rand()%100;
            a =1+rand()%10000;
            b = a +rand()%100000000;
            of<<a<<' '<<b<<endl;
            
            /*for(int i =0;i <n;i++){
                    of<<p<<' '<<w<<' '<<s<<endl;                
            }
            */

            //数据生成代码结束
        }
        of.close();
    }

    return 0;
}