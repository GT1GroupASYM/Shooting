/////////////////////////////////////////////////////
// Name : GameMain
//
// Author : 山田 聖弥
//
// Day : 2017/7/7
/////////////////////////////////////////////////////
#pragma once

/////////////////////////////////////////////////////
// Name : GameMain
//
// Over View : ゲームのメインクラス
/////////////////////////////////////////////////////
class GameMain
{
protected:

public:
	//コンストラクタ
	GameMain();

	//デストラクタ
	virtual ~GameMain();

	//初期化処理
	virtual void Initialize();
	
	//更新処理
	virtual void Update();
	
	//描画処理
	virtual void Render();
};

