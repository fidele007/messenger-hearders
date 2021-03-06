/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMinimizableModalsContainerViewDelegate_DEPRECATED;
@class FBMinimizableModalSnapshotableView_DEPRECATED, UIView, UIToolbar, UIButton, UILabel, NSString;

@interface FBMinimizableModalsContainerView_DEPRECATED : UIView {

	FBMinimizableModalSnapshotableView_DEPRECATED* _snapshotableView;
	UIView* _overlayView;
	UIToolbar* _titleView;
	UIButton* _dismissButton;
	UILabel* _titleLabel;
	BOOL _appearanceRealViewVisible;
	BOOL _appearanceRealViewInTransition;
	double _showState;
	NSString* _title;
	id<FBMinimizableModalsContainerViewDelegate_DEPRECATED> _delegate;

}

@property (assign,nonatomic) double showState;                                                                     //@synthesize showState=_showState - In the implementation block
@property (nonatomic,readonly) UIView * realView; 
@property (assign,nonatomic) BOOL showSnapshot; 
@property (assign,nonatomic) double overlayAlpha; 
@property (assign,nonatomic) double titleViewAlpha; 
@property (nonatomic,copy) NSString * title;                                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL appearanceRealViewVisible;                                                       //@synthesize appearanceRealViewVisible=_appearanceRealViewVisible - In the implementation block
@property (assign,nonatomic) BOOL appearanceRealViewInTransition;                                                  //@synthesize appearanceRealViewInTransition=_appearanceRealViewInTransition - In the implementation block
@property (assign,nonatomic,__weak) id<FBMinimizableModalsContainerViewDelegate_DEPRECATED> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapDismissButton:(id)arg1 ;
-(double)overlayAlpha;
-(double)titleViewAlpha;
-(void)setShowState:(double)arg1 ;
-(BOOL)showSnapshot;
-(void)setTitleViewAlpha:(double)arg1 ;
-(void)setOverlayAlpha:(double)arg1 ;
-(UIView *)realView;
-(BOOL)appearanceRealViewVisible;
-(void)setAppearanceRealViewInTransition:(BOOL)arg1 ;
-(void)setAppearanceRealViewVisible:(BOOL)arg1 ;
-(void)setShowSnapshot:(BOOL)arg1 ;
-(BOOL)appearanceRealViewInTransition;
-(void)setDelegate:(id<FBMinimizableModalsContainerViewDelegate_DEPRECATED>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMinimizableModalsContainerViewDelegate_DEPRECATED>)delegate;
-(NSString *)title;
-(id)initWithView:(id)arg1 ;
-(double)showState;
@end

