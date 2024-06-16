#include <cuda_runtime.h>

int main()
{
    int n;
    return cudaGetDeviceCount(&n)!=cudaSuccess || n==0;
}
