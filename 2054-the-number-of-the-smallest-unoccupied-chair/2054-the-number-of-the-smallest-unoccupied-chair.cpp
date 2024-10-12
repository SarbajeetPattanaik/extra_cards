class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        
                vector<pair<int,int>> v1;
        int j=0;
        for(auto i:times){
            pair<int,int> temp1;
            temp1.first=i[0];
            temp1.second=j;
            v1.push_back(temp1);
            j++;
        }
        sort(v1.begin(),v1.end());

        for(auto i:v1){
            cout<<i.first<<" "<<i.second<<endl;

        }

        // int arr_target=times[targetFriend][0];
        // int dep_target=times[targetFriend][1];

        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<times.size();i++){
            pq.push(i);
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> >pq1;
        for(auto i:v1){
            if(!pq1.empty()){
              while(pq1.top().first<=i.first && !pq1.empty())  
              {
                pq.push(pq1.top().second);
                pq1.pop();
              }
            }

            int chair=pq.top();
            pq.pop();
            if(i.second==targetFriend){
                return chair;
            }
            // else{
                pq1.push({times[i.second][1],chair});
            // }

            

        }

        return pq.top();
        // pq.pop()÷;
        // cout<<pq.top();




        // return 0;
    }
};