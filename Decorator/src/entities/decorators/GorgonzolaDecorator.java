package entities.decorators;
import entities.interfaces.Component;
import entities.interfaces.IPrototype;

public class GorgonzolaDecorator extends Decorator implements IPrototype{

	public GorgonzolaDecorator(){
		super(null);
	}
	
    public GorgonzolaDecorator(Component component){
        super(component);
    }
    
    public void addGorgonzola(){
        System.out.print(" + gorgonzola");
    }
    
    public IPrototype clone(){
        return new GorgonzolaDecorator(null);
    }
    
    public void assar(){
        super.assar();
        this.addGorgonzola();
    }

}
