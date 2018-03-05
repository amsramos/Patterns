package gui.jframe;

import java.io.File;
import java.net.URL;
import java.net.URLClassLoader;
import java.util.HashMap;
import java.util.Map;

import entities.interfaces.IPrototype;

public class PluginsLoader {

	public PluginsLoader() throws Exception{
		this.plugins = new HashMap<String, IPrototype>();
		loadPlugins();
	}
	
	@SuppressWarnings("deprecation")
	private void loadPlugins() throws Exception{
		File currentDir = new File("./plugins");
		String []plugins = currentDir.list();
		int i;
		URL[] jars = new URL[plugins.length];
		for (i = 0; i < plugins.length; i++){
		    jars[i] = (new File("./plugins/" + plugins[i])).toURL();
		}
	    URLClassLoader ulc = new URLClassLoader(jars);
	    for (i = 0; i < plugins.length; i++){
	    	String className = plugins[i].split("\\.")[0];
	    	IPrototype objectDecorator = (IPrototype) Class.forName("entities.decorators." + className, true, ulc).newInstance();
		    this.plugins.put(className, objectDecorator);
		}
	}
	
	public Map<String, IPrototype> getPlugins(){
		return this.plugins;
	}

	private Map<String, IPrototype> plugins;
	
}