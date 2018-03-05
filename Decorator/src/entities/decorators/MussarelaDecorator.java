package entities.decorators;
import entities.interfaces.Component;
import entities.interfaces.IPrototype;

public class MussarelaDecorator extends Decorator implements IPrototype{

	public MussarelaDecorator(){
		super(null);
	}
	
    public MussarelaDecorator(Component component){
        super(component);
    }
    
    public void addMussarela(){
        System.out.print(" + mussarela");
    }
    
    public IPrototype clone(){
        return new MussarelaDecorator(null);
    }
    
    public void assar(){
        super.assar();
        this.addMussarela();
    }

}
