


#ifndef __PAROLE_ENUM_TYPE_H__
#define __PAROLE_ENUM_TYPE_H__
#include <glib-object.h>
G_BEGIN_DECLS
/* enumerations from "parole-stream.h" */
GType parole_media_type_get_type (void);
#define PAROLE_ENUM_TYPE_MEDIA_TYPE (parole_media_type_get_type())
GType parole_state_get_type (void);
#define PAROLE_ENUM_TYPE_STATE (parole_state_get_type())
/* enumerations from "parole-provider-player.h" */
GType parole_plugin_container_get_type (void);
#define PAROLE_ENUM_TYPE_PLUGIN_CONTAINER (parole_plugin_container_get_type())
/* enumerations from "parole-pl-parser.h" */
GType parole_pl_format_get_type (void);
#define PAROLE_ENUM_TYPE_PL_FORMAT (parole_pl_format_get_type())
G_END_DECLS

#endif /* __PAROLE_ENUM_TYPE_H__ */



