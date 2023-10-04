class Solution {
    public List<List<Integer>> groupThePeople(int[] groupSizes) {
        int n = groupSizes.length;

        HashMap<Integer, List<Integer>> tempGroup = new HashMap<>();
        List<List<Integer>> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            int personGroup = groupSizes[i];

            tempGroup.putIfAbsent(personGroup, new ArrayList<>());
            tempGroup.get(personGroup).add(i);

            if (tempGroup.get(personGroup).size() == personGroup) {
                ans.add(new ArrayList<>(tempGroup.get(personGroup)));
                tempGroup.get(personGroup).clear();
            }
        }
        
        return ans;
        
    }
}
