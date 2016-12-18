/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBDisplayableMediaTransitionManagerDelegate <NSObject>
@optional
-(void)transitionManager:(id)arg1 didDismissWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 willDismissWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 willPresentWithMediaViewProviderInfo:(id)arg2;
-(void)transitionManager:(id)arg1 didPresentWithMediaViewProviderInfo:(id)arg2;
-(CGRect*)transitionManager:(id)arg1 calculateDismissalFrameWithInfo:(id)arg2 inView:(id)arg3;
-(BOOL)displayableMediaTransitionManager:(id)arg1 shouldBeginDismissalWithGesture:(id)arg2 inDirection:(long long)arg3;

@required
-(void)transitionManagerNeedsDismissal:(id)arg1;
-(id)transitionManagerNeedsMediaInfoForAnimation:(id)arg1;
-(unsigned long long)transitionManager:(id)arg1 preferredDismissalTransitionTypeForMedia:(id)arg2;

@end

