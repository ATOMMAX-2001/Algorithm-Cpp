#include<iostream>
#include<vector>
#include<map>
using namespace std;


void find_duplicate(vector<int>& mem)
{
	map<int,int> hash;
	for(int i=0;i<mem.size();i++)
	{
		auto it=hash.find(mem[i]);
		//found an element in the hash map
		if(it!=hash.end())
		{
			it->second++;
		}else{
			hash.insert(pair<int,int>(mem[i],1));
		}
	}
	if(mem.size()==hash.size()){cout<<"-1 ";cout<<endl;}
	else{
		for(auto it=hash.begin();it!=hash.end();it++){
			if(it->second>1){
				cout<<it->first<<" ";
			}
		}
		cout<<endl;
	}

}
int main()
{
	
    vector<int> a{0,3,1,2};
    vector<int> b{2,3,1,2,3};
    vector<int> c{1,5,10,1,4,3,2,3,1,2,3};
    find_duplicate(a);
    find_duplicate(b);
    find_duplicate(c);
 
}
