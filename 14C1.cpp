#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int z[29]={1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103};
class AplusB_on_Mars {
	public:
		AplusB_on_Mars(char x[], char y[]) {
			strcpy(this->x, x);
			strcpy(this->y, y);
			memset(a,0,sizeof(a));
	        memset(b,0,sizeof(b));
	        memset(c,0,sizeof(c));
	        memset(d,0,sizeof(d));
		}
		~AplusB_on_Mars() {}
		
		void getmarsnum() {
			m=strlen(x);
	        j=0;
	        for(i=0;i<m;i++)
	        {
	            if(x[i]!=',')
	            {
	                a[j]*=10;a[j]+=x[i]-'0';
	            }
	            else
	            j++;
	        }
	        for(i=0;i<=j;i++)
	        {
	            c[i]=a[j-i];
	        }
	        
	        n=strlen(y);
	        j=0;
	        for(i=0;i<n;i++)
	        {
	            if(y[i]!=',')
	            {
	                b[j]*=10;b[j]+=y[i]-'0';
	            }
	            else
	            j++;
	        }
	        for(i=0;i<=j;i++)
	        {
	            d[i]=b[j-i];
	        }
	        for(i=0;i<27;i++)  
	        {
	            c[i]+=d[i];
	            if(c[i]>=z[i+1])   
	            {
	                c[i+1]++;
	                c[i]-=z[i+1];
	            }
	        }
	        for(i=29;i>=0;i--)
	        {
	            if(c[i]!=0)
	            {
	                o=i;break;
	            }
	        }
	        for(i=o;i>0;i--)
	        printf("%d,",c[i]);
	        printf("%d\n",c[0]);
		}
		
	private:
		int t,k,i,j,m,n,o,a[500],b[500],c[500],d[500];
    	char x[500],y[500];
};

int main() {
	char x[500], y[500];
	while(scanf("%s",x))
    {
        scanf("%s",y);
        if(x[0]=='0'&&y[0]=='0') return 0;
        else {
        	AplusB_on_Mars abm(x, y);
        	abm.getmarsnum();
		}
	}
	return 0;
}

/*
input
1,0 2,1
4,2,0 1,2,0
1 10,6,4,2,1
0 0

out
1,0,1
1,1,1,0
1,0,0,0,0,0
*/
