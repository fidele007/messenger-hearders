/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMGroupThreadKey, MNProfileImageModel, FBStringWithRedactedDescription, NSString;

@interface MNGroupItem : FBValueObject <NSCopying> {

	BOOL _hasUnreadMessages;
	FBMGroupThreadKey* _groupThreadKey;
	MNProfileImageModel* _profileImageModel;
	FBStringWithRedactedDescription* _groupName;
	NSString* _groupTimestamp;
	NSString* _membersNameList;
	FBStringWithRedactedDescription* _accessibilityLabel;

}

@property (nonatomic,copy,readonly) FBMGroupThreadKey * groupThreadKey;                                //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;                           //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * groupName;                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupTimestamp;                                         //@synthesize groupTimestamp=_groupTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * membersNameList;                                        //@synthesize membersNameList=_membersNameList - In the implementation block
@property (nonatomic,readonly) BOOL hasUnreadMessages;                                                 //@synthesize hasUnreadMessages=_hasUnreadMessages - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * accessibilityLabel;              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
-(MNProfileImageModel *)profileImageModel;
-(id)initWithGroupThreadKey:(id)arg1 profileImageModel:(id)arg2 groupName:(id)arg3 groupTimestamp:(id)arg4 membersNameList:(id)arg5 hasUnreadMessages:(BOOL)arg6 accessibilityLabel:(id)arg7 ;
-(NSString *)groupTimestamp;
-(NSString *)membersNameList;
-(FBMGroupThreadKey *)groupThreadKey;
-(FBStringWithRedactedDescription *)accessibilityLabel;
-(FBStringWithRedactedDescription *)groupName;
-(BOOL)hasUnreadMessages;
@end
