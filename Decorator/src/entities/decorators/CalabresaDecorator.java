package entities.decorators;
import entities.interfaces.Component;
import entities.interfaces.IPrototype;

public class CalabresaDecorator extends Decorator implements IPrototype{

	public CalabresaDecorator(){
		super(null);
	}
	
    public CalabresaDecorator(Component component){
        super(component);
    }
    
    public void addCalabresa(){
        System.out.print(" + calabresa");
    }
    
    public IPrototype clone(){
        return new CalabresaDecorator(null);
    }
    
    public void assar(){
        super.assar();
        this.addCalabresa();
    }

}
