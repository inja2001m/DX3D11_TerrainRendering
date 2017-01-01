#ifndef _SHADERMANAGERCLASS_H_
#define _SHADERMANAGERCLASS_H_

#include "D3DClass.h"
#include "ColorshaderClass.h"
#include "TextureShaderClass.h"
#include "FontShaderClass.h"

class ShaderManagerClass
{
public:
	ShaderManagerClass();
	ShaderManagerClass(const ShaderManagerClass &);
	~ShaderManagerClass();

	bool Initialize(ID3D11Device *, HWND);
	void Shutdown();

	bool RenderColorShader(ID3D11DeviceContext *, int, XMMATRIX, XMMATRIX, XMMATRIX);
	bool RenderTextureShader(ID3D11DeviceContext *, int, XMMATRIX, XMMATRIX, XMMATRIX, ID3D11ShaderResourceView *);
	bool RenderFontShader(ID3D11DeviceContext *, int, XMMATRIX, XMMATRIX, XMMATRIX, ID3D11ShaderResourceView *, XMFLOAT4);

private:
	ColorShaderClass *m_ColorShader;
	TextureShaderClass *m_TextureShader;
	FontShaderClass *m_FontShader;
};

#endif