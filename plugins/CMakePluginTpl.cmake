### DEFAULT CC "STANDARD" PLUGIN CMAKE SCRIPT ###

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories( ${CMAKE_CURRENT_BINARY_DIR} )
include_directories( ${CloudComparePlugins_SOURCE_DIR} )
include_directories( ${GLEW_LIB_SOURCE_DIR}/include )
include_directories( ${CC_FBO_LIB_SOURCE_DIR}/include )
include_directories( ${CC_CORE_LIB_SOURCE_DIR}/include )
include_directories( ${QCC_IO_LIB_SOURCE_DIR} )
include_directories( ${QCC_DB_LIB_SOURCE_DIR} )
if( MSVC )
include_directories( ${QCC_DB_LIB_SOURCE_DIR}/msvc )
endif()
include_directories( ${QCC_GL_LIB_SOURCE_DIR} )
include_directories( ${EXTERNAL_LIBS_INCLUDE_DIR} )

file( GLOB header_list *.h)
file( GLOB source_list *.cpp)
# force the link with ccStdPluginInterface.cpp
list( APPEND source_list ${CloudComparePlugins_SOURCE_DIR}/ccStdPluginInterface.cpp )
file( GLOB ui_list *.ui )
file( GLOB qrc_list *.qrc )
file( GLOB rc_list *.rc )

if ( CC_PLUGIN_CUSTOM_HEADER_LIST )
	list( APPEND header_list ${CC_PLUGIN_CUSTOM_HEADER_LIST} )
endif()

if ( CC_PLUGIN_CUSTOM_SOURCE_LIST )
	list( APPEND source_list ${CC_PLUGIN_CUSTOM_SOURCE_LIST} )
endif()

if (CC_PLUGIN_CUSTOM_UI_LIST)
	list( APPEND ui_list ${CC_PLUGIN_CUSTOM_UI_LIST} )
endif()


qt_wrap_ui( generated_ui_list ${ui_list} )
qt_add_resources( generated_qrc_list ${qrc_list} )

add_library( ${PROJECT_NAME} SHARED ${header_list} ${source_list} ${moc_list} ${generated_ui_list} ${generated_qrc_list})

# Add custom default prepocessor definitions
set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS USE_GLEW GLEW_STATIC )
if( WIN32 )
    set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS CC_USE_AS_DLL QCC_DB_USE_AS_DLL QCC_IO_USE_AS_DLL )
endif()

# Plugins need the QT_NO_DEBUG preprocessor in release!
if( NOT CMAKE_CONFIGURATION_TYPES )
    set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS QT_NO_DEBUG )
else()
	set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS_RELEASE QT_NO_DEBUG)
endif()

target_link_libraries( ${PROJECT_NAME} GLEW_LIB )
target_link_libraries( ${PROJECT_NAME} CC_FBO_LIB )
target_link_libraries( ${PROJECT_NAME} CC_CORE_LIB )
target_link_libraries( ${PROJECT_NAME} QCC_DB_LIB )
target_link_libraries( ${PROJECT_NAME} QCC_IO_LIB )
target_link_libraries( ${PROJECT_NAME} QCC_GL_LIB )

if ( USE_QT5 )
	qt5_use_modules(${PROJECT_NAME} Core Gui Widgets OpenGL Concurrent)
endif()

if( APPLE )
	install( TARGETS ${PROJECT_NAME} LIBRARY DESTINATION ${CLOUDCOMPARE_MAC_BASE_DIR}/Contents/Plugins/ccPlugins COMPONENT Runtime )
	set( CLOUDCOMPARE_PLUGINS ${CLOUDCOMPARE_PLUGINS} ${CLOUDCOMPARE_MAC_BASE_DIR}/Contents/Plugins/ccPlugins/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX} CACHE INTERNAL "CloudCompare plugin list")
else()
	install_shared( ${PROJECT_NAME} ${CLOUDCOMPARE_DEST_FOLDER} 1 /plugins )
endif()

#GL filters and IO plugins also go the the ccViewer 'plugins' sub-folder
if( ${OPTION_BUILD_CCVIEWER} )

	if( CC_SHADER_FOLDER OR CC_IS_IO_PLUGIN )
		if( APPLE )
			install( TARGETS ${PROJECT_NAME} LIBRARY DESTINATION ${CCVIEWER_MAC_BASE_DIR}/Contents/Plugins/ccViewerPlugins COMPONENT Runtime )
			set( CCVIEWER_PLUGINS ${CCVIEWER_PLUGINS} ${CCVIEWER_MAC_BASE_DIR}/Contents/Plugins/ccViewerPlugins/lib${PROJECT_NAME}${CMAKE_SHARED_LIBRARY_SUFFIX} CACHE INTERNAL "ccViewer plugin list")
		else()
			install_shared( ${PROJECT_NAME} ${CCVIEWER_DEST_FOLDER} 1 /plugins )
		endif()
	endif()

endif()

#'GL filter' plugins specifics
if( CC_SHADER_FOLDER )

	#copy the shader files
	file( GLOB shaderFiles shaders/${CC_SHADER_FOLDER}/*.frag shaders/${CC_SHADER_FOLDER}/*.vert )
	foreach( filename ${shaderFiles} )
		if( APPLE )
			install( FILES ${filename} DESTINATION ${CLOUDCOMPARE_MAC_BASE_DIR}/Contents/Shaders/${CC_SHADER_FOLDER} )
			if( ${OPTION_BUILD_CCVIEWER} )
				install( FILES ${filename} DESTINATION ${CCVIEWER_MAC_BASE_DIR}/Contents/Shaders/${CC_SHADER_FOLDER} )
			endif()
		else()
			install_ext( FILES ${filename} ${CLOUDCOMPARE_DEST_FOLDER} /shaders/${CC_SHADER_FOLDER} )
			if( ${OPTION_BUILD_CCVIEWER} )
				install_ext( FILES ${filename} ${CCVIEWER_DEST_FOLDER} /shaders/${CC_SHADER_FOLDER} )
			endif()
		endif()
	endforeach()

endif()

### END OF DEFAULT CC PLUGIN CMAKE SCRIPT ###
