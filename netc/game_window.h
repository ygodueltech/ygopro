#ifndef _GAME_WINDOW_H_
#define _GAME_WINDOW_H_

#include "../common/common.h"
#include "frame_controler.h"
#include "config_mgr.h"
#include "wx/frame.h"
#include <vector>
#include <queue>

#include "duel_message.h"

namespace ygopro
{

	class GameFrame : public wxFrame, public DuelMessage, public FrameControler, public ConfigMgr
	{
	public:
		GameFrame(int sx, int sy);
		~GameFrame();

		virtual void HandleMessage(unsigned int msg, unsigned int size, void* data);

	protected:
		DECLARE_EVENT_TABLE()
	};

	extern GameFrame* mainFrame;
	extern Random globalRandom;

}

#endif //_GAME_H_
