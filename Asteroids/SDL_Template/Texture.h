#pragma once
#include "GameEntity.h"
#include "AssetManager.h"

namespace SDLFramework {

	class Texture : public GameEntity {
	protected:
		SDL_Texture * mTex;
		Graphics * mGraphics;

		int mWidth;
		int mHeight;

		bool mClipped;
		SDL_Rect mSourceRect;
		SDL_Rect mDestinationRect;

	public:
		Texture(std::string filename, bool managed = true);
		Texture(std::string filename, int x, int y, int w, int h, bool managed = true);
		Texture(std::string text, std::string fontPath, int size, SDL_Color color, bool managed = true);
		~Texture();

		Vector2 ScaledDimensions();

		void SetSourceRect(SDL_Rect * sourceRect);

		void Render() override;
	};
}