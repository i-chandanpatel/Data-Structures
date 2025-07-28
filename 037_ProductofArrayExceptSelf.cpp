#include<iostream>
#include<vector>
using namespace std;

//Product of array Except itself
//a=[1,2,3]                for a[0]=2*3        for a[1]=1*3

//Using division
vector<int> productExceptSelf(vector<int>& nums){
        int product=1, zeroCount=0;

        for(int i=0; i<nums.size(); i++){
                if(nums[i]!=0) product*=nums[i];
                else zeroCount++;
        }

        vector<int> ans(nums.size(), 0);

        if(zeroCount>1) return ans;

        for(int i=0; i<nums.size(); i++){
                if(zeroCount==0) ans[i]=product/nums[i];
                else if(nums[i]==0) ans[i]=product;
        }

        return ans;
}

//Brute Force
vector<int> productExceptSelf1(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                        if(i!=j)        ans[i]*=nums[j];
                }
        }
        return ans;
}

//Prefix and Suffix Arrays
vector<int> productExceptSelf2(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(n);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        for(int i=1; i<n; i++){
                prefix[i]=prefix[i-1]*nums[i-1];
        }

        for(int i=n-2; i>=0; i--){
                suffix[i]=suffix[i+1]*nums[i+1];
        }

        for(int i=0; i<n; i++){
                ans[i]=prefix[i]*suffix[i];
        }
        return ans;
}

//Optimal Running Time=O(n) & Space Complexity=O(1)        if we not consider vector ans
vector<int> productExceptSelf3(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(n,1);
        int suffix=1;

        //Prefix
        for(int i=1; i<n; i++){
                ans[i]=nums[i-1]*ans[i-1];
        }

        //Suffix
        for(int i=n-1; i>=0; i--){
                ans[i]*=suffix;
                suffix*=nums[i];
        }

        return ans;
}

void printVector(vector<int>& vec){
        for(int i=0; i<vec.size(); i++){
                cout<<vec[i]<<" ";
        }
        cout<<endl;
}

int main(){
        vector<int> nums = {1,2,3,4};

        cout<<"Original array: ";
        printVector(nums);

        cout<<"Using Division: ";
        printVector(productExceptSelf(nums));

        cout<<"Brute Force: ";
        printVector(productExceptSelf1(nums));

        cout<<"Prefix + Suffix: ";
        printVector(productExceptSelf2(nums));

        cout<<"Optimal O(1) Space: ";
        printVector(productExceptSelf3(nums));

        return 0;
}
