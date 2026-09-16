#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Windows.Storage.ApplicationData.dll by Windissect. 10 member(s).
namespace Common {
class DirectoryTreeWalker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Walk@DirectoryTreeWalker@Common@@QEAAJPEBGI@Z
    long Walk(unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DirectoryTreeWalker@Common@@QEAA@XZ
    ~DirectoryTreeWalker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendNameToDirPath@DirectoryTreeWalker@Common@@AEAAJPEBG@Z
    long AppendNameToDirPath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultFindCloseCallback@DirectoryTreeWalker@Common@@CAJPEAX0@Z
    static long DefaultFindCloseCallback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultFindFirstCallback@DirectoryTreeWalker@Common@@CAJPEAXPEAGPEAPEAXPEAU_WIN32_FIND_DATAW@@@Z
    static long DefaultFindFirstCallback(void *, unsigned short *, void * *, _WIN32_FIND_DATAW *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultFindNextCallback@DirectoryTreeWalker@Common@@CAJPEAX0PEAU_WIN32_FIND_DATAW@@@Z
    static long DefaultFindNextCallback(void *, void *, _WIN32_FIND_DATAW *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstFindHandle@DirectoryTreeWalker@Common@@AEAAJPEAPEAXPEAPEAU_WIN32_FIND_DATAW@@@Z
    long GetFirstFindHandle(void * *, _WIN32_FIND_DATAW * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePath@DirectoryTreeWalker@Common@@AEAAJPEBG@Z
    long InitializePath(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirAndShouldBeWalked@DirectoryTreeWalker@Common@@AEBA_NAEBU_WIN32_FIND_DATAW@@@Z
    bool IsDirAndShouldBeWalked(_WIN32_FIND_DATAW const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visit@DirectoryTreeWalker@Common@@AEAAJ_KPEAGPEBU_WIN32_FIND_DATAW@@PEAJ@Z
    long Visit(uint64_t, unsigned short *, _WIN32_FIND_DATAW const *, long *);
};
} // namespace Common
