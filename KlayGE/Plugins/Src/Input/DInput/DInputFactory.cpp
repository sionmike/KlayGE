// DInputFactory.cpp
// KlayGE DirectInput输入引擎抽象工厂 实现文件
// Ver 2.0.3
// 版权所有(C) 龚敏敏, 2003-2004
// Homepage: http://klayge.sourceforge.net
//
// 2.0.3
// 改为template实现 (2004.3.4)
//
// 2.0.0
// 初次建立 (2003.8.30)
//
// 修改记录
/////////////////////////////////////////////////////////////////////////////////

#include <KlayGE/KlayGE.hpp>
#include <KlayGE/Util.hpp>
#include <KlayGE/InputFactory.hpp>

#include <KlayGE/DInput/DInput.hpp>
#include <KlayGE/DInput/DInputFactory.hpp>

void MakeInputFactory(KlayGE::InputFactoryPtr& ptr, void* /*extra_param*/)
{
	ptr = KlayGE::MakeSharedPtr<KlayGE::ConcreteInputFactory<KlayGE::DInputEngine> >(L"DirectInput Input Factory");
}
