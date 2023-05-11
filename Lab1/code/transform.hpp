#include <cstdio>
#include <cstdlib>
#include <cstring>


void transform(void* _input, int h, int w, void* _ret) {

    unsigned char image[h][w];
    unsigned char _image[h][w];
    memcpy(image, _input, sizeof image);

    // TODO: begin your image transformation algorithm
    // * I just write an identical transformation here
     int hui[256]={0};
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++){
            hui[image[i][j]]=hui[image[i][j]]+1;
        }
    for(int i=1;i<256;i++)
        hui[i]=hui[i]+hui[i-1];
        for(int i=0;i<256;i++)
        hui[i]=(hui[i]*255)/(h*w);
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++)
            _image[i][j]=(unsigned char)hui[image[i][j]];
    // TODO: end your image transformation algorithm
    
    memcpy(_ret, _image, sizeof _image);
}