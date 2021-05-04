#include "rack.hpp"


using namespace rack;


extern Plugin* pluginInstance;

extern Model* modelVCO;
extern Model* modelVCO2;
extern Model* modelScope;

template <typename TLightBase = RedLight>
struct LEDLightSliderFixed : LEDLightSlider<TLightBase> {
	LEDLightSliderFixed() {
		this->setHandleSvg(APP->window->loadSvg(asset::plugin(pluginInstance, "res/LEDSliderHandle.svg")));
	}
};
