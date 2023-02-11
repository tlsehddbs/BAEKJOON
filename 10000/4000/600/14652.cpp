#include <iostream>

int main() 
{
    int n, m, k;
    std::cin >> n >> m >> k;
    std::cout << k / m << " " << k % m;
}


// #include <iostream>

// int main()
// {
//     int n, m, k, num = 0;
//     std::cin >> n >> m >> k;
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < m; j++)
//         {
//             if(num == k)
//             {
//                 std::cout << i << " " << j;
//                 return 0;
//             }
//             num++;
//         }
// }