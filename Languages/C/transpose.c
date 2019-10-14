#include <stdio.h>
#include <stdlib.h>

int main(){
  int t,i,j;
  scanf("%d",&t);
  while (t--) {
    int m,n;
    scanf("%d %d",&m,&n );
    int a[m][n];
    int t[n][m];
    //printf("%d %d\n",m,n );

    for ( i=0;i<m;i++) {
      for ( j=0;j<n;j++){
        scanf("%d",&a[i][j]);
      }
    }
    /* for ( i=0;i<m;i++) {

      for ( j=0;j<n;j++){
        printf("%d ",a[i][j] );
      }
      printf("\n");
    }*/
    for ( i=0;i<m;i++) {
      for ( j=0;j<n;j++){
         t[j][i] =  a[i][j];
      }
    }
    for ( i=0;i<n;i++) {

      for ( j=0;j<m;j++){
        printf("%d ",t[i][j] );
      }
      printf("\n");
    }
  }
  return 0;
}
