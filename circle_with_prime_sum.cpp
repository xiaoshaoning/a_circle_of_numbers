/*
 * Given an positive integer n, compute the circle(s) composed by the numbers 1 - n, such that
 * the sum of each two neighboring numbers on the circle is a prime, where 1 <= n <= 17.
 * Please print the number of ring(s) in a line with 1 is in the first position and any neighboring numbers
 * are seperated by a space. Please output the number of the solutions on the last row or "no answer" in the case
 * of no solution.
 *
 * @date: 20190530
 *
 */
#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int);
void display(int my_list[], int list_size);
bool is_valid_list(int my_list[], int list_size, int m);
void swap(int list[], int i, int j);
int permute(int list[], int list_size, int l, int r, int answer_number);

int main()
{
    int list[17] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    int n;
    int total_answer_number;

    cout<<"Please input n:"<<endl;
    cin>>n;

    if (n > 17)
    {
        cout<<"Please input a number less than 18"<<endl;
        return 1;
    }

    total_answer_number = permute(list, n, 1, n-1, 0);
    cout<<total_answer_number<<endl;

    return 0;
}

bool is_prime(int k)
{
    int ii;

    if (k == 2)
        return true;

    for (ii = 2; ii <= sqrt(k); ii++)
    {
        if (floor(k/ii) * ii == k)
        {
            return false;
        }
    }

    return true;
}

bool is_valid_list(int my_list[], int list_size)
{
    int index;

    for(index = 0; index < list_size-1; index++)
    {
        if (!is_prime(my_list[index] + my_list[index+1]))
            return false;
    }

    if (!is_prime(my_list[0] + my_list[list_size-1]))
        return false;

    return true;
}

void display(int my_list[], int list_size)
{
    int index;
    for(index = 0; index < list_size-1; index++)
        cout<<my_list[index]<<" ";

    cout<<my_list[list_size-1]<<endl;
}

void swap(int list[], int i, int j)
{
    int temp;
    temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

int permute(int list[], int list_size, int left, int right, int total_answer_number)
{
    int index;

    if ((left == right) && is_valid_list(list, list_size))
    {
        display(list, list_size);
        total_answer_number++;
    }
    else
    {
        for(index = left; index <= right; index++)
        {
            swap(list, left, index);
            total_answer_number = permute(list, list_size, left+1, right, total_answer_number);
            swap(list, left, index);
        }
    }

    return total_answer_number;
}
