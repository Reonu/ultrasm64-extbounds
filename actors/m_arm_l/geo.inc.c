#include "src/game/envfx_snow.h"

const GeoLayout m_arm_l_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, m_arm_l_skinned_005_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, m_arm_l_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
