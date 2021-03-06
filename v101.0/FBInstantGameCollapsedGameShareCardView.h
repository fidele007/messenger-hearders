/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGameCollapsedGameShareCardViewDelegate;
@class FBInstantGameUIMetrics, FBUserSession, FBQuicksilverGameInfo, UIImageView, UILabel, UIButton;

@interface FBInstantGameCollapsedGameShareCardView : UIView {

	FBInstantGameUIMetrics* _metrics;
	FBUserSession* _session;
	FBQuicksilverGameInfo* _gameInfo;
	UIImageView* _backgroundImageView;
	UIImageView* _gameIconImageView;
	UILabel* _gameTitleLabel;
	id<FBInstantGameCollapsedGameShareCardViewDelegate> _delegate;
	UIButton* _gameShareButton;

}

@property (assign,nonatomic,__weak) id<FBInstantGameCollapsedGameShareCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * gameShareButton;                                                     //@synthesize gameShareButton=_gameShareButton - In the implementation block
-(id)initWithSession:(id)arg1 gameInfo:(id)arg2 ;
-(void)_downloadGameIconImage:(id)arg1 ;
-(void)_userDidTapShareButton:(id)arg1 ;
-(void)_setGameIconImage:(id)arg1 ;
-(UIButton *)gameShareButton;
-(void)setDelegate:(id<FBInstantGameCollapsedGameShareCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGameCollapsedGameShareCardViewDelegate>)delegate;
@end

