#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> prices){
	int maxProfit=0;
	int bestBuy=prices[0];	//Min price at which we can buy stock
	
	for(int i=1; i<prices.size(); i++){
		if(prices[i]>bestBuy){
			maxProfit=max(maxProfit, prices[i]-bestBuy);
		}
		bestBuy=min(bestBuy, prices[i]);
	}
	return maxProfit;
}

int main(){
	vector <int> prices={7,1,5,3,6,4};
	int profit=maxProfit(prices)
	cout<<profit;
	return 0;
}
