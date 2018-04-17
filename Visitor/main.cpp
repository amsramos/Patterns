#include <QCoreApplication>

#include "aluno.h"
#include "professor.h"
#include "ielement.h"
#include "ivisitor.h"
#include "visitoralturamedia.h"
#include "visitorscoremedio.h"

#include <QList>
#include <QDebug>

void realizarVisitas(QList<IElement *> agregados, QList<IVisitor *> visitors) {
    for(IElement *element : agregados)
        for(IVisitor *visitor : visitors)
            element->accept(visitor);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<IElement *> agregados;
    QList<IVisitor *> visitors;

    agregados.append(new Aluno(7.0, 1.65));
    agregados.append(new Aluno(8.5, 1.85));
    agregados.append(new Professor(1.76));
    agregados.append(new Professor(1.98));

    visitors.append(new VisitorAlturaMedia);
    visitors.append(new VisitorScoreMedio);

    realizarVisitas(agregados, visitors);

    qDebug() << "Altura média: " << ((VisitorAlturaMedia *) visitors.at(0))->getAlturaMedia();
    qDebug() << "Score médio: " << ((VisitorScoreMedio *) visitors.at(1))->getScoreMedio();

    return a.exec();

}
