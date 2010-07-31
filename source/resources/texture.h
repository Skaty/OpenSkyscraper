#ifndef OSS_TEXTURE_H
#define OSS_TEXTURE_H

#include "../general.h"
#include "store.h"
#include "storeitem.h"


namespace OSS {
	class Texture : public StoreItem {
	public:		
		//Initialization
		Texture(std::string name);
		~Texture();
		virtual std::string instanceName();
		
		//Store
		OSSStoreItemStoreAccess(Texture)
		
		//Loading
		void load();
		void finalize();
		
		//Unloading
		void unfinalize();
		void unload();
		
		//Texture
		ILuint tempImage;
		GLuint textureID;
		int2 size;
		
		//Binding
		void bind();
		static void unbind();
	};
	
	typedef Store<Texture> TextureStore;
}


#endif
