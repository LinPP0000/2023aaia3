int diagonalSum(int** mat, int matSize, int* matColSize) {
    int M=matSize;
        int ans=0;
        for(int i=0;i<M;i++){
            ans += mat[i][i];//���W.�k�U
            ans += mat[i][M-1-i];//�k�U.���W
        }
        //��ƤQ�A�n��������(��Ӥe�e�����I)
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    }
