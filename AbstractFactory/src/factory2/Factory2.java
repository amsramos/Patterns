package factory2;

import interfaces.AbstractFactory;
import interfaces.AbstractProduct1;
import interfaces.AbstractProduct2;

public class Factory2 implements AbstractFactory
{
  public AbstractProduct1 createProduct1()
  {
    return new Product12();
  }
  public AbstractProduct2 createProduct2()
  {
    return new Product22();
  }
}