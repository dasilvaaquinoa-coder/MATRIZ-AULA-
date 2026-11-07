#include<stdio.h>

int main(){

    int mat[3][3];
    int a[3] , b[3], c[3];


    mat[0][0] = 1;
    mat[0][1] = 2; 
    mat[0][2] = 3;

    mat[1][0] = 4; 
    mat[1][1] = 5;
    mat[1][2]=  6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2]= 9 ;



    for(i=0 i<3; i++){ for(j=0; j<3; j++){

        printf("a %d %d: " i,j);
        scanf("%d" , &mat a[3][3]);
    }

    }

    for(i=0; i<3; i++){ for(j=0; j<3; j++){

        printf("b %d %d: "i,j);
        scanf("%d" ,&mat b[3][3]);
        }
    }

    for(i=0;  i<3; i++){ for(j=0; j<3; j++){

        printf("c %d %d: "i,j);
        scanf("%d" , &mat c[3][3]);
        
    }
    }

    for(i=0; i<3; i++){  for( j=0; j<3; j++){

        c[i][j] = a[i][j]+ b[i][j];
    }
 
        printf("%d" \n);

        return 0;
    }


}
