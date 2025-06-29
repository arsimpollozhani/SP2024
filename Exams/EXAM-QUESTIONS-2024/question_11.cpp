//Created: question_11.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n, m, a[100][100], b[100][100], size_N;

    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>size_N;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+size_N-1<n && j+size_N-1<m){
                int suma = 0;
                for(int k=0; k<size_N; k++){
                    suma += a[i+k][j];
                    suma += a[i+k][j+size_N-1];

                    if(k>0 && k<size_N-1){
                        suma += a[i+k][j+k];
                    }
                }
                b[i][j] = suma;
            }
            else{
                b[i][j] = a[i][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}