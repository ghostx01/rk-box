
#ifndef ___gmarshal_MARSHAL_H__
#define ___gmarshal_MARSHAL_H__

#include	<glib-object.h>

G_BEGIN_DECLS

/* VOID:OBJECT,ENUM (gstmarshal.list:1) */
extern void _gmarshal_VOID__OBJECT_ENUM (GClosure     *closure,
                                         GValue       *return_value,
                                         guint         n_param_values,
                                         const GValue *param_values,
                                         gpointer      invocation_hint,
                                         gpointer      marshal_data);

/* VOID:OBJECT,INT64 (gstmarshal.list:2) */
extern void _gmarshal_VOID__OBJECT_INT64 (GClosure     *closure,
                                          GValue       *return_value,
                                          guint         n_param_values,
                                          const GValue *param_values,
                                          gpointer      invocation_hint,
                                          gpointer      marshal_data);

/* VOID:OBJECT,INT (gstmarshal.list:3) */
extern void _gmarshal_VOID__OBJECT_INT (GClosure     *closure,
                                        GValue       *return_value,
                                        guint         n_param_values,
                                        const GValue *param_values,
                                        gpointer      invocation_hint,
                                        gpointer      marshal_data);

/* VOID:OBJECT,DOUBLE (gstmarshal.list:4) */
extern void _gmarshal_VOID__OBJECT_DOUBLE (GClosure     *closure,
                                           GValue       *return_value,
                                           guint         n_param_values,
                                           const GValue *param_values,
                                           gpointer      invocation_hint,
                                           gpointer      marshal_data);

G_END_DECLS

#endif /* ___gmarshal_MARSHAL_H__ */

