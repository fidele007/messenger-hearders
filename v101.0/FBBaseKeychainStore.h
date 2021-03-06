/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FBBaseKeychainStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)defaultDictionaryForItem:(id)arg1 ;
+(id)searchDictionaryForItem:(id)arg1 ;
+(id)sharedInstance;
-(id)genericErrorWithDomain:(id)arg1 code:(unsigned long long)arg2 serviceID:(id)arg3 description:(id)arg4 ;
-(id)keychainErrorWithCode:(int)arg1 item:(id)arg2 description:(id)arg3 ;
-(id)secErrorWithStatus:(int)arg1 item:(id)arg2 description:(id)arg3 ;
-(void)_load_unsafe:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(void)_create:(id)arg1 data:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(void)_load:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(void)_update:(id)arg1 data:(/*^block*/id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(void)_remove:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(void)create:(id)arg1 data:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 withTargetQueue:(id)arg5 ;
-(void)save:(id)arg1 data:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 withTargetQueue:(id)arg5 ;
-(void)update:(id)arg1 data:(/*^block*/id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 withTargetQueue:(id)arg5 ;
-(void)remove:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 withTargetQueue:(id)arg4 ;
-(BOOL)create:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)save:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)update:(id)arg1 data:(/*^block*/id)arg2 error:(id*)arg3 ;
-(BOOL)remove:(id)arg1 error:(id*)arg2 ;
-(void)load:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 withTargetQueue:(id)arg4 ;
-(id)load:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

