macro (codevis_install_plugin TARGET_NAME PLUGIN_NAME)
    install(TARGETS ${TARGET_NAME} DESTINATION "${KDE_INSTALL_DATAROOTDIR}/codevis/plugins/${PLUGIN_NAME}")
    install(FILES README.md metadata.json DESTINATION "${KDE_INSTALL_DATAROOTDIR}/codevis/plugins/${PLUGIN_NAME}")
endmacro()

macro (codevis_install_python_plugin PYFILE_NAME PLUGIN_NAME)
    install(FILES ${PYFILE_NAME} README.md metadata.json DESTINATION "${KDE_INSTALL_DATAROOTDIR}/codevis/plugins/${PLUGIN_NAME}")
endmacro()
