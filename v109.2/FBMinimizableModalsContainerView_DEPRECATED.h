/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:39 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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
-(void)layoutSubviews;
-(void)setDelegate:(id<FBMinimizableModalsContainerViewDelegate_DEPRECATED>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<FBMinimizableModalsContainerViewDelegate_DEPRECATED>)delegate;
-(NSString *)title;
-(id)initWithView:(id)arg1 ;
-(double)showState;
@end

