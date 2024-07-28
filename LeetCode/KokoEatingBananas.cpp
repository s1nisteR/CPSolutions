#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>

using ll = long long;

using namespace std;


class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        //careful!!! here time += ceil(x / k) will not be the same as ceil(sum of x / k)
        //ll sum = accumulate(piles.begin(), piles.end(), 0);
        ll low = 1, high = *max_element(piles.begin(), piles.end());
        ll k;
        ll time;
        ll result = high;
        while(low <= high)
        {
            k = low + (high - low)/2;
            time = 0;
            for(auto& x : piles)
            {
                time += std::ceil((double)x / k);   //very very careful here!!!
                //for safety, ALWAYS CAST TO DOUBLE BEFORE PASSING TO CEIL
            }

            //cout << "k: " << k << " Low: " << low  << " High: " << high << " Time: " << time <<"\n";
            if(time > h)
            {
                low = k + 1;
            }
            else
            {
                //process this potential result since time < h
                result = min(result, k);    //minimize potential results
                high = k - 1;
            }
        }
        return result;
    }
};


int main()
{

    vector<int> piles = { 873375536,395271806,617254718,970525912,634754347,824202576,694181619,20191396,886462834,442389139,572655464,438946009,791566709,776244944,694340852,419438893,784015530,588954527,282060288,269101141,499386849,846936808,92389214,385055341,56742915,803341674,837907634,728867715,20958651,167651719,345626668,701905050,932332403,572486583,603363649,967330688,484233747,859566856,446838995,375409782,220949961,72860128,998899684,615754807,383344277,36322529,154308670,335291837,927055440,28020467,558059248,999492426,991026255,30205761,884639109,61689648,742973721,395173120,38459914,705636911,30019578,968014413,126489328,738983100,793184186,871576545,768870427,955396670,328003949,786890382,450361695,994581348,158169007,309034664,388541713,142633427,390169457,161995664,906356894,379954831,448138536 };
    Solution sln;

    cout << sln.minEatingSpeed(piles, 943223529) << "\n";

    return 0;
}
