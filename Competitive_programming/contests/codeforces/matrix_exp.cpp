void matpow(long long Z[][2],int n,long long ans[][2])

//find ( Z^n ) and return result in ans
{

long long temp[2][2];

//assign ans= the identity matrix

ans[0][0]=1;

ans[1][0]=0;

ans[0][1]=0;

ans[1][1]=1;

int i,j;

while(n>0)

{

if(n&1)

{
matmult(ans,Z,temp);

for(i=0;i<2;i++)

for(j=0;j<2;j++)

ans[i][j]=temp[i][j];

}
matmult(Z,Z,temp);

for(i=0;i<2;i++)

for(j=0;j<2;j++)

Z[i][j]=temp[i][j];

n=n/2;

}
return;

}