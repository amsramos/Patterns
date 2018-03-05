package application;

import gui.interfaces.IGUI;
import gui.jframe.MainFrame;

public class FornoWork{

    public static void main(String[] args) throws Exception{
        IGUI gui = new MainFrame();
        gui.start();
    }

}
