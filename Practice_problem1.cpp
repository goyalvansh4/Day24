#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
        bool flag=true;
        
        vector<int>Occurrences;
        //store unique element
        set<int>s(arr.begin(),arr.end());
        
        //count unique elements
        for(auto i:s){
            int c;
            c = count(arr.begin(),arr.end(),i);
            Occurrences.push_back(c);
        }
        
        for(int i=0;i<Occurrences.size()-1;i++){
            for(int j=i+1;j<Occurrences.size();j++){
                if(Occurrences[i]==Occurrences[j]){
                    flag = false;
                }
            }
        }
        return flag;
    }

int main(){
vector<int>ans={1,2,2,1,1,3};

 if(uniqueOccurrences(ans)){
     cout<<"True"<<endl;
 }
 else{
     cout<<"False"<<endl;
 }

return 0;
}
