/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBResizingAnimatable.h>

@protocol FBResizingAnimatableAnimationDelegate;
@class UIView, UIColor, FBFlexibleSplitContainerView, NSString;

@interface FBFlexibleSplitView : UIView <FBResizingAnimatable> {

	double _dividerPosition;
	UIView* _statusBarBackground;
	BOOL _headerViewHidden;
	double _animationAdjustmentOffset;
	unsigned long long _state;
	BOOL _slideFlexibleView;
	BOOL _expandFlexibleView;
	BOOL _headerHidden;
	BOOL _hasDivider;
	BOOL _showColoredStatusBar;
	int _type;
	UIColor* _statusBarColor;
	id<FBResizingAnimatableAnimationDelegate> _delegate;
	UIView* _dividerView;
	UIView* _headerView;
	FBFlexibleSplitContainerView* _leftContainerView;
	FBFlexibleSplitContainerView* _rightContainerView;
	double _fixedViewWidth;
	double _flexibleViewWidth;
	double _dividerExtensionHeight;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;

}

@property (nonatomic,readonly) UIView * dividerView;                                                 //@synthesize dividerView=_dividerView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                    //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) FBFlexibleSplitContainerView * leftContainerView;                     //@synthesize leftContainerView=_leftContainerView - In the implementation block
@property (nonatomic,readonly) FBFlexibleSplitContainerView * rightContainerView;                    //@synthesize rightContainerView=_rightContainerView - In the implementation block
@property (assign,nonatomic) int type;                                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double fixedViewWidth;                                                  //@synthesize fixedViewWidth=_fixedViewWidth - In the implementation block
@property (assign,nonatomic) double flexibleViewWidth;                                               //@synthesize flexibleViewWidth=_flexibleViewWidth - In the implementation block
@property (assign,nonatomic) BOOL slideFlexibleView;                                                 //@synthesize slideFlexibleView=_slideFlexibleView - In the implementation block
@property (assign,nonatomic) BOOL expandFlexibleView;                                                //@synthesize expandFlexibleView=_expandFlexibleView - In the implementation block
@property (assign,nonatomic) BOOL headerHidden;                                                      //@synthesize headerHidden=_headerHidden - In the implementation block
@property (assign,nonatomic) double dividerExtensionHeight;                                          //@synthesize dividerExtensionHeight=_dividerExtensionHeight - In the implementation block
@property (assign,nonatomic) BOOL hasDivider;                                                        //@synthesize hasDivider=_hasDivider - In the implementation block
@property (assign,nonatomic) BOOL showColoredStatusBar;                                              //@synthesize showColoredStatusBar=_showColoredStatusBar - In the implementation block
@property (nonatomic,retain) UIColor * statusBarColor;                                               //@synthesize statusBarColor=_statusBarColor - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                                            //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                                         //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBResizingAnimatableAnimationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_layoutHeaderView;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(FBFlexibleSplitContainerView *)leftContainerView;
-(void)_updateSubviewLayouts;
-(FBFlexibleSplitContainerView *)rightContainerView;
-(void)_updateDividerPosition;
-(void)_layoutDividerView;
-(void)_layoutLeftContainerView;
-(void)_layoutRightContainerView;
-(void)_layoutStatusBarBackground;
-(void)setExpandFlexibleView:(BOOL)arg1 ;
-(UIColor *)statusBarColor;
-(void)setShowColoredStatusBar:(BOOL)arg1 ;
-(CGRect)_headerRectForBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setFixedViewWidth:(double)arg1 withAnimation:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFlexibleViewWidth:(double)arg1 ;
-(void)setExpandFlexibleView:(BOOL)arg1 duration:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)setHeaderHidden:(BOOL)arg1 ;
-(void)setDividerExtensionHeight:(double)arg1 ;
-(void)setHasDivider:(BOOL)arg1 ;
-(void)setStatusBarColor:(UIColor *)arg1 ;
-(UIView *)dividerView;
-(double)fixedViewWidth;
-(void)setFixedViewWidth:(double)arg1 ;
-(double)flexibleViewWidth;
-(BOOL)slideFlexibleView;
-(void)setSlideFlexibleView:(BOOL)arg1 ;
-(BOOL)expandFlexibleView;
-(BOOL)headerHidden;
-(double)dividerExtensionHeight;
-(BOOL)hasDivider;
-(BOOL)showColoredStatusBar;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBResizingAnimatableAnimationDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBResizingAnimatableAnimationDelegate>)delegate;
-(void)setType:(int)arg1 ;
-(int)type;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(CGRect)_contentBounds;
@end

