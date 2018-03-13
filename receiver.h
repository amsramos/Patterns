#ifndef RECEIVER_H
#define RECEIVER_H

class Receiver
{
public:
    Receiver(double value);
    void sum(double value);
    void multiply(double value);

private:
    double m_number;
};

#endif // RECEIVER_H
