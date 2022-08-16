//================================     T E S T     C A S E    G E N E R A T O R     ================================//

#include <bits/stdc++.h>
using namespace std;

int n,k,t;
#define t_MAX 10000
#define n_MAX 200000
#define k_MAX 200000
#define ui_MAX 1000000000
#define aj_MAX 1000000000
#define bj_MAX 1000000000
//we have defined upper limit for all our variables so that rand()%LIMIT will give bumber in the range 
//then I output in the given manner in stdout(we can change to output.txt by uncommenting the ifdef part)
//you can check by setting macros limit to a lower number...right now it appears very unorganized when running due to large values of variables


int main(){
    //uncomment below for outputting in input_for_solution.txt (make files in same directory)
// #ifndef ONLINE_JUDGE
//     freopen("input_for_solution.txt", "w", stdout);
// #endif

    t = rand()%t_MAX;
    cout<<t<<"\n";                       //k
    while(t--){
        n=rand()%n_MAX;                  //n
        k=rand()%n_MAX;                  //k
        cout<<n<<"\n"<<k<<"\n";
        for (int i=0;i<n;i++){
            cout<<rand()%ui_MAX<<" ";    //ui
        }
        for(int i=0;i<k;i++){
            cout<<rand()%aj_MAX<<" "<<rand()%bj_MAX<<"\n";    // aj , bj
        }
    }
}

