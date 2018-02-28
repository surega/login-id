#include <iostream>
#include<math.h>
using namespace std;

int main() {
 
void minabsvaluepair(int array[], int array_size)
{
    int count = 0;
    int l, r, min_sum, sum, min_l, min_r;
    if (array_size < 2)
    {
        cout<<"invalid";
        return;
    }
    min_l = 0;
    min_r = 1;
    min_sum = array[0] + array[1];
    for (l = 0; l < array_size - 1; l++)
    {
        for (r = l + 1; r < array_size; r++)
        {
            sum = array[l] + array[r];
            if (abs(min_sum) > abs(sum))
            {
                min_sum = sum;
                min_l = l;
                min_r = r;
            }
        }
    }
    cout<<" The two elements whose sum is minimum are %d and %d"<< array[min_l]<<array[min_r];
}
 
    int array[] = {42, 15, -25, 30, -10, 35};
    minabsvaluepair(array, 6);
    getchar();
    return 0;
}
