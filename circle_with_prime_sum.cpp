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

int enqueue(int my_queue[], int queue_length, int element);

int dequeue(int my_queue[], int queue_length);

bool is_inside(int my_queue[], int current_queue_length, int element);

void display(int my_queue[], int queue_length);

bool is_valid_queue(int my_queue[], int queue_length, int m);

int main()
{
    int n;
    int total_answer_number;

    int queue[17];
    int queue_length;

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

    queue[0] = 1;
    queue_length = 1;

    for(a[1] = 2; a[1] <= n; a[1]++)
    {

        queue_length = enqueue(queue, queue_length, a[1]);

        if (is_valid_queue(queue, queue_length, n))
        {
            display(queue, queue_length);
            total_answer++;
        }

        for (a[2] = 2; a[2] <= n; a[2]++)
        {
            if ((is_inside(queue, queue_length, a[2])))
                continue;

            queue_length = enqueue(queue, queue_length, a[2]);

            if (is_valid_queue(queue, queue_length, n))
            {
                display(queue, queue_length);
                total_answer++;
            }

            for (a[3] = 2; a[3] <= n; a[3]++)
            {
                if ((is_inside(queue, queue_length, a[3])))
                    continue;

                queue_length = enqueue(queue, queue_length, a[3]);

                if (is_valid_queue(queue, queue_length, n))
                {
                    display(queue, queue_length);
                    total_answer++;
                }

                for (a[4] = 2; a[4] <= n; a[4]++)
                {

                    if ((is_inside(queue, queue_length, a[4])))
                        continue;

                    queue_length = enqueue(queue, queue_length, a[4]);


                    if (is_valid_queue(queue, queue_length, n))
                    {
                        display(queue, queue_length);
                        total_answer++;
                    }

                    for (a[5] = 2; a[5] <= n; a[5]++)
                    {
                        if ((is_inside(queue, queue_length, a[5])))
                            continue;

                        queue_length = enqueue(queue, queue_length, a[5]);

                        if (is_valid_queue(queue, queue_length, n))
                        {
                            display(queue, queue_length);
                            total_answer++;
                        }

                        for ( a[6] = 2; a[6] <= n; a[6]++)
                        {
                            if ((is_inside(queue, queue_length, a[6])))
                                continue;

                            queue_length = enqueue(queue, queue_length, a[6]);

                            if (is_valid_queue(queue, queue_length, n))
                            {
                               display(queue, queue_length);
                               total_answer++;
                            }

                            for ( a[7] = 2; a[7] <= n; a[7]++)
                            {
                                if ((is_inside(queue, queue_length, a[7])))
                                    continue;

                                queue_length = enqueue(queue, queue_length, a[7]);

                                if (is_valid_queue(queue, queue_length, n))
                                {
                                    display(queue, queue_length);
                                    total_answer++;
                                }

                                for ( a[8] = 2; a[8] <= n; a[8]++)
                                {
                                    if ((is_inside(queue, queue_length, a[8])))
                                        continue;

                                    queue_length = enqueue(queue, queue_length, a[8]);

                                    if (is_valid_queue(queue, queue_length, n))
                                    {
                                        display(queue, queue_length);
                                        total_answer++;
                                    }

                                    for ( a[9] = 2; a[9] <= n; a[9]++)
                                    {
                                        if ((is_inside(queue, queue_length, a[9])))
                                            continue;

                                        queue_length = enqueue(queue, queue_length, a[9]);

                                        if (is_valid_queue(queue, queue_length, n))
                                        {
                                            display(queue, queue_length);
                                            total_answer++;
                                        }

                                        for ( a[10] = 2; a[10] <= n; a[10]++)
                                        {
                                            if ((is_inside(queue, queue_length, a[10])))
                                                continue;

                                            queue_length = enqueue(queue, queue_length, a[10]);

                                            if (is_valid_queue(queue, queue_length, n))
                                            {
                                                display(queue, queue_length);
                                                total_answer++;
                                            }

                                            for ( a[11] = 2; a[11] <= n; a[11]++)
                                            {
                                                if ((is_inside(queue, queue_length, a[11])))
                                                    continue;

                                                queue_length = enqueue(queue, queue_length, a[11]);

                                                if (is_valid_queue(queue, queue_length, n))
                                                {
                                                    display(queue, queue_length);
                                                    total_answer++;
                                                }

                                                for ( a[12] = 2; a[12] <= n; a[12]++)
                                                {
                                                    if ((is_inside(queue, queue_length, a[12])))
                                                        continue;

                                                    queue_length = enqueue(queue, queue_length, a[12]);

                                                    if (is_valid_queue(queue, queue_length, n))
                                                    {
                                                        display(queue, queue_length);
                                                        total_answer++;
                                                    }

                                                    for ( a[13] = 2; a[13] <= n; a[13]++)
                                                    {
                                                        if ((is_inside(queue, queue_length, a[13])))
                                                            continue;

                                                        queue_length = enqueue(queue, queue_length, a[13]);

                                                        if (is_valid_queue(queue, queue_length, n))
                                                        {
                                                            display(queue, queue_length);
                                                            total_answer++;
                                                        }

                                                        for ( a[14] = 2; a[14] <= n; a[14]++)
                                                        {
                                                            if ((is_inside(queue, queue_length, a[14])))
                                                                continue;

                                                            queue_length = enqueue(queue, queue_length, a[14]);

                                                            if (is_valid_queue(queue, queue_length, n))
                                                            {
                                                                display(queue, queue_length);
                                                                total_answer++;
                                                            }

                                                            for ( a[15] = 2; a[15] <= n; a[15]++)
                                                            {
                                                                if ((is_inside(queue, queue_length, a[15])))
                                                                    continue;

                                                                queue_length = enqueue(queue, queue_length, a[15]);

                                                                if (is_valid_queue(queue, queue_length, n))
                                                                {
                                                                    display(queue, queue_length);
                                                                    total_answer++;
                                                                }

                                                                for ( a[16] = 2; a[16] <= n; a[16]++)
                                                                {
                                                                    if ((is_inside(queue, queue_length, a[16])))
                                                                        continue;

                                                                    queue_length = enqueue(queue, queue_length, a[16]);

                                                                    if (is_valid_queue(queue, queue_length, n))
                                                                    {
                                                                        display(queue, queue_length);
                                                                        total_answer++;
                                                                    }

                                                                    queue_length = dequeue(queue, queue_length);
                                                                }

                                                                queue_length = dequeue(queue, queue_length);
                                                            }

                                                            queue_length = dequeue(queue, queue_length);
                                                        }

                                                        queue_length = dequeue(queue, queue_length);
                                                    }


                                                    queue_length = dequeue(queue, queue_length);
                                                }

                                                queue_length = dequeue(queue, queue_length);
                                            }

                                            queue_length = dequeue(queue, queue_length);
                                        }

                                        queue_length = dequeue(queue, queue_length);
                                    }

                                    queue_length = dequeue(queue, queue_length);
                                }


                                queue_length = dequeue(queue, queue_length);
                            }

                            queue_length = dequeue(queue, queue_length);
                        }

                        queue_length = dequeue(queue, queue_length);
                    }

                    queue_length = dequeue(queue, queue_length);

                }

                queue_length = dequeue(queue, queue_length);
            }

            queue_length = dequeue(queue, queue_length);

        }

        queue_length = dequeue(queue, queue_length);

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

int enqueue(int my_queue[], int current_queue_length, int element)
{
    my_queue[current_queue_length] = element;
    return current_queue_length + 1;
}

bool is_inside(int my_queue[], int current_queue_length, int element)
{
    int index;
    for (index = 0; index < current_queue_length; index++)
    {
        if (my_queue[index] == element)
            return true;
    }

    return false;
}

int dequeue(int my_queue[], int current_queue_length)
{
    my_queue[current_queue_length-1] = 0;
    return current_queue_length - 1;
}

bool is_valid_queue(int my_queue[], int queue_length, int n)
{
    int index;

    if (queue_length != n)
        return false;

    for(index = 0; index < queue_length-1; index++)
    {
        if (!is_prime(my_queue[index] + my_queue[index+1]))
            return false;
    }

    if (!is_prime(my_queue[0] + my_queue[queue_length-1]))
        return false;

    return true;
}

void display(int my_queue[], int queue_length)
{
    int index;
    for(index = 0; index < queue_length-1; index++)
        cout<<my_queue[index]<<" ";

    cout<<my_queue[queue_length-1]<<endl;
}
