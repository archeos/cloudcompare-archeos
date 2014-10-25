# ALL 'contrib' supported libraries 

# liblas support
include( contrib/LiblasSupport.cmake )
# XIOT support
include( contrib/XIOTSupport.cmake )
# E57 support
include( contrib/E57Support.cmake )
# 3DXWARE (3dConnexion devices) support
include( contrib/3DXSupport.cmake )
# PDMS support
OPTION( OPTION_SUPPORT_MAC_PDMS_FORMAT "Build with .mac PDMS format" OFF )
# DXF support
include( contrib/DxfLibSupport.cmake )
# GDAL support
include( contrib/GDALSupport.cmake )
# FBX support
include( contrib/FBXSupport.cmake )

function( target_link_contrib ) # 2 arguments: ARGV0 = project name / ARGV1 = shared lib export base folder (optional - '_debug' will be appended for debug configuration)

	# libraries with dynamic linkage can automatically 'install' their DLLs

	# liblas support
	target_link_liblas( ${ARGV0} ${ARGV1} )
	# XIOT support
	target_link_XIOT( ${ARGV0} ${ARGV1} )
	#GDAL support
	target_link_GDAL( ${ARGV0} ${ARGV1} )
		
	# E57 support
	target_link_LIBE57( ${ARGV0} )
	#DXF support
	target_link_DXFLIB( ${ARGV0} )
	#FBX support
	target_link_FBX_SDK( ${ARGV0} )
	
	# PDMS support (see qCC_io)
	if( ${OPTION_SUPPORT_MAC_PDMS_FORMAT} )
		set_property( TARGET ${PROJECT_NAME} APPEND PROPERTY COMPILE_DEFINITIONS CC_PDMS_SUPPORT )
	endif()

endfunction()
