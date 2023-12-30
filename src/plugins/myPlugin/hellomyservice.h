#ifndef HELLO_MYSERVICE_H
#define HELLO_MYSERVICE_H

#include <QObject>

namespace HelloMyPlugin {

class Service
{
public:
    virtual ~Service() {}

    virtual void sayHello() = 0;
};

} // namespace HelloMyPlugin

#define HelloMyPlugin_Service_iid "waleon.blog.csdn.net.qesplugin.helloMyPlugin.service"
Q_DECLARE_INTERFACE(HelloMyPlugin::Service, HelloMyPlugin_Service_iid)

#endif // HELLO_MYSERVICE_H
