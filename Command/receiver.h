#ifndef RECEIVER_H
#define RECEIVER_H

#include <QString>

class Receiver
{
public:
    Receiver(double value);
    void sum(double value);
    void multiply(double value);
    QString toString() const;

private:
    double m_number;
};

#endif // RECEIVER_H
