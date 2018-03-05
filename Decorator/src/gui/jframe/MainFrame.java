package gui.jframe;

import gui.interfaces.IGUI;

import java.awt.EventQueue;
import java.util.Map;
import java.util.Set;

import javax.swing.DefaultListModel;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.ListModel;

import entities.PizzaComponent;
import entities.decorators.Decorator;
import entities.interfaces.Component;
import entities.interfaces.IPrototype;

import javax.swing.JButton;
import java.awt.GridLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class MainFrame extends JFrame implements IGUI{
	
	public MainFrame() throws Exception{
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 700, 300);
		contentPane = new JPanel();
		this.pluginsLoader = new PluginsLoader();
		this.decorators = pluginsLoader.getPlugins();
		this.btnPreparar = new JButton("Preparar");
		this.loadButtons();
		this.loadList();
		setContentPane(this.contentPane);
		contentPane.setLayout(new GridLayout(1, 0, 0, 0));
	}
	
	public void loadList(){
		this.listSelect = loadListSelect();
		contentPane.add(this.listSelect);
		this.listSelected = new JList<String>();
		contentPane.add(this.listSelected);
	}
	
	public void loadButtons(){
		this.btnAdd = new JButton("Adicionar");
		this.btnAdd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				@SuppressWarnings("deprecation")
				Object[] toSelect = listSelect.getSelectedValues();
				DefaultListModel<String> model = new DefaultListModel<String>();
				ListModel<String> selectedsModel = listSelected.getModel();
				for(int x = 0; x < selectedsModel.getSize(); x++)
					model.addElement(selectedsModel.getElementAt(x));
				// Adiciona os elementos selecionados na lista de disponíveis
				for(Object obj : toSelect){
					model.addElement((String) obj);
				}
				listSelected.setModel(model);
			}
		});
		contentPane.add(this.btnAdd);
		
		this.btnRemove = new JButton("Remover");
		this.btnRemove.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				@SuppressWarnings("deprecation")
				Object[] selecteds = listSelected.getSelectedValues();
				DefaultListModel<String> model = new DefaultListModel<String>();
				DefaultListModel<String> selectedModel = (DefaultListModel<String>) listSelected.getModel();
				for(Object obj : selecteds)
					selectedModel.removeElement(obj);
				listSelected.setModel(model);
			}
		});
		contentPane.add(this.btnRemove);

		this.btnPreparar = new JButton("Preparar");
		this.btnPreparar.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent arg0) {
				preparar();
			}
		});
		contentPane.add(this.btnPreparar);
	}

	public void start() {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	
	public JList<String> loadListSelect(){
		DefaultListModel<String> model = new DefaultListModel<String>();
		Set<String> decorators = this.decorators.keySet();
		for(String decorator : decorators)
			model.addElement(decorator);
		return new JList<String>(model);
	}
	
	public void preparar(){
		Component pizza = new PizzaComponent();
		Decorator decorator = null;
		int size = this.listSelected.getModel().getSize();
        for(int x = 0; x < size; x++){
        	String decoratorKey = this.listSelected.getModel().getElementAt(x);
        	decorator = (Decorator) this.decorators.get(decoratorKey).clone();
        	if(decorator != null)
        		decorator.setDecorated(pizza);
        	pizza = decorator;
        }
        pizza.assar();
	}
	
	private static final long serialVersionUID = 1L;
	private JList<String> listSelect;
	private JList<String> listSelected;
	private PluginsLoader pluginsLoader;
	private Map<String, IPrototype> decorators;
	private JPanel contentPane;
	private JButton btnPreparar;
	private JButton btnAdd;
	private JButton btnRemove;
}
