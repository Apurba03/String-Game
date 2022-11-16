#include <stdio.h>

int main(void) {
	int t;
    printf("Enter the number of terms:");
	scanf("%d",&t);
	while(t--)
	{
	    int len,flag=0,i,j,count;
        printf("Enter the length of the string:");
	    scanf("%d",&len);
	    char a[len];
        printf("Enter the string:");
	    scanf("%s",&a);
	    if(len%2==0)
	    {
    	    for(i=0;i<len;i++)
            {
                count=1;
                if(a[i]!=NULL)
                {
                        
                    for(j=i+1;j<len;j++)
                    {
                        if(a[i]==a[j])
                        {
                            count+=1;
                            a[j]=NULL;
                        }
                            
                    }
                    if(count%2!=0)
                    {
                        printf("No\n");
                        break;
                    }
                }
            }
            if(i==len)
                printf("Yes\n");
	    }
        
        else
            printf("No\n");
	    
	}
	return 0;
}