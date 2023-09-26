class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        if (n == 0) return;

        int pos1 = 0;
        int pos2 = 0;
        int[] ans = new int[m + n];

        for (int i = 0; i < m + n; i++) {
            if (pos1 >= m) {
                ans[i] = nums2[pos2++];
            } else if (pos2 >= n) {
                ans[i] = nums1[pos1++];
            } else {
                int first = nums1[pos1];
                int second = nums2[pos2];

                if (first < second) {
                    ans[i] = first;
                    pos1++;
                } else {
                    ans[i] = second;
                    pos2++;
                }
            }
        }

        for (int i = 0; i < m + n; i++) nums1[i] = ans[i];
    }
}