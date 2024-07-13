#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>
#include <string.h>

int iters = 2000;

int f(double x, double y) {
        //Z_n=0 = 0 + 0*i
        double a = 0;
        double b = 0;
        //C is constant (x,y)
        int i;
        for (i = 1; i <= iters; ++i) {
                //(a+bi)^2 = ((a^2) + 2*a*b*i - b^2
                double a2 = a;
                double b2 = b;
                a = (a2*a2) - (b2*b2) + x;
                b = 2*a2*b2 + y;
                if ((a*a > 4) || (b*b > 4) || (a*b > 4) || (a*b < -4)) {
                        return i;
                }
        }
        //distance of iterated point from origin
        return iters;
}

char* metaF(int y) {
        if (y >= iters) {
                static char RET[] = "X";
                return RET;
        }
        int j = 50;
        int x = y % (iters/j);
        if (x > 0.83*iters/j) {
                static char RET[] = "o";
                return RET;
        }
        if (x > 0.67*iters/j) {
                static char RET[] = "[";
                return RET;
        }
        if (x > 0.5*iters/j) {
                static char RET[] = "/";
                return RET;
        }
        if (x > 0.33*iters/j) {
                static char RET[] = ">";
                return RET;
        }
        if (x > 0.14*iters/j) {
                static char RET[] = ",";
                return RET;
        }
        else {
                static char RET[] = " ";
                return RET;
        }
}


void zoomprint(float S, float d1, float d2, float d3, float d4, float width, float height) {
        //float S = 70;
        //y constraints (min, max accoridingly) 
        //float d1 = -1.6;
        //float d2 = 1.6;
        //x constraints (also min, max)
        //float d3 = -4;
        //float d4 = 1.4;
        char str1[1000000] = "\n";
        printf("%s", str1);
        int y;
        int val = 0;
        for (y = d2*S; y >= d1*S; --y) {
                int x;
                for (x = d3*S; x <= d4*S; ++x) {
                    val = val + 1;
                    //this is where magic happens
                    //f(x,y) determines pixel value
                    int value = f((x/S),2*(y/S));
                    char* str2 = metaF(value);
                    char Str2[1]; strcpy(Str2, str2);
                    //printf("%s", Str2);
                    strcat(str1, Str2);
                }
                char STR2[] = "\n";
                strcat(str1, STR2);
                //printf("\n");
        }
        printf("%s", str1);
}


int main(int argc, char *argv[]) {
        if (argc < 2) {
                printf("Requires screen width arg. Example: './a.out 200' for 200 asci pixel width\n");
                //non zero output for (user) error
                return 1;
        }
        //optional coordinate
        printf("%d\n", argc);
        float X1;
        float Y1;
        if (argc == 4) {
                printf("including custom coordinates...\n");
                //then include the coordinates
                X1 = atof(argv[2]);
                Y1 = atof(argv[3]);
        }
        else {
                //zooming in coordinates
                X1 = -1.46;
                Y1 = 0;
        }
        //other parameters
        float w = 2.7*2;
        float h = 1.2*2;
        //pixX = dX * S = horizontal # of pixels
        //S = pixX / dX
        //dX = wV
        float pixX = atoi(argv[1]);
        float V = 1;
        int I;
        //artificial delay
        float vs = 7000;
        for (I = 1; I <= 250000; ++I) {
                V = 0.987*V;
                float W = w*V;
                float H = h*V;
                float Scale = pixX/W;
                int pixY = (h*Scale) + 5;
                //define D1 -> D4
                float D1 = Y1 - (H/2);
                float D2 = Y1 + (H/2);
                float D3 = X1 - (W/2);
                float D4 = X1 + (W/2);
                zoomprint(Scale, D1, D2, D3, D4, pixX, pixY);
                usleep(vs);
        }
        return 0;
}

