#ifndef XPP_BUTTONEVENT_HXX
#define XPP_BUTTONEVENT_HXX

// X++
#include "X++/event/InputEvent.hxx"

namespace xpp {

class ButtonEvent :
		public InputEvent<XButtonEvent> {
public: // functions

	explicit ButtonEvent(const Event &ev) :
			InputEvent{ev.toButtonEvent()} {}

	Button buttonNr() const { return Button{m_ev.button}; }
};

} // end ns

#endif // inc. guard
