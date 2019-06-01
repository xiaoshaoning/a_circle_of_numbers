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

int stack_push(int my_stack[], int stack_size, int element);

int stack_pop(int my_stack[], int stack_size);

bool is_inside(int my_stack[], int current_stack_size, int element);

void display(int my_stack[], int stack_size);

bool is_valid_stack(int my_stack[], int stack_size, int m);

int main()
{
    int n;
    int total_answer_number;

    int stack[17];
    int stack_size;

    int ii, jj, kk;

    int a[17];

    int total_answer = 0;

    cout<<"input:"<<endl;
    cin>>n;
    //cout<<"n is "<<n<<endl;

    if (n > 17)
    {
        cout<<"The input number shall be less than 17."<<endl;
        return 1;
    }

    cout<<"output:"<<endl;

    stack[0] = 1;
    stack_size = 1;

    for(a[1] = 2; a[1] <= n; a[1]++)
    {

        stack_size = stack_push(stack, stack_size, a[1]);

        if (is_valid_stack(stack, stack_size, n))
        {
            display(stack, stack_size);
            total_answer++;
        }

        for (a[2] = 2; a[2] <= n; a[2]++)
        {
            if ((is_inside(stack, stack_size, a[2])))
                continue;

            stack_size = stack_push(stack, stack_size, a[2]);

            if (is_valid_stack(stack, stack_size, n))
            {
                display(stack, stack_size);
                total_answer++;
            }

            for (a[3] = 2; a[3] <= n; a[3]++)
            {
                if ((is_inside(stack, stack_size, a[3])))
                    continue;

                stack_size = stack_push(stack, stack_size, a[3]);

                if (is_valid_stack(stack, stack_size, n))
                {
                    display(stack, stack_size);
                    total_answer++;
                }

                for (a[4] = 2; a[4] <= n; a[4]++)
                {

                    if ((is_inside(stack, stack_size, a[4])))
                        continue;

                    stack_size = stack_push(stack, stack_size, a[4]);


                    if (is_valid_stack(stack, stack_size, n))
                    {
                        display(stack, stack_size);
                        total_answer++;
                    }

                    for (a[5] = 2; a[5] <= n; a[5]++)
                    {
                        if ((is_inside(stack, stack_size, a[5])))
                            continue;

                        stack_size = stack_push(stack, stack_size, a[5]);

                        if (is_valid_stack(stack, stack_size, n))
                        {
                            display(stack, stack_size);
                            total_answer++;
                        }

                        for ( a[6] = 2; a[6] <= n; a[6]++)
                        {
                            if ((is_inside(stack, stack_size, a[6])))
                                continue;

                            stack_size = stack_push(stack, stack_size, a[6]);

                            if (is_valid_stack(stack, stack_size, n))
                            {
                               display(stack, stack_size);
                               total_answer++;
                            }

                            for ( a[7] = 2; a[7] <= n; a[7]++)
                            {
                                if ((is_inside(stack, stack_size, a[7])))
                                    continue;

                                stack_size = stack_push(stack, stack_size, a[7]);

                                if (is_valid_stack(stack, stack_size, n))
                                {
                                    display(stack, stack_size);
                                    total_answer++;
                                }

                                for ( a[8] = 2; a[8] <= n; a[8]++)
                                {
                                    if ((is_inside(stack, stack_size, a[8])))
                                        continue;

                                    stack_size = stack_push(stack, stack_size, a[8]);

                                    if (is_valid_stack(stack, stack_size, n))
                                    {
                                        display(stack, stack_size);
                                        total_answer++;
                                    }

                                    for ( a[9] = 2; a[9] <= n; a[9]++)
                                    {
                                        if ((is_inside(stack, stack_size, a[9])))
                                            continue;

                                        stack_size = stack_push(stack, stack_size, a[9]);

                                        if (is_valid_stack(stack, stack_size, n))
                                        {
                                            display(stack, stack_size);
                                            total_answer++;
                                        }

                                        for ( a[10] = 2; a[10] <= n; a[10]++)
                                        {
                                            if ((is_inside(stack, stack_size, a[10])))
                                                continue;

                                            stack_size = stack_push(stack, stack_size, a[10]);

                                            if (is_valid_stack(stack, stack_size, n))
                                            {
                                                display(stack, stack_size);
                                                total_answer++;
                                            }

                                            for ( a[11] = 2; a[11] <= n; a[11]++)
                                            {
                                                if ((is_inside(stack, stack_size, a[11])))
                                                    continue;

                                                stack_size = stack_push(stack, stack_size, a[11]);

                                                if (is_valid_stack(stack, stack_size, n))
                                                {
                                                    display(stack, stack_size);
                                                    total_answer++;
                                                }

                                                for ( a[12] = 2; a[12] <= n; a[12]++)
                                                {
                                                    if ((is_inside(stack, stack_size, a[12])))
                                                        continue;

                                                    stack_size = stack_push(stack, stack_size, a[12]);

                                                    if (is_valid_stack(stack, stack_size, n))
                                                    {
                                                        display(stack, stack_size);
                                                        total_answer++;
                                                    }

                                                    for ( a[13] = 2; a[13] <= n; a[13]++)
                                                    {
                                                        if ((is_inside(stack, stack_size, a[13])))
                                                            continue;

                                                        stack_size = stack_push(stack, stack_size, a[13]);

                                                        if (is_valid_stack(stack, stack_size, n))
                                                        {
                                                            display(stack, stack_size);
                                                            total_answer++;
                                                        }

                                                        for ( a[14] = 2; a[14] <= n; a[14]++)
                                                        {
                                                            if ((is_inside(stack, stack_size, a[14])))
                                                                continue;

                                                            stack_size = stack_push(stack, stack_size, a[14]);

                                                            if (is_valid_stack(stack, stack_size, n))
                                                            {
                                                                display(stack, stack_size);
                                                                total_answer++;
                                                            }

                                                            for ( a[15] = 2; a[15] <= n; a[15]++)
                                                            {
                                                                if ((is_inside(stack, stack_size, a[15])))
                                                                    continue;

                                                                stack_size = stack_push(stack, stack_size, a[15]);

                                                                if (is_valid_stack(stack, stack_size, n))
                                                                {
                                                                    display(stack, stack_size);
                                                                    total_answer++;
                                                                }

                                                                for ( a[16] = 2; a[16] <= n; a[16]++)
                                                                {
                                                                    if ((is_inside(stack, stack_size, a[16])))
                                                                        continue;

                                                                    stack_size = stack_push(stack, stack_size, a[16]);

                                                                    if (is_valid_stack(stack, stack_size, n))
                                                                    {
                                                                        display(stack, stack_size);
                                                                        total_answer++;
                                                                    }

                                                                    stack_size = stack_pop(stack, stack_size);
                                                                }

                                                                stack_size = stack_pop(stack, stack_size);
                                                            }

                                                            stack_size = stack_pop(stack, stack_size);
                                                        }

                                                        stack_size = stack_pop(stack, stack_size);
                                                    }


                                                    stack_size = stack_pop(stack, stack_size);
                                                }

                                                stack_size = stack_pop(stack, stack_size);
                                            }

                                            stack_size = stack_pop(stack, stack_size);
                                        }

                                        stack_size = stack_pop(stack, stack_size);
                                    }

                                    stack_size = stack_pop(stack, stack_size);
                                }


                                stack_size = stack_pop(stack, stack_size);
                            }

                            stack_size = stack_pop(stack, stack_size);
                        }

                        stack_size = stack_pop(stack, stack_size);
                    }

                    stack_size = stack_pop(stack, stack_size);

                }

                stack_size = stack_pop(stack, stack_size);
            }

            stack_size = stack_pop(stack, stack_size);

        }

        stack_size = stack_pop(stack, stack_size);

    }

    if (total_answer == 0)
    {
        cout<<"no answer."<<endl;
    }
    else
    {
        cout<<total_answer<<endl;
    }

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

int stack_push(int my_stack[], int current_stack_size, int element)
{
    my_stack[current_stack_size] = element;
    return current_stack_size + 1;
}

bool is_inside(int my_stack[], int current_stack_size, int element)
{
    int index;
    for (index = 0; index < current_stack_size; index++)
    {
        if (my_stack[index] == element)
            return true;
    }

    return false;
}

int stack_pop(int my_stack[], int current_stack_size)
{
    my_stack[current_stack_size-1] = 0;
    return current_stack_size - 1;
}

bool is_valid_stack(int my_stack[], int stack_size, int n)
{
    int index;

    if (stack_size != n)
        return false;

    for(index = 0; index < stack_size-1; index++)
    {
        if (!is_prime(my_stack[index] + my_stack[index+1]))
            return false;
    }

    if (!is_prime(my_stack[0] + my_stack[stack_size-1]))
        return false;

    return true;
}

void display(int my_stack[], int stack_size)
{
    int index;
    for(index = 0; index < stack_size-1; index++)
        cout<<my_stack[index]<<" ";

    cout<<my_stack[stack_size-1]<<endl;
}
