#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void kadanes_algoritham(vector<int>& mem)
{
	int max=INT_MIN,total=0;
	for(int i=0;i<mem.size();i++)
	{
		total=total+mem[i];
		if(max<total){
			max=total;
		}
		
		if(total<0){
			total=0;
		}	
		
	}
	cout<<"The Max Sum is "<<max<<endl;
	
}

int main()
{
	
    vector<int> a {1,2,3,-2,5};
    vector<int> b {-1,-2,-3,-4};
    vector<int> c {-2, -3, 4, -1, -2, 1, 5, -3};
    
    kadanes_algoritham(a);
    kadanes_algoritham(b);
    kadanes_algoritham(c);
}
