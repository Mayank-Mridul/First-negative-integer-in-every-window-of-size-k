#include<stdio.h>
int main()
{
    
    
    int t;
    
    scanf("%d", &t);
    
    while(t--){
        
        int s;
        scanf("%d", &s);
        
        int a[s];
        
        for(int i=0;i<s;i++){
            scanf("%d", &a[i]);
        }
        
        int w;
        
        scanf("%d", &w);
        
        
        for(int i=0;i<(s-w+1);i++){
            
            int k =0,z = i,flag = 0;
            
            while(k<w){
                if(a[z]<0){
                    printf("%d ", a[z]);
                    flag = 1;
                    break;
                }
                else{
                z++;
                k++;
                }
                
            }
            
            if(flag==0)
            printf("0 ");
        }
        
        printf("\n");
        
    }
	return 0;
}