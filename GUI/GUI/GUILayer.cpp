#include "GUIlayer.h"
GUILayer::GUILayer(RenderWindow &Swindow, Vector2f position_, Vector2f size_) : IDrawable(position_, size_)
{
	window = &Swindow;
}

void GUILayer::SetWindow(RenderWindow &Swindow)
{
	window = &Swindow;
}

std::shared_ptr<GUIBox> GUILayer::CreateBox(float x, float y, float width, float height, std::string text_, TextStyle *tstyle, GUIStyle *gstyle)
{
	std::shared_ptr<GUIBox> box (new GUIBox(window, x, y, width, height, text_, tstyle, gstyle));
	elements.push_back(box);
	return box;
}
std::shared_ptr<GUIBox> GUILayer::CreateBox(Vector2f position_, Vector2f size_, std::string text_, TextStyle *tstyle, GUIStyle *gstyle)
{
	std::shared_ptr<GUIBox> box (new GUIBox(window, position_, size_, text_, tstyle, gstyle));
	elements.push_back(box);
	return box;
}
std::shared_ptr<GUIBox> GUILayer::CreateBox(float x, float y, Vector2f size_, std::string text_, TextStyle *tstyle, GUIStyle *gstyle)
{
	std::shared_ptr<GUIBox> box (new GUIBox(window, x, y, size_, text_, tstyle, gstyle));
	elements.push_back(box);
	return box;
}
std::shared_ptr<GUIBox> GUILayer::CreateBox(Vector2f position_, float width, float height, std::string text_, TextStyle *tstyle, GUIStyle *gstyle)
{
	std::shared_ptr<GUIBox> box (new GUIBox(window, position_, width, height, text_, tstyle, gstyle));
	elements.push_back(box);
	return box;
}

std::shared_ptr<GUIButton> GUILayer::CreateButton(float x, float y, float width, float height, std::string text_, TextStyle *tstyle, GUIStyle *gstyle, void(*action)())
{
	std::shared_ptr<GUIButton> button (new GUIButton(window, x, y, width, height, text_, tstyle, gstyle, action));
	elements.push_back(button);
	return button;
}
std::shared_ptr<GUIButton> GUILayer::CreateButton(Vector2f position_, Vector2f size_, std::string text_, TextStyle *tstyle, GUIStyle *gstyle, void(*action)())
{
	std::shared_ptr<GUIButton> button (new GUIButton(window, position_, size_, text_, tstyle, gstyle, action));
	elements.push_back(button);
	return button;
}
std::shared_ptr<GUIButton> GUILayer::CreateButton(Vector2f position_, float width, float height, std::string text_, TextStyle *tstyle, GUIStyle *gstyle, void(*action)())
{
	std::shared_ptr<GUIButton> button (new GUIButton(window, position_, width, height, text_, tstyle, gstyle, action));
	elements.push_back(button);
	return button;
}
std::shared_ptr<GUIButton> GUILayer::CreateButton(float x, float y, Vector2f size_, std::string text_, TextStyle *tstyle, GUIStyle *gstyle, void(*action)())
{
	std::shared_ptr<GUIButton> button (new GUIButton(window, x, y, size_, text_, tstyle, gstyle, action));
	elements.push_back(button);
	return button;
}

void GUILayer::Draw()
{
	for (std::shared_ptr<IDisplayable> bo : elements)
		bo->Draw();
}