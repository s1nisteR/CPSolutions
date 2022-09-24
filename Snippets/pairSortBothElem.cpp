//Sorting a vector or array of pairs, considering the order of BOTH the first and second elements



#include <utility>
#include <tuple>
#include <algorithm>
#include <vector>

using namespace std;

//checking order of first element then checking order of second element
bool sortFuncAscending(const pair<int, int>& p1, const pair<int, int>& p2)
{
  return tie(p1.first, p1.second) < tie(p2.first, p2.second);
}
//to check order of second element first and then first element
//just do tie(p1.second, p1.first) instead 
//reverse sign if you need descending order


int main()
{
  vector<pair<int, int> > vpii;
  vpii.push_back({2, 3});
  vpii.push_back({2, 4});
  
  sort(vpii.begin(), vpii.end(), sortFuncAscending); //passing our custom function into sort
  return 0;

}
