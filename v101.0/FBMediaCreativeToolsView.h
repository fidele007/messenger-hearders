/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMediaCreativeToolsViewDelegate;
@class NSMutableArray, UIView, FBMediaCreativeToolbar;

@interface FBMediaCreativeToolsView : UIView {

	unsigned long long _activeIndex;
	NSMutableArray* _menuButtons;
	UIView* _selectionIndicator;
	UIView* _toolbarContainer;
	FBMediaCreativeToolbar* _toolbar;
	UIView* _trayView;
	UIView* _dividerView;
	CGPoint _startingPanLocation;
	BOOL _translucent;
	BOOL _translucentDividerHidden;
	BOOL _didInitialAnimation;
	id<FBMediaCreativeToolsViewDelegate> _delegate;
	unsigned long long _alignment;

}

@property (assign,nonatomic,__weak) id<FBMediaCreativeToolsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                                      //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) BOOL translucent;                                                  //@synthesize translucent=_translucent - In the implementation block
@property (assign,nonatomic) BOOL translucentDividerHidden;                                     //@synthesize translucentDividerHidden=_translucentDividerHidden - In the implementation block
@property (assign,nonatomic) BOOL didInitialAnimation;                                          //@synthesize didInitialAnimation=_didInitialAnimation - In the implementation block
+(double)thickness;
-(void)_didPan:(id)arg1 ;
-(id)_menuButtonAtIndex:(long long)arg1 ;
-(void)_didSelectMenuButton:(id)arg1 ;
-(void)removeActiveToolAnimated:(BOOL)arg1 ;
-(id)_trayBackgroundColor;
-(unsigned long long)_toolbarAlignmentFromSelfAlignment;
-(void)_addDividerViewIfNeeded;
-(void)addMenuItemForTool:(id)arg1 ;
-(void)removeAllMenuItems;
-(void)setActiveTool:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setTranslucentDividerHidden:(BOOL)arg1 ;
-(BOOL)translucentDividerHidden;
-(BOOL)didInitialAnimation;
-(void)setDidInitialAnimation:(BOOL)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMediaCreativeToolsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBMediaCreativeToolsViewDelegate>)delegate;
-(void)setTranslucent:(BOOL)arg1 ;
-(unsigned long long)alignment;
-(BOOL)translucent;
@end
