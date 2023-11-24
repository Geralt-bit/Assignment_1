#include <iostream>

using namespace std;

bool same(int a, int b){
    if(a < 0 and b < 0) {
        return true;
    }
    if(a > 0 and b > 0) {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n;
    int arr[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i < n; i++)
    if(same(arr[i - 1], arr[i])){
        cout << arr[i - 1] << " " << arr[i] << endl;
    }

    return 0;
}