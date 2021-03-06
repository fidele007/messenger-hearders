/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBViewerContextClassProvidable.h>
#import <Messenger/MNLegacyThreadRestoring.h>

@protocol MNThreadDeletedAffirming, MNThreadMessageCaching, MNThreadSummaryCaching;
@class FBMThreadPendingDeleteTracker, NSString;

@interface FBMThreadRestorer : NSObject <FBViewerContextClassProvidable, MNLegacyThreadRestoring> {

	FBMThreadPendingDeleteTracker* _pendingThreadDeleteTracker;
	id<MNThreadDeletedAffirming> _threadDeletedAffirmer;
	id<MNThreadMessageCaching> _threadMessageCache;
	id<MNThreadSummaryCaching> _threadSummaryCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPendingThreadDeleteTracker:(id)arg1 deletedThreadAffirmer:(id)arg2 threadMessageCache:(id)arg3 threadSummaryCache:(id)arg4 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)restoreThread:(id)arg1 ;
@end

