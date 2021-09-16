

public class rush{

    public static void main(String []args){

    staff []= {"Marcus", "Lateefa", "Donald", "Rashad", "Quincy", "Mia"};
    cafeteria [] = {"Lobby", "Dining Room", "Kitchen"};
    shifts []= {0, 1, 2, 3, 4, 5, 6, 7};

    for(int i = 0 ;i<shifts.length;i++) {
        System.out.println("Day " + i + " : " + cafeteria[i] + staff[i] + "&&" + staff[i+1]);
    }
        
    }
}
