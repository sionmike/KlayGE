// DSAudioFactory.hpp
// KlayGE DirectSound声音引擎抽象工厂类 头文件
// Ver 2.0.3
// 版权所有(C) 龚敏敏, 2003-2004
// Homepage: http://klayge.sourceforge.net
//
// 2.0.3
// 改为template实现 (2004.3.4)
//
// 2.0.0
// 初次建立 (2003.10.4)
//
// 修改记录
/////////////////////////////////////////////////////////////////////////////////

#ifndef _DSAUDIOFACTORY_HPP
#define _DSAUDIOFACTORY_HPP

#pragma once

#ifdef KLAYGE_HAS_DECLSPEC
	#ifdef KLAYGE_DSOUND_AE_SOURCE				// Build dll
		#define KLAYGE_DSOUND_AE_API __declspec(dllexport)
	#else										// Use dll
		#define KLAYGE_DSOUND_AE_API __declspec(dllimport)
	#endif
#else
	#define KLAYGE_DSOUND_AE_API
#endif // KLAYGE_HAS_DECLSPEC

extern "C"
{
	KLAYGE_DSOUND_AE_API void MakeAudioFactory(KlayGE::AudioFactoryPtr& ptr, void* extra_param);
}

#endif			// _DSAUDIOFACTORY_HPP
