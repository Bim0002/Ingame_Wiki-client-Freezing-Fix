//search :

	if (CPythonWikiRenderTarget::instance().CanRenderWikiModules()) {
		CWikiRenderTargetManager::Instance().ReleaseRenderTargetTextures();
	}

//change it with this:

CWikiRenderTargetManager::Instance().ReleaseRenderTargetTextures();

