/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription, MNProfileImageModel;

@interface MNProfileImageViewModel : FBValueObject <NSCopying> {

	NSString* _userId;
	FBStringWithRedactedDescription* _name;
	MNProfileImageModel* _profileImageModel;
	long long _badgeType;

}

@property (nonatomic,copy,readonly) NSString * userId;                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MNProfileImageModel * profileImageModel;              //@synthesize profileImageModel=_profileImageModel - In the implementation block
@property (nonatomic,readonly) long long badgeType;                                       //@synthesize badgeType=_badgeType - In the implementation block
-(MNProfileImageModel *)profileImageModel;
-(id)initWithUserId:(id)arg1 name:(id)arg2 profileImageModel:(id)arg3 badgeType:(long long)arg4 ;
-(FBStringWithRedactedDescription *)name;
-(long long)badgeType;
-(NSString *)userId;
@end
