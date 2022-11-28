package Java;

public class Main {
    public static void main(String[] args) {
         X x = new X();
         Y y = new Y();

         x.foo(new classB());
         y.foo(new classB());
        
         A a = y.foo(new classB());
         C c = y.foo(new classB());
    }
}
