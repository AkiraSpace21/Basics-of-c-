#include <iostream>
using namespace std;
int main() {
    int a=10;
    
    int to_be_set;
    int to_be_reset;
    cout<<"enter bit to be set: \n";
    cin>>to_be_set;
    cout<<"enter bit to be reset: \n";
    cin>>to_be_reset;
    int set=a | (1<<to_be_set);
    int reset= a|(-(1<<to_be_set));
    cout<<reset<<endl;
    cout<<set<<endl;
return 0;
}
