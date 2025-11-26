//Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, key, found=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){found=i; break;}
    }
    printf("%d", found);
    return 0;
}
