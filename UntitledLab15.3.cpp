void showData(double *dPtr,int N,int M){
    cout << fixed << setprecision(2);
    for(int i = 0; i < N*M; i++){
        cout << *(dPtr+i);
        if((i+1)%M==0) cout << endl;
        else cout << " ";
    }
}
