#pragma once

class CTextures
{
public:
	CTextures(IDirect3DDevice9* pDevice);
	~CTextures();

	IDirect3DTexture9* tLogo;
	std::vector<RwTexture*> tMap;

private:
};

static BYTE byteLogo[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00,
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x6D,
	0x00, 0x00, 0x00, 0x15, 0x08, 0x06, 0x00, 0x00, 0x00, 0x4C,
	0x89, 0x60, 0xFA, 0x00, 0x00, 0x02, 0x76, 0x49, 0x44, 0x41,
	0x54, 0x68, 0x81, 0xE5, 0x59, 0xED, 0x71, 0xC2, 0x30, 0x0C,
	0x95, 0xB8, 0x2E, 0xC0, 0x0A, 0x74, 0x84, 0x74, 0x04, 0x18,
	0x01, 0x46, 0x48, 0x47, 0x80, 0x11, 0xE8, 0x08, 0x74, 0x04,
	0x3A, 0x02, 0x8C, 0xD0, 0x8E, 0x40, 0x46, 0x68, 0x47, 0x50,
	0x4F, 0x54, 0xE9, 0xB9, 0x89, 0xEC, 0x58, 0x06, 0x37, 0xA6,
	0x7D, 0x77, 0xF9, 0x53, 0x6A, 0xE9, 0x59, 0x2F, 0xFA, 0xB0,
	0x83, 0x90, 0x01, 0x44, 0x34, 0x03, 0x80, 0xA5, 0xC1, 0x72,
	0x83, 0x88, 0x2F, 0xF0, 0xB5, 0xB6, 0x06, 0x80, 0x69, 0xEC,
	0x42, 0x44, 0x7C, 0xCA, 0xB1, 0x87, 0x18, 0x10, 0x11, 0xFB,
	0x37, 0x73, 0x06, 0x80, 0x67, 0x44, 0xFC, 0x00, 0xB1, 0x11,
	0xC0, 0x5A, 0xF9, 0xA9, 0xE9, 0xFD, 0x85, 0x88, 0xD6, 0x44,
	0xF4, 0x4E, 0x76, 0x2C, 0x65, 0xFD, 0x8C, 0x88, 0x4E, 0x86,
	0xD5, 0xAF, 0x44, 0x34, 0x75, 0x7C, 0x5B, 0x30, 0x8F, 0x0C,
	0xEE, 0x54, 0xFC, 0x74, 0xE1, 0x5D, 0x2F, 0x5C, 0x82, 0xF6,
	0x39, 0xE0, 0x09, 0x9C, 0xEB, 0xAE, 0x0F, 0xB1, 0xA3, 0x3D,
	0x5A, 0x1C, 0x77, 0x2E, 0x81, 0xCA, 0x18, 0x6C, 0x17, 0xF3,
	0x81, 0xE0, 0xF8, 0xE0, 0x0A, 0x56, 0xA7, 0xF8, 0x8C, 0x14,
	0xED, 0x60, 0xB1, 0xE1, 0x70, 0x19, 0x12, 0xCD, 0xCA, 0xB9,
	0xD6, 0x7C, 0x24, 0x89, 0x26, 0xD9, 0x91, 0x92, 0x5D, 0x3F,
	0x36, 0x76, 0x63, 0x82, 0xA9, 0x76, 0x3A, 0x5C, 0x42, 0x99,
	0xB8, 0x34, 0x72, 0xD6, 0x04, 0xA3, 0x4B, 0x44, 0xDB, 0x19,
	0x09, 0xF4, 0x36, 0x45, 0x44, 0x7B, 0xC3, 0xBA, 0x93, 0x23,
	0xD8, 0x3C, 0xD5, 0xE7, 0x85, 0x82, 0xF5, 0x6C, 0x29, 0x5C,
	0x7C, 0x99, 0x58, 0x19, 0x39, 0xAF, 0x43, 0x3E, 0xCC, 0xA2,
	0x49, 0x49, 0x4B, 0x81, 0x2B, 0x98, 0x45, 0xF4, 0x93, 0x0C,
	0x2A, 0xB9, 0x05, 0x8B, 0x79, 0x89, 0xDC, 0x3D, 0x68, 0x5C,
	0xB4, 0x4C, 0xAC, 0x8C, 0x55, 0x29, 0x24, 0x18, 0xA5, 0x8A,
	0xA6, 0x19, 0x3A, 0xC4, 0x06, 0xC7, 0x13, 0x30, 0x4D, 0xC4,
	0x9E, 0x4D, 0xCF, 0x26, 0xA3, 0x85, 0x31, 0xFA, 0x0F, 0xFA,
	0x4A, 0xE1, 0x22, 0x81, 0x9D, 0xC5, 0xAE, 0xF5, 0xFD, 0x9F,
	0x55, 0xB4, 0x89, 0x87, 0x4F, 0x7F, 0xAC, 0xBC, 0x11, 0x48,
	0xCD, 0xAF, 0x6F, 0x95, 0x7F, 0x0C, 0x26, 0x1E, 0x81, 0x96,
	0xD7, 0x78, 0xE3, 0x7F, 0x1B, 0x44, 0xB4, 0xF5, 0x08, 0x36,
	0xDA, 0x59, 0x2E, 0x07, 0x26, 0x88, 0xC8, 0xA2, 0x7D, 0x74,
	0x6C, 0xF3, 0x90, 0xE0, 0x36, 0xF1, 0x57, 0xB7, 0x36, 0x67,
	0x46, 0x68, 0x78, 0x38, 0xF7, 0x42, 0x0D, 0xC2, 0x4F, 0xE3,
	0xB8, 0xE1, 0xC3, 0x6C, 0xC1, 0x1A, 0x70, 0xDB, 0x20, 0xCF,
	0xA3, 0xEE, 0xB7, 0x2D, 0x8F, 0x43, 0x6F, 0x62, 0x05, 0x00,
	0x5B, 0x11, 0xCF, 0x1B, 0xB8, 0xB1, 0x20, 0x82, 0x6D, 0x15,
	0xF7, 0x4F, 0x63, 0xDE, 0x98, 0xE4, 0xC2, 0x59, 0x34, 0xD9,
	0xD8, 0x5B, 0x84, 0x0F, 0x16, 0x6F, 0x5F, 0xD2, 0x06, 0x02,
	0x82, 0xF1, 0x55, 0xD1, 0x66, 0x04, 0x4A, 0xD9, 0xE1, 0x0E,
	0x22, 0xAB, 0x58, 0xE1, 0xDC, 0x83, 0xE2, 0x98, 0x10, 0x1E,
	0x9A, 0x60, 0x2F, 0x88, 0xF8, 0x58, 0x74, 0xE4, 0x2F, 0xC0,
	0xB7, 0x68, 0xDC, 0xDB, 0x10, 0xF1, 0x41, 0x7A, 0xC0, 0x90,
	0x78, 0xA3, 0x0F, 0x29, 0x22, 0xD8, 0x4E, 0xF9, 0xE9, 0x88,
	0x88, 0x2B, 0xF7, 0x76, 0x06, 0x00, 0x4E, 0x23, 0x50, 0xCC,
	0x86, 0xDE, 0xC8, 0xCF, 0xA5, 0x92, 0xC5, 0x43, 0x81, 0xA7,
	0xDF, 0x55, 0x19, 0x39, 0x2D, 0xD0, 0x8F, 0xF3, 0xA4, 0x2B,
	0x93, 0xAD, 0x4F, 0xB0, 0x85, 0x9C, 0x09, 0x73, 0x72, 0xBC,
	0x26, 0x16, 0x1C, 0x76, 0xCF, 0xA3, 0x1E, 0xBD, 0x7C, 0xE7,
	0xB4, 0xD2, 0xA1, 0x0D, 0x43, 0x5C, 0x1D, 0x38, 0xC3, 0xF6,
	0x25, 0x54, 0x82, 0x9C, 0xB8, 0x0B, 0x34, 0xF2, 0x10, 0x62,
	0x7A, 0x5F, 0x2A, 0x0E, 0x81, 0x6F, 0x4C, 0xF7, 0x6D, 0xB6,
	0x75, 0xF0, 0x26, 0x6F, 0xEC, 0xD6, 0xF8, 0x1D, 0x6F, 0x08,
	0x41, 0x2E, 0x63, 0x5D, 0x42, 0xA4, 0x66, 0x5A, 0x49, 0xE7,
	0x9E, 0x46, 0x86, 0xA8, 0xF5, 0x5F, 0xBF, 0x09, 0x69, 0x91,
	0x22, 0x1A, 0x4F, 0x66, 0xC7, 0x3C, 0x74, 0xCC, 0x68, 0xA4,
	0x07, 0x36, 0x72, 0x26, 0x53, 0x21, 0x59, 0xF1, 0x67, 0x60,
	0x15, 0x8D, 0xC5, 0x2A, 0x65, 0x94, 0xE6, 0x5B, 0x9C, 0x55,
	0x5B, 0x2E, 0xDB, 0xCF, 0xF7, 0xFF, 0x01, 0xB1, 0xA2, 0x71,
	0x60, 0x36, 0x3C, 0x99, 0x15, 0x12, 0x1C, 0xE6, 0xC0, 0x5C,
	0x72, 0xF6, 0xD6, 0x32, 0x01, 0x00, 0x9F, 0xA9, 0x10, 0xCD,
	0xA4, 0xA9, 0x80, 0x38, 0x16, 0x00, 0x00, 0x00, 0x00, 0x49,
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};

extern CTextures* pTextures;