#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	//declaring umap to be of
	//<int, int> type key will be of INTEGER type
	//and mapped VALUE will be of int type
	unordered_map<int, int> umap;

	umap[0] = 9;
	umap[1] = 7;
	umap[2] = 5;

	//traversing unordered map
	for(auto x : umap)
	{
		cout << x.second << endl; 
		// prints last to first
	}
}
