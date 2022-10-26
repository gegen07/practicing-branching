main(){
    int num,aux,i,j;
    int v[5];
    for(i=0;i<5;i++){
        scanf("%d",&num);
        v[i] = num;
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(v[i] < v[j]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",v[i]);
    }

}