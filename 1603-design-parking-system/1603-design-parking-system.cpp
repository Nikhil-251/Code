class ParkingSystem {
    vector<int>ps;
public:
    ParkingSystem(int big, int medium, int small) {
        ps.push_back(big);
        ps.push_back(medium);
        ps.push_back(small);
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(ps[0]>=1){
                ps[0]=ps[0]-1;
                return true;
            }
            else{
                return false;
            }
        }
        else if(carType==2){
            if(ps[1]>=1){
                ps[1]=ps[1]-1;
                return true;
            }
            else{
                return false;
            }
        }
        else if(carType==3){
            if(ps[2]>=1){
                ps[2]=ps[2]-1;
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */