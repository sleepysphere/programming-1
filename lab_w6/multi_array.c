#include <stdlib.h>
#include <time.h>

struct MultiArray
{
    int* data;
    int* shape;
};

/**
 * Indexing multi array using an index array
 *
 * array [2][1] = get_data(array, [2, 1])
*/
int get_data(struct MultiArray* array, int* indexes, int n_dims)
{
}

int main()
{
    // set random seed to current time
    srand(time(NULL));

    struct MultiArray* array = malloc(sizeof(struct MultiArray));

    // create 3x4 array
    array->data = malloc(3 * 2 * 2 * sizeof(int));

    // assign random data (0 -> 9)
    for (int i = 0; i < 3 * 2 * 2; i++)
    {
        array->data[i] = i;
        // printf("array->data[%d] = %d\n", i, array->data[i]);
    }

    // assign shape
    array->shape = malloc(3 * sizeof(int));
    array->shape[0] = 3;
    array->shape[1] = 2;
    array->shape[2] = 2;

    int indexes[] = { 1, 0, 1 };
    int out = get_data(array, indexes, 3);

    for(int i=0; i <3; i++)
    {
        for (int j=0; j<2;j++)
        {
            for(int k=0; k<2; k++)
            {
                int indexes[]={i,j,k};
                int out = get_data(array,indexes,3);
                printf("\narray[%d][%d][%d] -> %d",i,j,k,i*4+j*2+k*1);
            }
        }
    }

    return 0;
}

