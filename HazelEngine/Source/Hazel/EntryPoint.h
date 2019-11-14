#pragma once

#ifdef HAZEL_PLATFORM_WINDOWS

extern hazel::Application* hazel::createApplication();

int main(int argc, char** argv) {
	hazel::Application* app = hazel::createApplication();
	app->run();
	delete app;

	return 0;
}

#endif