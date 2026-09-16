#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 4 member(s).
class StateSchema {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateSchemaContext@StateSchema@@YAJPEAX_NPEAUSCHEMA_CONTEXT@1@@Z
    long GetOrCreateSchemaContext(void *, bool, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageFullName@StateSchema@@YAJPEAUSCHEMA_CONTEXT@1@PEAPEAG@Z
    long GetPackageFullName(WindissectOpaque *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemasRootKeyAndPath@StateSchema@@YAJPEAXPEAPEAUHKEY__@@PEAPEAG@Z
    long GetSchemasRootKeyAndPath(void *, HKEY__* *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateSchema@StateSchema@@YAJPEAUSCHEMA_CONTEXT@1@PEAI@Z
    long GetStateSchema(WindissectOpaque *, unsigned int *);
};
