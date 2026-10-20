#pragma once
#include "MagicalGirl.h"
class Kyoko :public MagicalGirl
{
public:
	/// <summary>
	/// 戦闘行動（きょうこ）
	/// </summary>
	void Fight() override;

	/// <summary>
	/// プロフィール表示
	/// </summary>
	void ShowProfile() override;
};

