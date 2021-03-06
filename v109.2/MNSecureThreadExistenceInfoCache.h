/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNSecureThreadExistenceInfoCacheReading.h>

@protocol MNSecureThreadExistenceInfoCacheObserving, OS_dispatch_queue;
@class NSObject, NSDictionary, NSString;

@interface MNSecureThreadExistenceInfoCache : NSObject <MNSecureThreadExistenceInfoCacheReading> {

	id<MNSecureThreadExistenceInfoCacheObserving> _observer;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSDictionary* _userIdToSecureThreadExistence;

}

@property (copy) NSDictionary * userIdToSecureThreadExistence;              //@synthesize userIdToSecureThreadExistence=_userIdToSecureThreadExistence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)secureThreadExistenceInfoForOtherUserId:(id)arg1 ;
-(id)initWithObserver:(id)arg1 updateQueue:(id)arg2 ;
-(NSDictionary *)userIdToSecureThreadExistence;
-(void)setUserIdToSecureThreadExistence:(NSDictionary *)arg1 ;
-(void)cacheSecureThreadExistenceInfo:(id)arg1 forOtherUserId:(id)arg2 ;
-(void)purgeCache;
@end

