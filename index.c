#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define strLeng 50
int main(){
    int a,b,n,m,bitN,s,res,k,bitMres,f=0;
    while(scanf("%d%d",&a,&b)!=EOF){
        while(a<=b){
            bitN = a;n=0;res=0;
            while(bitN!=0){
                n++;bitN/=10;
            }
            
            bitN = a;
            res = 0;
            for(k=0;k<n;k++){
                s = bitN%10;
                bitMres = bitN%10;
                for(m=0;m<n-1;m++){
                    bitMres*=s;
                }
                res+=bitMres;
                bitN/=10;
            }
            if(a==res){
                printf("%d ",a);
                f=1;
            }
            a++;
        }
    }
    if(f==0)printf("none");
    return 0;
}