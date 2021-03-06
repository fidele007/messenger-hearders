/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, NSString, NSArray;

@interface MNContactCardViewModel : FBValueObject <NSCopying> {

	BOOL _addContactButtonEnabled;
	FBMSyncedThreadKey* _threadKey;
	NSString* _fullName;
	NSString* _mutualFriendsContext;
	NSArray* _timelineContextStrings;
	NSString* _profilePicHash;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullName;                           //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mutualFriendsContext;               //@synthesize mutualFriendsContext=_mutualFriendsContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * timelineContextStrings;              //@synthesize timelineContextStrings=_timelineContextStrings - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePicHash;                     //@synthesize profilePicHash=_profilePicHash - In the implementation block
@property (nonatomic,readonly) BOOL addContactButtonEnabled;                       //@synthesize addContactButtonEnabled=_addContactButtonEnabled - In the implementation block
-(NSString *)profilePicHash;
-(id)initWithThreadKey:(id)arg1 fullName:(id)arg2 mutualFriendsContext:(id)arg3 timelineContextStrings:(id)arg4 profilePicHash:(id)arg5 addContactButtonEnabled:(BOOL)arg6 ;
-(NSString *)mutualFriendsContext;
-(NSArray *)timelineContextStrings;
-(BOOL)addContactButtonEnabled;
-(FBMSyncedThreadKey *)threadKey;
-(NSString *)fullName;
@end

