/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBInstantGameGamePlayerViewControllerDelegate <NSObject>
@required
-(void)playerViewController:(id)arg1 didFailToLoadWithErrorMessage:(id)arg2;
-(void)playerViewController:(id)arg1 didAbortWithErrorName:(id)arg2 errorMessage:(id)arg3;
-(void)playerViewController:(id)arg1 loadStarted:(double)arg2;
-(void)playerViewController:(id)arg1 loadProgress:(double)arg2;
-(void)playerViewController:(id)arg1 gameReady:(double)arg2;
-(void)playerViewController:(id)arg1 didGenerateScore:(id)arg2;
-(void)playerViewController:(id)arg1 didPostCustomUpdate:(id)arg2;
-(void)playerViewController:(id)arg1 didSetSessionData:(id)arg2;
-(void)playerViewController:(id)arg1 gameEndWithScreenshots:(id)arg2;
-(void)playerViewController:(id)arg1 didRequestContextChooseWithPromiseID:(id)arg2;
-(void)playerViewController:(id)arg1 didRequestContextSwitchWithContextID:(id)arg2 promiseID:(id)arg3;
-(void)playerViewController:(id)arg1 onCustomGameShare:(id)arg2 completeBlock:(/*^block*/id)arg3;
-(void)onQuitContainerFromPlayerViewController:(id)arg1;

@end

