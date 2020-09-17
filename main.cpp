int main() 
{ 
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 }; 
    int k = 4; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << maxSum(arr, n, k); 
    return 0; 
} 
