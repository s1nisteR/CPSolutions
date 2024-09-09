#include <string>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <tuple>

using namespace std;

class TimeMap 
{
public:
    TimeMap() 
    {

    }
    
    void set(string key, string value, int timestamp) 
    {
        _map[key].first.push_back(timestamp);
        _map[key].second[timestamp] = value;
    }
    
    string get(string key, int timestamp) 
    {
        //check whether the key exists or not
        if(_map.count(key) == 0) return "";


        int l = 0, r = _map[key].first.size() - 1;
        int mid;
        if(timestamp <  _map[key].first[l]) return "";
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(_map[key].first[mid] == timestamp)
            {
                return _map[key].second[timestamp];
            }
            else if(_map[key].first[mid] > timestamp)
            {
                //search to the left
                r = mid - 1;
            }
            else
            {
                //search to the right
                l = mid + 1;
            }
        }
        return _map[key].second[_map[key].first[r]];
    }
private:
    unordered_map<string, pair<vector<int>, unordered_map<int, string> >  > _map;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */


int main()
{
    TimeMap* obj = new TimeMap();
    obj->set("love", "high", 10);
    obj->set("love", "low", 20);

    cout << obj->get("love", 5) << "\n";
    cout << obj->get("love", 10) << "\n";
    cout << obj->get("love", 15) << "\n";
    cout << obj->get("love", 20) << "\n";
    cout << obj->get("love", 25) << "\n";
    return 0;
}