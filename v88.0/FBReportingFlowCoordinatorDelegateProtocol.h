/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReportingFlowCoordinatorDelegateProtocol
@required
-(void)logReportingFlowEvent:(id)arg1;
-(void)dismissReportingFlow;
-(void)loadNewBranchForDetailedResponse:(id)arg1;
-(void)performGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)performMessageGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 targetFBID:(id)arg3 message:(id)arg4;
-(void)loadMessageComposer:(id)arg1;
-(void)showAvatarPicker;
-(void)redirectToURL:(id)arg1;
-(int)presentationStyle;
-(id)dismissButtonTitle;

@end

