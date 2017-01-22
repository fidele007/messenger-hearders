/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBMSyncedThreadKey, MNBadgedProfileImageInfo, FBStringWithRedactedDescription, NSString;

@interface MNWThreadRow : FBValueObject <NSCopying, NSCoding> {

	BOOL _isUnread;
	BOOL _isMuted;
	FBMSyncedThreadKey* _threadKey;
	unsigned long long _serverTimestamp;
	MNBadgedProfileImageInfo* _profileImageInfo;
	FBStringWithRedactedDescription* _threadName;
	FBStringWithRedactedDescription* _snippetText;
	NSString* _timestampText;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                             //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,readonly) unsigned long long serverTimestamp;                              //@synthesize serverTimestamp=_serverTimestamp - In the implementation block
@property (nonatomic,copy,readonly) MNBadgedProfileImageInfo * profileImageInfo;                //@synthesize profileImageInfo=_profileImageInfo - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * threadName;               //@synthesize threadName=_threadName - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * snippetText;              //@synthesize snippetText=_snippetText - In the implementation block
@property (nonatomic,copy,readonly) NSString * timestampText;                                   //@synthesize timestampText=_timestampText - In the implementation block
@property (nonatomic,readonly) BOOL isUnread;                                                   //@synthesize isUnread=_isUnread - In the implementation block
@property (nonatomic,readonly) BOOL isMuted;                                                    //@synthesize isMuted=_isMuted - In the implementation block
-(unsigned long long)serverTimestamp;
-(NSString *)timestampText;
-(BOOL)isUnread;
-(FBStringWithRedactedDescription *)snippetText;
-(id)initWithThreadKey:(id)arg1 serverTimestamp:(unsigned long long)arg2 profileImageInfo:(id)arg3 threadName:(id)arg4 snippetText:(id)arg5 timestampText:(id)arg6 isUnread:(BOOL)arg7 isMuted:(BOOL)arg8 ;
-(MNBadgedProfileImageInfo *)profileImageInfo;
-(FBStringWithRedactedDescription *)threadName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMSyncedThreadKey *)threadKey;
-(BOOL)isMuted;
@end
