#ifndef HELLO_MYSERVICE_IMPL_H
#define HELLO_MYSERVICE_IMPL_H

#include "hellomyservice.h"

namespace HelloMyPlugin {

class HelloServiceImplPrivate;

class HelloServiceImpl : public QObject, public HelloMyPlugin::Service
{
    Q_OBJECT

    Q_INTERFACES(HelloMyPlugin::Service)

public:
    explicit HelloServiceImpl(QObject *parent = Q_NULLPTR);
    ~HelloServiceImpl();

    void sayHello() Q_DECL_OVERRIDE;
};

} // namespace HelloMyPlugin

#endif // HELLO_MYSERVICE_IMPL_H
