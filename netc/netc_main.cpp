#include "../common/common.h"
#include "../common/hash.h"
#include "game_window.h"
#include "wx/app.h"

namespace ygopro {

	class ygoApp : public wxApp
	{
	public:
		bool OnInit() {
			if(!wxApp::OnInit())
				return false;

			mainFrame = new GameFrame(960, 720);
			mainFrame->Show();
			return true;
		}
	};

	DECLARE_APP(ygoApp)
	IMPLEMENT_APP(ygoApp)

}
