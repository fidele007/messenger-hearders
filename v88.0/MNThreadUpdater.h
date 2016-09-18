/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:59 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAuthenticationManager;
@class MNThreadSummaryUpdateDispatcher, MNThreadMessageUpdater, FBMobileConfigContextManager;

@interface MNThreadUpdater : NSObject {

	id<MNAuthenticationManager> _authManager;
	MNThreadSummaryUpdateDispatcher* _summaryUpdateDispatcher;
	MNThreadMessageUpdater* _messageUpdater;
	FBMobileConfigContextManager* _mobileConfig;

}
-(id)initWithAuthenticationManager:(id)arg1 mobileConfig:(id)arg2 ;
-(id)dependentThreadSummaryUpdatesForAPNSUpdate:(id)arg1 ;
-(id)applySummaryUpdate:(id)arg1 toThreadSummary:(id)arg2 ;
-(BOOL)applyMessageUpdate:(id)arg1 toMessageSetBuilder:(id)arg2 ;
-(id)dependentThreadSummaryUpdatesForMessageUpdate:(id)arg1 updatedMessageSet:(id)arg2 ;
@end

