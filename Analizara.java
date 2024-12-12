/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package analizara;

import java.io.File;

/**
 *
 * @author Pame
 */
public class Analizara {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        String path="C:/Users/Pame/Documents/NetBeansProjects/analizara/src/analizara/lexer.flex";
        generar(path);
    }
    
    public static void generar(String path){
        File file =new File(path);
       JFlex.Main.generate(file);
    }
    
    
   
}
   
    



