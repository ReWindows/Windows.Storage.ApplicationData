#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 6 member(s).
class Common {
public:
    class DirectoryTreeWalker;
    class StaticLock;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoHandleCloseRegKey@Common@@YAXPEAUHKEY__@@@Z
    void AutoHandleCloseRegKey(HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectoryExists@Common@@YAJPEBGPEA_N@Z
    long DirectoryExists(unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ErrorIsFileSystemEntryNotFound@Common@@YA_NK@Z
    bool ErrorIsFileSystemEntryNotFound(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirectoryReparsePointOpaque@Common@@YA_NAEBU_WIN32_FIND_DATAW@@@Z
    bool IsDirectoryReparsePointOpaque(_WIN32_FIND_DATAW const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WalkDirectoryTree@Common@@YAJPEBGIP6AJPEAX0PEBU_WIN32_FIND_DATAW@@@Z1P6AJ1PEAGPEAPEAXPEAU2@@ZP6AJ116@ZP6AJ11@Z@Z
    long WalkDirectoryTree(unsigned short const *, unsigned int, long ( *)(void *, unsigned short const *, _WIN32_FIND_DATAW const *), void *, long ( *)(void *, unsigned short *, void * *, _WIN32_FIND_DATAW *), long ( *)(void *, void *, _WIN32_FIND_DATAW *), long ( *)(void *, void *));
};
