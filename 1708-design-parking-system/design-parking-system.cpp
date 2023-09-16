class ParkingSystem {
  public:
    vector<int> count;
    ParkingSystem(int big, int medium, int small) {
        count = {big, medium, small};
    }
    
    bool addCar(int carType) {
        bool ans = count[carType - 1] > 0;
        if (ans) count[carType - 1]--;
        return ans;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */