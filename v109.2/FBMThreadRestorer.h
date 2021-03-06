/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:37 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
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

