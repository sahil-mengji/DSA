class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a =abs(hour*30 + 0.5*minutes - 6*minutes );
         
        return min(a,360-a);
    }
};