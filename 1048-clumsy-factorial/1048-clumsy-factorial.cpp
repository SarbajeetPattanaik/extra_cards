class Solution {
public:
    int clumsy(int n) {
        int &N=n;
            if (N == 1)
            return 1;
            if (N == 2)
            return 2;
            if (N == 3)
            return 6;
            if (N == 4)
            return 7;
            if (N % 4 == 1)
            return N + 2;
            if (N % 4 == 2)
            return N + 2;
            if (N % 4 == 3)
            return N - 1;
            return N + 1;
        // vector<int> a(n,0);
        // int flag=0;
        // // if(n==0 || n==1){
        // //     return 1;
        // // }
        // int fact=n;
        // for(int i=n-1;i>=1;i--){
        //     cout<<fact<<" "<<flag<<endl;
        //     if(flag==0){
        //         fact=fact*i;
        //         flag=1;
        //     }
        //     else if(flag==1){
        //         fact=fact/i;
        //         flag=2;
        //     }
        //     else if(flag==2){
        //         fact=fact+i;
        //         flag=3;
        //     }
        //     else if(flag==3){
        //         if(i>1){
        //         fact=fact-i*(i-1);
        //         flag=1;
        //         }
        //         else{
        //             fact=fact-i;
        //             flag=0;

        //         }
        //         // flag=0;
        //     }

        // }
        // return fact;

        // int op_r=(n-1)%3;
        // int op=(n-1)/3;
        // int fact=0;
        // while(op--){

        // }

        
    }
};