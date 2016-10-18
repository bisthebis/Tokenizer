#include <QtCore>

#include "token_utils/test.hpp"

int main(int argc, char** argv)
{
	QCoreApplication app(argc, argv);

	QTimer::singleShot(1000, [](){qDebug() << "Leaving..."; printHiAndQuit(); qApp->quit();});
	
	return app.exec();

}
