/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNComposerContentViewAnimationContext, MNComposerContentWrapperView, UIView;

@interface MNComposerContentViewPresenter : NSObject {

	MNComposerContentViewAnimationContext* _animationContext;
	MNComposerContentWrapperView* _contentWrapperView;
	BOOL _clipsContentView;
	double _animationDuration;
	UIView* _containerView;

}

@property (nonatomic,readonly) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,readonly) BOOL clipsContentView;                      //@synthesize clipsContentView=_clipsContentView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) BOOL includeInSize; 
-(void)_didDismissContentViewWithContext:(id)arg1 ;
-(void)_hideContentViewWithCompletionCompletion:(/*^block*/id)arg1 ;
-(void)_resizeForContentViewWithContext:(id)arg1 ;
-(void)_setContentWrapperView:(id)arg1 ;
-(void)_updateAnimated:(BOOL)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateContentViewWithContext:(id)arg1 ;
-(void)_showContentViewWithContext:(id)arg1 ;
-(id)initWithContainerView:(id)arg1 clipsContentView:(BOOL)arg2 animationDuration:(double)arg3 ;
-(BOOL)includeInSize;
-(void)dismissContentViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentContentView:(id)arg1 options:(unsigned long long)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)clipsContentView;
-(UIView *)containerView;
-(UIView *)contentView;
-(double)animationDuration;
-(UIView *)contentContainerView;
@end

