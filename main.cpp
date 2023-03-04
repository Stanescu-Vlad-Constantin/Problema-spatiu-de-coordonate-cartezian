#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>
#include <sstream>
#include <algorithm>

#define _USE_MATH_DEFINES

using namespace std;

class Point
{
private:
    double x;
    double y;
    double z;
public:
    Point()
    {
        x=0;
        y=0;
        z=0;
    }

    Point(double arg_x, double arg_y)
    {
        x=arg_x;
        y=arg_y;
        z=0;
    }

    Point(double arg_x, double arg_y, double arg_z)
    {
        x=arg_x;
        y=arg_y;
        z=arg_z;
    }

    double getX()
    {
        return x;
    }

    double getY()
    {
        return y;
    }

    double getZ()
    {
        return z;
    }

    double getRadius()
    {
        return sqrt(x*x+y*y+z*z);
    }

    double getPhi()
    {
        if(x>0)
            return atan2(y,x);
        else
            return (atan2(y,x)+M_PI);
    }

    double getTheta()
    {
        return acos(z/(sqrt(x*x+y*y+z*z)));
    }

};
int main()
{
    vector<Point> puncte;
    string sir;
        cin>>sir;
        int coord=0;
        for(int i=0;i<(int)sir.size();i++)
        {
            if(sir[i]==';')
            {
                coord++;
            }
        }
        if(coord==1)
        {
            istringstream s_sir(sir);
            float x,y;
            char c;
            s_sir>>x>>c>>y;
            Point temp(x,y);
            puncte.push_back(temp);
        }
        if(coord==2)
        {
            istringstream s_sir(sir);
            float x,y,z;
            char c;
            s_sir>>x>>c>>y>>c>>z;
            cout<<x<<endl<<y<<z;
            Point temp(x,y,z);
            puncte.push_back(temp);
        }
}
