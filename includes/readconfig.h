#ifndef READCONFIG_H_INCLUDED
#define READCONFIG_H_INCLUDED

#define SIZE 1024
#define MAXBUF 1024

struct config
{
   char ControlerName[MAXBUF];
   char ControlerMode[MAXBUF];
   char MidiPort[MAXBUF];
   char UiAddr[MAXBUF];
   char SyncId[MAXBUF];
   char Lcd[SIZE];
   char NbMidiFader[SIZE];
   char AddrMidiMix[SIZE];
   char AddrMidiEncoder[SIZE];
   char AddrMidiEncoderPan[SIZE];
   char AddrMidiEncoderSession[SIZE];
   char TypePan[SIZE];
   char AddrMidiButtonLed[SIZE];
   char AddrMidiRec[SIZE];
   char NbRecButton[SIZE];
   char AddrMidiMute[SIZE];
   char AddrMidiSolo[SIZE];
   char AddrMidiMaster[SIZE];
   char AddrMidiSelect[SIZE];
   char AddrMidiTouch[SIZE];
   char IdTrackPrev[SIZE];
   char IdTrackNext[SIZE];
   char IdLoop[SIZE];
   char IdMarkerSet[SIZE];
   char IdMarkerLeft[SIZE];
   char IdMarkerRight[SIZE];
   char IdRewind[SIZE];
   char IdForward[SIZE];
   char IdStop[SIZE];
   char IdPlay[SIZE];
   char IdRec[SIZE];
   char AddrMidiBar[SIZE];
   char AddrMidiValueBar[SIZE];
   char SysExHdr[SIZE];
   char i_Tap[SIZE];
   char i_Dim[SIZE];
   char i_SnapShotNavUp[SIZE];
   char i_SnapShotNavDown[SIZE];
   char i_StopUI2Mcp[SIZE];
   char i_Validation[SIZE];
   char AddrMidiParamButton[SIZE];
   char AddrMidiSessionButton[SIZE];
   char AddrMuteClear[SIZE];
   char AddrMuteSolo[SIZE];
   char AddrShiftLeft[SIZE];
   char AddrShiftRight[SIZE];
   char NbPanButton[SIZE];
   char AddrSoundCheck[SIZE];
   char AddrShowsSelect[SIZE];
   char AddrSnapShotsSelect[SIZE];
   char AddrCuesSelect[SIZE];
   char AddrPanSelect[SIZE];
};

/**
 * Function for read and load in variable.
 */
struct config get_config(char *filename);

#endif // READCONFIG_H_INCLUDED
