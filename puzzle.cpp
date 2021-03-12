#include "puzzle.h"
Puzzle::Puzzle(int size) 
{
    // *************************************
    // Implement the alternative constructor
    // *************************************

    // my code--------------
    if (size > 0)
    {
        m_size = size;
        makeMem();
        fill();
    }
    else
    {
        m_size = 0;
        m_table = NULL;
    }
}
Puzzle::~Puzzle()
{
    clear();
}
void Puzzle::clear()
{
    // ***************************
    // Implement clear() function
    // ***************************

    // my code---------------
    if (m_table != NULL)
        if (m_size > 0)
        {
            for(int x = 0; x < m_size; x++)
            {
                delete[] m_table[x];
            }
            delete[] m_table;
        }
}
void Puzzle::makeMem()
{
    // ****************************
    // Implement makeMem() function
    // ****************************

    // my code------------
    if (m_size > 0)
    {
        m_table = new char *[m_size];
        for (int x = 0; x < m_size; x++)
        {
            m_table[x] = new char[m_size];
        }
    }
    else
        m_table = NULL;
}
Puzzle::Puzzle(const Puzzle &rhs)
{
    // ***************************
    // Implement copy constructor
    // ***************************

    // my code--------------------------
    if (rhs.m_size > 0)
    {
        m_size = rhs.m_size;
        makeMem();
        // deep copy
        int i = 0;
        int j = 0;
        while (i < m_size)
        {
            while (j < m_size)
            {
                m_table[i][j] = rhs.m_table[i][j];
                j++;
            }
            j = 0;
            i++;
        }
    }
    else
    {
        m_size = 0;
        m_table = NULL;
    }
}
const Puzzle &Puzzle::operator=(const Puzzle &rhs)
{
    // *****************************
    // Implement assignment operator
    // *****************************

    // my code------------------------
    if (m_table == rhs.m_table)
    {
        return *this;
    }

    clear();
    // Deep Copy-----
    if (rhs.m_size > 0)
    {
        m_size = rhs.m_size;
        makeMem();
        // deep copy
        int i = 0;
        int j = 0;
        while (i < m_size)
        {
            while (j < m_size)
            {
                m_table[i][j] = rhs.m_table[i][j];
                j++;
            }
            j = 0;
            i++;
        }
    }
    else
    {
        m_size = 0;
    }

    return *this;
}
void Puzzle::dump()
{
    if (m_size > 0)
    {
        int i = 0;
        int j = 0;
        while (i < m_size)
        {
            while (j < m_size)
            {
                cout << m_table[i][j] << " ";
                j++;
            }
            cout << endl;
            j = 0;
            i++;
        }
        cout << endl;
    }
}
void Puzzle::fill()
{
    srand(time(NULL)); //create the seed value using the current time
    int i = 0;
    int j = 0;
    while (i < m_size)
    {
        while (j < m_size)
        {
            m_table[i][j] = ALPHA[rand() % MAX]; //find a random char from the chars list
            j++;
        }
        j = 0;
        i++;
    }
}