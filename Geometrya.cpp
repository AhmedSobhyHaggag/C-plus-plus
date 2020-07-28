#include <iostream.h>
# include <math.h>


float dot (float x[],float y[], float z[] );

float cross (float x[],float y[] ,float z[]);


//double length(int x[]);

int main()
{
    float a[2],b[2],c[2];

    cout<<"please enter the vector a"<<endl;
    cin>>a[0]>>a[1];
    cout<<"please enter the vector b"<<endl;
    cin>>b[0]>>b[1];
    cout<<"please enter the vector c"<<endl;
    cin>>c[0]>>c[1];

    float ab[2],bc[2],ba[2],ac[2];
    for(int i=0; i<2; i++)
    {
        ab[i]=b[i]-a[i];
        bc[i]=c[i]-b[i];
        ba[i]=a[i]-b[i];
        ac[i]=c[i]-a[i];
    }

    cout<<"the vector ab=("<<ab[0]<<","<<ab[1]<<")"<<endl;
    cout<<"the vector bc=("<<bc[0]<<","<<bc[1]<<")"<<endl;
    cout<<"the vector ba=("<<ba[0]<<","<<ba[1]<<")"<<endl;
    cout<<"the vector ac=("<<ac[0]<<","<<ac[1]<<")"<<endl;

    float dot1,dot2,cross1;
    dot1=dot(a,b,c);
    dot2=dot(b,a,c);
    cross1=cross(a,b,c);

    cout<<"ab "<<(char)249<<" bc="<<dot1<<endl;

    cout<<"ba "<<(char)249<<" ac="<<dot2<<endl;
    cout<<" | ab x ac | = "<<cross1;




    return 0;
}
float dot (float x[],float y[], float z[] )
{
    float xy[2],yz[2];


    xy[0]=y[0]-x[0];
    xy[1]=y[1]-x[1];

    yz[0]=z[0]-y[0];

    yz[1]=z[1]-y[1];

    return(xy[0]*yz[0]+xy[1]*yz[1]);




}


float cross (float x[],float y[] ,float z[])
{
    float xy[2],xz[2];
    xy[0]=y[0]-x[0];
    xy[1]=y[1]-x[1];

    xz[0]=z[0]-x[0];

    xz[1]=z[1]-x[1];
    return(xy[0]*xz[1]-xz[0]*xy[1]);

}

