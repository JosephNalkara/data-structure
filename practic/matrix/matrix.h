#include <iostream>
using namespace std;

class Matrix
{
public:
    int mat[3][3];
    int i, j, k;
    friend istream &operator>>(istream &is, Matrix obj)
    {
        for (obj.i = 0; obj.i < 3; obj.i++)
        {
            for (obj.j = 0; obj.j < 3; obj.j++)
            {
                is >> obj.mat[obj.i][obj.j];
            }
        }
        return is;
    }

    friend ostream &operator<<(ostream &os, Matrix obj)
    {
        for (obj.i = 0; obj.i < 3; obj.i++)
        {
            for (obj.j = 0; obj.j < 3; obj.j++)
            {
                os << obj.mat[obj.i][obj.j];
            }
        }
        return os;
    }

    friend Matrix operator+(Matrix a, Matrix b)
    {
        Matrix result;
        for (result.i = 0; result.i < 3; result.i++)
        {
            for (result.j = 0; result.j < 3; result.j++)
            {
                result.mat[result.i][result.j] = a.mat[result.i][result.j] + b.mat[result.i][result.j];
            }
        }
        return result;
    }

    friend Matrix operator-(Matrix a, Matrix b)
    {
        Matrix result;
        for (result.i = 0; result.i < 3; result.i++)
        {
            for (result.j = 0; result.j < 3; result.j++)
            {
                result.mat[result.i][result.j] = a.mat[result.i][result.j] - b.mat[result.i][result.j];
            }
        }
        return result;
    }

    friend Matrix operator*(Matrix a, Matrix b)
    {
        Matrix result;
        for (result.i = 0; result.i < 3; result.i++)
        {
            for (result.j = 0; result.j < 3; result.j++)
            {
                result.mat[result.i][result.j] = 0;
                for (result.k = 0; result.k < 3; result.k++)
                {
                    result.mat[result.i][result.j] += a.mat[result.i][result.k] * b.mat[result.k][result.j];
                }
            }
        }
        return result;
    }

    friend Matrix operator^(Matrix a, int cons)
    {
        Matrix result;
        for (result.i = 0; result.i < 3; result.i++)
        {
            for (result.j = 0; result.j < 3; result.j++)
            {
                result.mat[result.i][result.j] = cons * a.mat[result.i][result.j];
            }
        }
        return result;
    }
};
