#include <iostream>  
using namespace std;  
  
int main(){      //�ҳ�����a�д��ڵ���K��������������еĳ���   
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
            sum -= a[start++];      //�����ֺʹ���Kʱ��startָ�����   
        }  
        end ++;   
    }  
    cout<<ans<<endl;  
    return 0;  
}  
/*����˼·�ǣ�������ָ���ʼ��ָ��ͷ����Ȼ��endָ���𽥺��ƣ�
ֱ�����������������г��֣���¼��ǰ�ĳ��ȣ�Ȼ��ǰָ����ƣ�
ֱ��sum<K,֮��endָ��������ơ�һ�������Ϳ������Ŀ�ꡣ
����Ҫע����ǣ����forѭ�������sum>=K,һ�ζ�ûִ�У�
˵�����е�����������ûK������������˵���¡�
*/
