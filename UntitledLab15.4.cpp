

void randData(double *dPtr,double N,double M){
    for(int i = 0; i < N*M; i++){
        *(dPtr+i) = (rand()%101)*0.01;
    }
}
