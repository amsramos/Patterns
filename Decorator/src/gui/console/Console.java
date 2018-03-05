package gui.console;

import entities.PizzaComponent;
import entities.decorators.Decorator;
import entities.decorators.GorgonzolaDecorator;
import entities.decorators.MussarelaDecorator;
import entities.interfaces.Component;
import gui.interfaces.IGUI;

public class Console implements IGUI{

	public void start() {
        Component pizza = new PizzaComponent();
        Decorator gorgonzola = new GorgonzolaDecorator(pizza);
        Decorator mussarela = new MussarelaDecorator(gorgonzola);
        mussarela.assar();
	}

}
