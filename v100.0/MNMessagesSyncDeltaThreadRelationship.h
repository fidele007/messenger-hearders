/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface MNMessagesSyncDeltaThreadRelationship : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBMSyncedThreadKey* _affectsThread;
	FBMSyncedThreadKey* _affectsAndPotentiallyDeletesThread;
	FBMSyncedThreadKey* _deletesThread;
	FBMSyncedThreadKey* _requiresThreadPrepared;
	FBMSyncedThreadKey* _requiresThreadPreparedFromNetwork;

}
+(id)requiresThreadPreparedFromNetwork:(id)arg1 ;
+(id)affectsAndPotentiallyDeletesThread:(id)arg1 ;
+(id)affectsThread:(id)arg1 ;
+(id)requiresThreadPrepared:(id)arg1 ;
+(id)noThreadAffected;
+(id)deletesThread:(id)arg1 ;
-(void)matchNoThreadAffected:(/*^block*/id)arg1 affectsThread:(/*^block*/id)arg2 affectsAndPotentiallyDeletesThread:(/*^block*/id)arg3 deletesThread:(/*^block*/id)arg4 requiresThreadPrepared:(/*^block*/id)arg5 requiresThreadPreparedFromNetwork:(/*^block*/id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

