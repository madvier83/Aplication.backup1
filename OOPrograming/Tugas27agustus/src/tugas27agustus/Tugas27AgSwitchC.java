/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package tugas27agustus;

import java.util.Scanner;
        
public class Tugas27AgSwitchC {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        
        int a;
        
        System.out.println(" Jurusan : RPL, Animasi, TKJ, Multimedia, Otomotif (1-5)");
        System.out.print(" Masukan Angka Urutan : ");
        a = input.nextInt();
        
        switch(a){
            case 1:
                System.out.println(" RPL ");
                break;
            case 2:
                System.out.println(" Animasi ");
                break;
            case 3:
                System.out.println(" TKJ ");
                break;
            case 4:
                System.out.println(" Multimedia ");
                break;
            case 5:
                System.out.println(" Otomotif ");
                break;
            default:
                System.out.println(" Input Salah ");        
        }
    }   
}
