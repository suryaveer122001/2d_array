//this is my first repositary
//I am Tushar Gupta

#include<iostream>
using namespace std;
#defin M 3
#defin N 3 
int main(){
  int a[M][N];

  for(int i=0; i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"Enter the a["<<i<<"]["<<j<<"] element:";
        cin>>a[i][j];
    }
    }

    cout<<"\n\nDisplaying all the elements:\n";
  // it will display all the elements.

    for(int m=0; m<3;m++){
       for(int n=0;n<3;n++){
          cout<<"a["<<m<<"]["<<n<<"]="<<a[m][n]<<endl;
    }
  }
  return 0;
}
