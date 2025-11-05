#include <stdio.h>
int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = 10, x, left = 0, right = n - 1, mid, found = 0;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == x) {
            printf("Tim thay %d tai vi tri %d\n", x, mid);
            found = 1;
            break;
        } else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (!found)
        printf("Khong tim thay %d trong mang.\n", x);
}

