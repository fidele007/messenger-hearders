/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <Messenger/FBMReachabilityAwareNetworkerDelegate.h>

@protocol FBMMembersAdderDelegate;
@class FBMGroupThreadKey, NSArray, FBMBatchMembersAdderInjector, FBMReachabilityAwareNetworker, FBGraphBatchParticipatingRequest, NSString;

@interface FBMBatchMembersAdder : NSObject <FBClassInjectable, FBMReachabilityAwareNetworkerDelegate> {

	FBMGroupThreadKey* _groupThreadKey;
	NSArray* _membersToAdd;
	id<FBMMembersAdderDelegate> _delegate;
	BOOL _willAddToApprovalQueue;
	FBMBatchMembersAdderInjector* _injector;
	FBMReachabilityAwareNetworker* _reachabilityAwareNetworker;
	FBGraphBatchParticipatingRequest* _addMembersRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)reachabilityAwareNetworker:(id)arg1 didSucceedWithResult:(id)arg2 complete:(BOOL)arg3 ;
-(void)reachabilityAwareNetworker:(id)arg1 didFailWithError:(id)arg2 ;
-(void)configureAndAddMembers:(id)arg1 willAddToApprovalQueue:(BOOL)arg2 toGroupThreadKey:(id)arg3 delegate:(id)arg4 ;
-(id)initWithInjector:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)_didFailWithError:(id)arg1 ;
@end

