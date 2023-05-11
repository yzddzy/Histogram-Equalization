#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
void histogram(void* _input, int h, int w, const char* filename) {

    if (freopen(filename, "w", stdout) == NULL)
        fprintf(stderr, "Invalid output file of histogram!\n");
    
    unsigned char image[h][w];
    memcpy(image, _input, sizeof image);

    // TODO: begin to draw a histogram
    // * You can just use common method like std::cout or printf
    // * to display the graph. You can find output in filename, 
    // * since I've re-direct the stdout stream to that file.
    int hui[256]={0},sum[100]={0},p=0;
    for (int i = 0; i < h; i++)
        for (int j = 0; j < w; j++){
            hui[image[i][j]]++;
        }
       
    for(int i=0;i<256;i++){
        std::cout<<i<<"|       "<<"|";
        for(int j=0;j<(hui[i]/10);j++)
            std::cout<<"*";
        std::cout<<endl;
    }

    printf("Nothing implemented!\n");
    
    std::cout << "Nothing implemented!" << std::endl;

    // TODO: end drawing the histogram
}