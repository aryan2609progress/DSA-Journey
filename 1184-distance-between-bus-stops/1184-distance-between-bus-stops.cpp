class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int total = 0;
        int clockwise = 0;

        for (int i = 0; i < distance.size(); i++) {
            total += distance[i];
        }

        for (int i = start; i != destination; i = (i + 1) % distance.size()) {
            clockwise += distance[i];
        }

        return min(clockwise, total - clockwise);
    }
};