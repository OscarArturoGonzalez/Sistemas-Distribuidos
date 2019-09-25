import java.util.Random;
public class tokens{
    public static void main(String[] args){
        int tam = 175760;
        //1757600
        Random aleatorio = new Random(System.currentTimeMillis());
        int pos = 0, cont = 0;
        int aux = 0;
        String letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  //Clase Byte o bitcod
        String token = null;      
        System.currentTimeMillis();
        for(int i = 0; i < tam; i++){
            for(int j = 0; j < 3; j++){
                pos = aleatorio.nextInt(26);
                token = token + letras.substring(pos);
                token = token + " ";
                //System.out.println(i);
            }
        }       
        while(aux != -1){
            aux = token.indexOf("IPN ",aux);
            if(aux != -1){
                aux = aux + 3;    
            }
            cont++;            
        }
        cont = cont - 1;
        System.out.println("La palabra IPN existe: "+cont+ " veces");
    }
}