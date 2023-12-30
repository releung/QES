#include "hellomyserviceimpl.h"
#include <QDebug>

using namespace HelloMyPlugin;

HelloServiceImpl::HelloServiceImpl(QObject *parent)
    : QObject(parent)
{
}

HelloServiceImpl::~HelloServiceImpl()
{
}

void HelloServiceImpl::sayHello()
{
    qWarning() << "Hello, HelloMyPlugin World!";
}
