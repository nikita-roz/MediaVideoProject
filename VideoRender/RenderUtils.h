#pragma once

D3DFORMAT GetD3D9PixelFmtByFourCC(DWORD);
TCHAR *GetD3D9PixelFmtDescByD3D9Fmt(D3DFORMAT);
TCHAR *GetD3D9PixelFmtDescByFourCC(DWORD);
DWORD GetFourCCByD3D9PixelFmt(D3DFORMAT);
DWORD WINAPI CreateRenderThread(void*);

