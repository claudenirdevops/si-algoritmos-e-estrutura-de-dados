public class UtilizarTV {
    public static void main(String[] args) {
        
        Televisao t1 = new Televisao();
        Televisao t2 = new Televisao();

        t1.defineMarca("Samsung");
        t1.defineCanal(3);
        t1.local("SALA");
        t1.ligar();
        t1.defineCanal(3);
        t1.aumentarVolume();
       
    }
}