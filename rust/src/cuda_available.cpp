extern "C" bool cuda_available();

int main()
{   return !cuda_available();   }
