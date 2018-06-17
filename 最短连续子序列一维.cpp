#include <iostream>  
using namespace std;  
  
int main(){      //找出数组a中大于等于K的最短连续子序列的长度   
    int a[4];  
    for(int i=0;i<4;i++)  
        cin>>a[i];  
    int K;  
    cin>>K;  
    int start = 0,end = 0;  
    int len = sizeof(a)/sizeof(int);  
    int ans = len;  
    cout << ans << endl;
    int sum = 0;  
    while(end < len){  
        if(sum < K)  
            sum += a[end];  
        while(sum >= K){  
            ans = min(ans,end-start+1);  
            sum -= a[start++];      //当出现和大于K时，start指针后移   
        }  
        end ++;   
    }  
    cout<<ans<<endl;  
    return 0;  
}  
/*大致思路是，用两个指针初始化指向头部，然后end指针逐渐后移，
直到符合条件的子序列出现，记录当前的长度，然后前指针后移，
直到sum<K,之后end指针继续后移。一遍下来就可以完成目标。
这里要注意的是，如果for循环里面的sum>=K,一次都没执行，
说明所有的数加起来都没K大，特殊情况最好说明下。
*/
