#pragma once
#include "MagicalGirl.h"
class Sayaka :public MagicalGirl
{
public:
	/// <summary>
	/// 戦闘行動（さやか）
	/// </summary>
	void Fight() override;

	/// <summary>
	/// プロフィール表示
	/// </summary>
	void ShowProfile() override;
};