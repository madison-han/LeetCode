class Solution {
public:
    void swap(int &first, int &second) {
        int temp = first;
        first = second;
        second = temp;
    }

    int partition (vector<int>& arr, int low, int high) {
        int pivot = arr[high];  // Choose the last element as the pivot
        int i = low - 1;        // Index of smaller element

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;  // Increment index of smaller element
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);
        return i + 1;
    }

    void quicksort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quicksort(arr, low, pi - 1);
            quicksort(arr, pi + 1, high);
        }
    }

    int maxCoins(vector<int>& piles) {
        int ans = 0;
        int n = piles.size();

        quicksort(piles, 0, n - 1);

        int beg = n / 3;

        for (int i = beg; i < n; i += 2) {
            ans += piles[i];
        }

        return ans;


    }
};