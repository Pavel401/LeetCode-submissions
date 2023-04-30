class Solution {
 List<int> topKFrequent(List<int> nums, int k) {
  Map<int, int> freq = {};
  for (int num in nums) {
    freq[num] = freq.containsKey(num) ? freq[num]! + 1 : 1;
  }

  List<List<int>> buckets = List.filled(nums.length + 1, []);

  for (int key in freq.keys) {
    int frequency = freq[key]!;
    if (buckets[frequency].isEmpty) {
      buckets[frequency] = [key];
    } else {
      buckets[frequency].add(key);
    }
  }

  List<int> result = [];
  for (int i = buckets.length - 1; i >= 0 && result.length < k; i--) {
    if (buckets[i].isNotEmpty) {
      result.addAll(buckets[i]);
    }
  }

  return result;
}

}
