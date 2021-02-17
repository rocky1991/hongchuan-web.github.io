#include <iostream>
#include <map>
#include <iterator>
#include <unordered_map>
using namespace std;

int main() {
	
	map<int, int> a_map;

        unordered_map<int, int> prevMap;
	prevMap[0] = 5;		
	prevMap[1] = 7;
	prevMap.insert(pair<int,int> (21,32));
	prevMap[2] = 9;
	prevMap.insert(make_pair(12,23));
	for (auto x: prevMap) {
		cout << "key is " << x.first << ", and value is " << x.second << endl;
	}
	
	cout << "++++++++++";
	cout << prevMap.count(1) << endl;

	map<int, int>::iterator itr;

	a_map[0] = 20;
	a_map[2] = 23;
	a_map.insert(pair<int, int> (13,23));
	a_map.insert(make_pair(15,51));

	for(itr = a_map.begin(); itr != a_map.end(); ++itr) {
		cout << "first is " << itr->first << ", and second is " << itr->second << endl;
	}
	return 0;
}
