class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
	sort(deck.begin(), deck.end(), greater<int>());
	vector<int> array;
	int temp,size=-1;
	for (int i = 0; i < deck.size(); i++) {
		if (array.size() == 0) {
			array.push_back(deck[i]);
			size++;
		}
		else {
			temp = array[size];
			array.pop_back();
			array.insert(array.begin(), temp);
			array.insert(array.begin(), deck[i]);
			size++;
		}
	}
	return array;
}
};