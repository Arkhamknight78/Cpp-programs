#include <iostream>
#include <cstring>
using namespace std;
void copy(char a[1000], char b[1000], int m, int n)
{
    int p=0;
    for (int i = m; i <=n; i++)
    {
        b[p] = a[i];
        p++;
    }
}
int longestKstring(char a[1000], int k)
{
    int cnt = 0;
    int len = -1;
    char largest_arr[1000];
    int freq[26] = {0};
    int i = 0;
    for (int j = 0; a[j] != '\0'; j++)
    {
        freq[a[j] - 'a']++;
        if (freq[a[j] - 'a'] == 1)
        {
            cnt++;
        }

        while (cnt > k)
        {
            freq[a[i] - 'a']--;
            if (freq[a[i] - 'a'] == 0)
            {
                cnt--;
            }
            i++;
        }
        
        if (cnt == k)
        {
            len = max(len, j - i + 1);
            copy(a, largest_arr, i, j);
        }
    }
    cout << "length of Largest sub "<< len << endl;
    cout << largest_arr << endl;

    return 0;
}
int main()
{
    char a[] = "abbceddd";
    int k;
    cin >> k;
    longestKstring(a, k);

    return 0;
}