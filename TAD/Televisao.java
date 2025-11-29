public class Televisao{
    
    String marca;
    boolean ligado;
    int volume;
    int canal;
    String local;

    public Televisao(){
        
        this.ligado = false;
      
    }

    public void defineCanal(int pcanal){
        
        if(ligado){
            canal = pcanal;
            System.out.println("Marca: " + marca + ": Canal definido para: " + canal);
        } else {
            System.out.println("Ligue a TV " + marca);
        }
    }

    public void aumentarVolume(){
        
        if(ligado){
            volume++;
            System.out.println("Marca: " + marca + ": Volume aumentado para: " + volume);
        } else {
            System.out.println("Ligue a TV " + marca);
        }
    }   

    public void diminuirVolume(){
        
        if(ligado){
            volume--;
            System.out.println("Marca: " + marca + ": Volume diminuído para: " + volume);
        } else {
            System.out.println("Ligue a TV " + marca);
        }
    }   

}