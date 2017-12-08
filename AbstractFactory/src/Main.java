import java.util.Scanner;
import java.io.File;
import java.net.URL;
import java.net.URLClassLoader;

import interfaces.*;

class Main
{
  public static void createProducts(AbstractFactory factory)
  {
    AbstractProduct1 p1 = factory.createProduct1();
    p1.sayHello();
    AbstractProduct2 p2 = factory.createProduct2();
    p2.sayHi();
  }
  
  // 1o estágio: não usar o AbstractFactory
  //             Se deseja-se modificar 10 produtos
  //		 10 linhas de código (no mínimo)
  //		 teriam de ser modificadas

  // 2o estágio: uso do AbstractFactory
  //		 (não é possível modificar a fábrica
  //		 em run-time)
  //             Troca-se todos os produtos com a
  //		 modificação de apenas uma linha
  //		 de código

  // 3o estágio:
  //		 É possível modificar a fábrica
  //		 em run-time porém para uma fábrica
  //		 dentre um conjunto previamente
  //		 definido de fábricas

  // 4o estágio:
  //		 É possível modificar a fábrica
  //		 em run-time para qualquer tipo
  //		 concreto de fábricas cujo arquivo
  //		 .class está presente em um diretório
  //		 de plugins, específico desta aplicação

/*
  public static void main(String []args) // 2o estagio
  {
    createProducts(new Factory2());
  }
*/

/*
  public static void main(String []args) // 3o estagio
  {
    System.out.println("1 - Factory1");
    System.out.println("2 - Factory2");
    System.out.println("Escolha sua opção: ");
    Scanner sc = new Scanner(System.in);
    int op = sc.nextInt();
    AbstractFactory factory = null;
    switch (op)
    {
      case 1: factory = new Factory1(); break;
      case 2: factory = new Factory2(); break;
      // É necessário inserir mais um case aqui
      // para suportar novas fábricas
    }
    createProducts(factory);
  }
*/

  public static void main(String []args) throws Exception // 4o estagio
  {
    int op;
    do
    {
      File currentDir = new File("./plugins");
      String []plugins = currentDir.list();
      int i;
      URL[] jars = new URL[plugins.length];
      for (i = 0; i < plugins.length; i++)
      {
	System.out.println(i+1 + " - " + plugins[i].split("\\.")[0]);
	jars[i] = (new File("./plugins/" + plugins[i])).toURL();
      }
      URLClassLoader ulc = new URLClassLoader(jars);
      System.out.println(i+1 + " - Plugin refresh");
      System.out.println("Escolha sua opção ou 0 para sair: ");
      Scanner sc = new Scanner(System.in);
      op = sc.nextInt();
      if (op != 0 && op != i+1)
      {
	String factoryName = plugins[op-1].split("\\.")[0];
	AbstractFactory factory = (AbstractFactory) Class.forName(factoryName.toLowerCase() + "." + factoryName, true, ulc).newInstance();
	createProducts(factory);
      }
    } while (op != 0);
  }

}
