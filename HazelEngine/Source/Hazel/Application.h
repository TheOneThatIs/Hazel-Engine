#pragma once
#include"Core.h"

namespace hazel {

	class HAZEL_API Application {
	public:
		Application();
		virtual ~Application();

		void run();
	};
	// To be defined in client
	Application* createApplication();
}