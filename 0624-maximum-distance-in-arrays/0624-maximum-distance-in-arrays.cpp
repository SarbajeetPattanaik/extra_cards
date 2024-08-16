class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        // int n=arrays.size();
        // map<int,int> min1,max1;
        // // map<int,int> :: iterator it_min,it_max;

        // for(int i=0;i<n;i++){
        //     int m=arrays[i].size();
        //     // min.push_back(arrays[0]);
        //     // max.push_back(arrays[m-1]);
        //     min1[arrays[i][0]]=i;
        //     max1[arrays[i][m-1]]=i;
        // }
        // auto it_min=min1.begin();
        // auto it_max=max1.rbegin();

        // int res=0;
        // // for(it_min=min.begin();it_min!=min.end();it_min++){
        // //     for(it_max=max.rbegin();it_min!=max.rend();it_max++){
        // //         if(it_)
        // //     }
        // // }

        // while(it_min!=min1.end()){

        //     if(it_min->second!=it_max->second){
        //         cout<<it_max->first<<" "<<it_min->first;
        //         res=max(res,abs(it_max->first-it_min->first));
        //         break;
        //     }
        //     else{
        //         it_min++;
        //     }
        // }
        // it_min=min1.begin();
        // while(it_max!=max1.rend()){
        //     if(it_min->second!=it_max->second){
        //         cout<<endl<<it_max->first<<" "<<it_min->first;
        //         res=max(res,abs(it_max->first-it_min->first));
        //         break;
        //     }
        //     else{
        //         it_max++;
        //     }

        // }

        // return res;
        int n=arrays.size();
        if(n==0){
            return 0;
        }
        int min1=arrays[0][0];
        int max1=arrays[0].back();
        int res=0;
        for(int i=1;i<n;i++){
            res=max(res,max(abs(max1-arrays[i][0]),abs(arrays[i].back()-min1)));
            min1=min(min1,arrays[i][0]);
            max1=max(max1,arrays[i].back());
        }

        return res;



        
    }
};