class Solution {
public:
    string convertToTitle(int columnNumber) {
        // map<int,char> mp;
        // for(int i=1;i<=26;i++){
        //     mp[i]= mp[i] = static_cast<char>('A' + i - 1);
        //     cout<<mp[i]<<" "<<endl;
        // }

        // long r,temp=columnNumber,carry=0;

        // while(temp>0){
        //     temp=temp/26;

        // }
        string res="";
        while(columnNumber)
        {
            columnNumber--;
            int digit=columnNumber%26+65;
             columnNumber=columnNumber/26;
             
            res=(char)(digit)+res;
            cout<<res<<endl;
        }
        return res;


        // return "a";

    }
};