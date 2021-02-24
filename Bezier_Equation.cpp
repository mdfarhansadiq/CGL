///******* In the name of Allah *******///

#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL);
#define nl '\n'

void Ok()
{
    long int a,b,c,d,e,f,g,h,t,i,j,k,l,m,n,Mn,Mx;
    long int ans_1,ans_2,ans_3,cnt_1,cnt_2,cnt_3,flag_1,flag_2,flag_3,temp,sum;
    double aa[13],bb[13],cc[13],dd,ee,ff,gg;
    char aaa,bbb,ccc,ddd;
    string spc,in,keyword;

    fastio;

    for(i=1;i<=4;i++)
        cin>>aa[i];

    for(i=0;i<=3;i++)
        cin>>bb[i]>>cc[i];

    for(i=1;i<=4;i++)
    {
        dd = ((1.0 - aa[i]) * (1.0 - aa[i]) * (1.0 - aa[i]) * bb[0]) + (3 * aa[i] * ((1.0 - aa[i]) * (1.0 - aa[i])) * bb[1]) + (3 * aa[i] * aa[i] * (1.0 - aa[i])* bb[2]) + ((aa[i] * aa[i] * aa[i]) * bb[3]);
        ee = ((1.0 - aa[i]) * (1.0 - aa[i]) * (1.0 - aa[i]) * cc[0]) + (3 * aa[i] * ((1.0 - aa[i]) * (1.0 - aa[i])) * cc[1]) + (3 * aa[i] * aa[i] * (1.0 - aa[i])* cc[2]) + ((aa[i] * aa[i] * aa[i]) * cc[3]);
        cout<<aa[i]<<": "<<dd<<" "<<ee<<nl;

    }

    return;
}

int main()
{
    Ok();

    return 0;
}
