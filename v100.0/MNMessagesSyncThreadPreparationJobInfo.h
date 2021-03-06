/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey;

@interface MNMessagesSyncThreadPreparationJobInfo : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	long long _prepLevel;
	long long _sequenceId;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;              //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) long long prepLevel;                              //@synthesize prepLevel=_prepLevel - In the implementation block
@property (nonatomic,readonly) long long sequenceId;                             //@synthesize sequenceId=_sequenceId - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(long long)prepLevel;
-(long long)sequenceId;
-(id)initWithThreadKey:(id)arg1 prepLevel:(long long)arg2 sequenceId:(long long)arg3 ;
-(FBMSyncedThreadKey *)threadKey;
@end

