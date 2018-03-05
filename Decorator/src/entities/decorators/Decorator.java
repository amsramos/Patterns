package entities.decorators;
import entities.interfaces.Component;

public class Decorator implements Component {

    protected Component decorated;
    
    protected Decorator(Component component){
        this.setDecorated(component);
    }
    
    public void setDecorated(Component component){
        this.decorated = component;
    }

	public void assar() {
        this.decorated.assar();
	}

}