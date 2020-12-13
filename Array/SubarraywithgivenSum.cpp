public static int findSubArrayWithSumZero(int arr[], int x) {

	HashMap<Integer, Integer> map = new HashMap<>();
	int sum =0;
	int count=0;
	map.put(0, 1);

	for(int i=0;i<arr.length;i++) {

		sum=sum+arr[i];

		if(map.containsKey(sum-x))
			count+=map.get(sum-x);

		if(!map.containsKey(sum))
			map.put(sum,1);

		else
			map.put(sum, map.get(sum)+1);
	}

	return count;

}