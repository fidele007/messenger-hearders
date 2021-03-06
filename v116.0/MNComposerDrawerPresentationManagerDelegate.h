/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposerDrawerPresentationManagerDelegate <NSObject>
@required
-(void)composerDrawerPresentationManagerDidPerformDeferredDismiss:(id)arg1;
-(void)composerDrawerPresentationManagerWillPerformDeferredDismiss:(id)arg1;
-(void)composerDrawerPresentationManager:(id)arg1 willPresentDrawerWithViewController:(id)arg2 animated:(BOOL)arg3;
-(void)composerDrawerPresentationManager:(id)arg1 willCompletePresentDrawerAnimated:(BOOL)arg2;
-(void)composerDrawerPresentationManager:(id)arg1 willCompleteDismissDrawerAnimated:(BOOL)arg2;
-(void)composerDrawerPresentationManager:(id)arg1 willDismissDrawerAnimated:(BOOL)arg2;
-(void)composerDrawerPresentationManager:(id)arg1 didPresentDrawerAnimated:(BOOL)arg2;
-(void)composerDrawerPresentationManager:(id)arg1 didDismissDrawerWithViewController:(id)arg2 animated:(BOOL)arg3;
-(void)composerDrawerPresentationManagerPrepareKeyboardAccessoryView:(id)arg1;
-(void)composerDrawerPresentationManager:(id)arg1 willUpdateFromDrawerMode:(long long)arg2 toDrawerMode:(long long)arg3 animated:(BOOL)arg4;
-(void)composerDrawerPresentationManager:(id)arg1 didUpdateFromDrawerMode:(long long)arg2 toDrawerMode:(long long)arg3 animated:(BOOL)arg4;
-(void)composerDrawerPresentationManager:(id)arg1 willAnimateDrawerVisible:(BOOL)arg2;

@end

