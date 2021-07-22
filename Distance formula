#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }

    void print(){
        cout<<"The point is ("<<x<<","<<y<<")";
    }
    friend void distance(point p,point q);

};
void distance(point p,point q){
    double dist =sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
    cout<<"Distance is "<<dist;

}
int main(){
    point p(1,7);
    p.print();

    point q(1,1);
    q.print();

    distance(p,q);


return 0;
}
