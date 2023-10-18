from collections import namedtuple

Param = namedtuple('param', ['type', 'name'])
Function = namedtuple('Function', ['return_type', 'name', 'params', 'docs', 'generate_default_bindings'])
HandlerInfo = namedtuple('HandlerInfo', ['name', 'functions'])

BINDGEN = True
NO_BINDGEN = False

HANDLERS = [
    HandlerInfo("PluginSetupHandler", [
        Function('void', 'registerPluginData', [Param('std::string const&', 'id'), Param('void*', 'data')],
                 'Register a user-defined plugin data structure, that can be retrieved in other hooks.',
                 NO_BINDGEN),
        Function('void*', 'getPluginData', [Param('std::string const&', 'id')],
                 'Returns the plugin data previously registered with `registerPluginData`.',
                 NO_BINDGEN),
        Function('void', 'unregisterPluginData', [Param('std::string const&', 'id')],
                 'Unregister a plugin data. Please make sure you delete the data before calling this, or the resource will leak.',
                 NO_BINDGEN),
    ])
]
