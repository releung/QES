
#ifndef MYPLUGIN_H
#define MYPLUGIN_H

#include <extensionsystem/iplugin.h>

namespace HelloMyPlugin {
namespace Internal {

class MyPluginPrivate;

class MyPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT

    Q_PLUGIN_METADATA(IID "waleon.blog.csdn.net.qesplugin" FILE "myPlugin.json")

public:
    MyPlugin();
    ~MyPlugin();

    bool initialize(const QStringList &arguments, QString *errorMessage);
    void extensionsInitialized();
    bool delayedInitialize();

private:
    QScopedPointer<Internal::MyPluginPrivate> dd_ptr;
    Q_DECLARE_PRIVATE_D(dd_ptr,Internal::MyPlugin)
};

} // namespace Internal
} // namespace HelloMyPlugin

#endif // MYPLUGIN_H
