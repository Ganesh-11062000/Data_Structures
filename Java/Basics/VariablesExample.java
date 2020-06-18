// variables could be of 3 types
// 1) class variables ( static )
// 2) Object variables / instance variables
// 3) local variables ( passed as arguments in methods )

// Note : 
// multiple objects of the same class will have 
// different values of instance variables but
// all these objects will share the same copy of class variable



class A {

    int x,y;        // instance variables
    static int z;   // class variable

    void set(int x,int y){
        this.x = x;
        this.y = y;
    }

    void set_z(int z){
        this.z = z;
    }

    void display(){
        System.out.println("x = "+x+",y =  "+y+",z = "+z);
    }
}

class VariablesExample{

    public static void main(String args[]){
        A a1 = new A();
        a1.set(2,3);
        a1.set_z(4);

        a1.display();
        // x = 2,y =  3,z = 4

        // now let's create one more object of class A
        A a2 = new A();
        a2.set(6,5);
        
        // we have not set the valu of z for a2
        a2.display();
        // x = 6,y =  5,z = 4
    }
}

