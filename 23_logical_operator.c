#include <stdio.h>
void main()
{
    int ans;
    // ans= 12 > 7 && 89<99 && 90==90;
    // ans= 12 > 7  ||  89<9   ||   90==9;
    ans = !(12 > 8);
    printf("ans = %d ", ans);
}