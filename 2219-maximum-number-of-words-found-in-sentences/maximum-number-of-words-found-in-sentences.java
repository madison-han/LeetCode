class Solution {
    public int mostWordsFound(String[] sentences) {
        int ans = 0;

        for (String a: sentences){
            int length = a.length();
            int temp = 0;
            for(int i = 0; i < length; i++) 
                if (a.charAt(i) == ' ') temp++;
            temp = length == 0 ? 0 : temp + 1;
            
            if (temp > ans) ans = temp;
        }
        return ans;
    }
}