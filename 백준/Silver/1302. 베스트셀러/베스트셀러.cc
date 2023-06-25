#include <iostream>
#include <map>

int main()
{
    int n;
    std::cin >> n;

    std::map<std::string, int> books;

    for (int i = 0; i < n; i++)
    {
        std::string title;
        std::cin >> title;
        books[title]++;
    }

    std::string result;
    int max = 0;
    std::map<std::string, int>::iterator iter;
    for (iter = books.begin(); iter != books.end(); iter++)
    {
        max = std::max(max, books[iter->first]);
    }
    for (iter = books.begin(); iter != books.end(); iter++)
    {
        if (max == books[iter->first])
        {
            result = iter->first;
            break;
        }
    }

    std::cout << result << std::endl;

    return 0;
}