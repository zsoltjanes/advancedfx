#pragma once

bool csgo_Audio_Install(void);

bool csgo_Audio_StartRecording(char const * ansiTakeDir);
void csgo_Audio_EndRecording(void);

void csgo_Audio_FRAME_START(void);
