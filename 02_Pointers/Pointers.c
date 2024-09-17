#include <stdio.h>
#include <stdint.h>

struct accumulateData // 16 Bytes big
{
	int64_t sum; // sum of all values
	int64_t num; // number of sums
};

void newAccumulateData(struct accumulateData* data)
{
	data->sum = 0;
	data->num = 0;
}

//void accumulate(int64_t* sum, int64_t* num, int64_t value)
//{
//	*sum += value;
//	(*num)++;
//}

void accumulate(struct accumulateData* data, int64_t value)
{
	data->sum += value;
	data->num++;
}

int64_t accumulateResult(struct accumulateData* data)
{
	return data->sum / data->num;
}

int main()
{
	//int64_t sum = 0; // sum of all values
	//int64_t num = 0; // number of sums
	struct accumulateData data;
	newAccumulateData(&data);

	//data.num = 0;
	//data.sum = 0;

	accumulate(&data, 10);
	accumulate(&data, 20);

	/*int64_t avg = data.sum / data.num;*/
	int64_t avg = accumulateResult(&data);
	printf("the average is: %lli", avg);

}
/*
* 1. POINTER TYPES:
*	 type *  --> int64_t *
* 
* 2. Modify the value:
*	 * var = ... 
*	 int64_t* name = ...
*	 *name = 5;
* 
* 3. Creating ponter
*	 int64_t value = 0;
*	 int64_t* p = &value;
*	 *p = 5;
*/