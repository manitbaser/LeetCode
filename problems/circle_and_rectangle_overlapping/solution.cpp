class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        if(x_center+radius<x1||x_center-radius>x2||y_center+radius<y1||y_center-radius>y2){
            cout<<"1";
            return false;
        }
        if(x_center<x1){
            if(y_center<y1){
                if(pow((x1-x_center),2)+pow((y1-y_center),2)>radius*radius){
                    cout<<"2";
                    return false;
                }
            }
            if(y_center>y2){
                if(pow((x1-x_center),2)+pow((y_center-y2),2)>radius*radius){
                    cout<<"3";
                    return false;
                }
            }
        }
        if(x_center>x2){
            if(y_center<y1){
                if(pow((x_center-x2),2)+pow((y1-y_center),2)>radius*radius){
                    cout<<"4";
                    return false;
                }
            }
            if(y_center>y2){
                if(pow((x_center-x2),2)+pow((y_center-y2),2)>radius*radius){
                    cout<<"5";
                    return false;
                }
            }
        }
            
        return true;
    }
};