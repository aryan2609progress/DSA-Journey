class Solution {
public:
    string trafficSignal(int timer) {
        if (timer < 0 || timer > 90) return "Invalid";
        if (timer == 0) return "Green";
        if (timer == 30) return "Orange";
        if (timer > 30) return "Red";
        return "Invalid";
    }
};