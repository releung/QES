#include "myplugin.h"
#include "hellomyserviceimpl.h"
#include "extensionsystem/pluginmanager.h"

namespace HelloMyPlugin {
namespace Internal {

class MyPluginPrivate
{
public:
    MyPluginPrivate();
    ~MyPluginPrivate();

    HelloServiceImpl helloService;
};

MyPluginPrivate::MyPluginPrivate()
{
    ExtensionSystem::PluginManager::addObject(&helloService);
}

MyPluginPrivate::~MyPluginPrivate()
{
    ExtensionSystem::PluginManager::removeObject(&helloService);
}

static MyPluginPrivate *dd = nullptr;

MyPlugin::MyPlugin()
{
}

MyPlugin::~MyPlugin()
{
    delete dd;
}

bool MyPlugin::initialize(const QStringList &arguments, QString *errorMessage)
{
    Q_UNUSED(arguments)
    Q_UNUSED(errorMessage)

    dd = new MyPluginPrivate();

    qDebug() << "initialize HelloMyPlugin Plugin";

    return true;
}

void MyPlugin::extensionsInitialized()
{
    qDebug() << "extensions initialized HelloMyPlugin Plugin";
}

bool MyPlugin::delayedInitialize()
{
    qDebug() << "delayed initialize HelloMyPlugin Plugin";

    return true;
}

} // namespace Internal
} // namespace HelloMyPlugin

