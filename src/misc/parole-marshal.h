
#ifndef __parole_marshal_MARSHAL_H__
#define __parole_marshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:OBJECT,ENUM (parole-marshal.list:1) */
extern void parole_marshal_VOID__OBJECT_ENUM (GClosure     *closure,
                                              GValue       *return_value,
                                              guint         n_param_values,
                                              const GValue *param_values,
                                              gpointer      invocation_hint,
                                              gpointer      marshal_data);

/* VOID:OBJECT,DOUBLE (parole-marshal.list:2) */
extern void parole_marshal_VOID__OBJECT_DOUBLE (GClosure     *closure,
                                                GValue       *return_value,
                                                guint         n_param_values,
                                                const GValue *param_values,
                                                gpointer      invocation_hint,
                                                gpointer      marshal_data);

/* VOID:OBJECT,INT (parole-marshal.list:3) */
extern void parole_marshal_VOID__OBJECT_INT (GClosure     *closure,
                                             GValue       *return_value,
                                             guint         n_param_values,
                                             const GValue *param_values,
                                             gpointer      invocation_hint,
                                             gpointer      marshal_data);

G_END_DECLS

#endif /* __parole_marshal_MARSHAL_H__ */

