#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Punto{
    public:
    Punto(float _x, float _y){
       x = _x;
       y = _y;
    }
        int cuadrante(){
            int aux = 4;
            if(x > 0 && y > 0){
                 aux = 1;
            }
            if(x < 0 && y > 0){
                 aux = 2;
            }
            if(x < 0 && y < 0){
                 aux = 3;
            }
            return aux;
        }
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
        float  theta(){
            float  punto1 = 0;
            float  punto2 = 0;
            punto1 = y/x;
            punto2 = atan(punto1);
            return punto2*180/3.1416;
        }



        string toString(){
            string _x,_y;
            double PP1;
            double PP2;
            PP1 = x;
            PP2 = y;
            _x = to_string(PP1);
            _y = to_string(PP2);
            return "(" + _x + "," + _y + ")";
        }
    private:
        float x;
        float y;

};
float Euclid(Punto P1, Punto P2)
{
    float a = P2.getX() - P1.getX();
    float b = P2.getY() - P1.getY();
    return sqrtf(a*a + b*b);
};

int main()
{
    Punto un(100,200);
    Punto dos(150,250);
    cout << Euclid(un,dos) << endl;
    return 0;
}
