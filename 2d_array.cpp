#include<iostream>
using namespace std;

int main(){
  int a[3][3];

  for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"Enter the a["<<i<<"]["<<j<<"] element:";
        cin>>a[i][j];
    }
    }

    cout<<"\n\nDisplaying all the elements:\n";

    for(int i=0; i<3;i++){
       for(int j=0;j<3;j++){
          cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
    }
  }
  return 0;
}