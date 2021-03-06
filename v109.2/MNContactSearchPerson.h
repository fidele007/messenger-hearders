/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNContactSearchPerson : FBValueObject <NSCopying> {

	NSString* _userId;
	NSString* _name;
	NSString* _username;
	NSString* _nickname;

}

@property (nonatomic,copy,readonly) NSString * userId;                //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * nickname;              //@synthesize nickname=_nickname - In the implementation block
-(id)initWithUserId:(id)arg1 name:(id)arg2 username:(id)arg3 nickname:(id)arg4 ;
-(NSString *)name;
-(NSString *)userId;
-(NSString *)nickname;
-(NSString *)username;
@end

