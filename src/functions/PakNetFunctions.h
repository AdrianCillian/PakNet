#ifndef PAKNET_GLOBAL_CLASS_H
#define PAKNET_GLOBAL_CLASS_H

class PakNetGlobalClass {
public:
    // Network-Related PakNet Functions
    void SendPacket();
    void SendNewHttp();
    void CloseNewHttp();
    void DelayNewHttp();
    void GetNewHttp();
    void EnableHttpPacket();
    void EnablePacket();

    // Class Editing-Related PakNet Functions (Static Library)
    void NewClass();
    void ExitClass();
    void NewClassCoroutine();
    void CloseClassCoroutine();
    void NewGlobalClass();
    void ExitGlobalClass();
    void NewGlobalClassCoroutine();
    void CloseGlobalClassCoroutine();

    // Function Handler-Related Paknet Functions (Static Library)
    void HandleNewFunction();
    void AssignHandleMainClass();
    void AssignNewGlobalMainClass();
};

#endif // PAKNET_GLOBAL_CLASS_H
