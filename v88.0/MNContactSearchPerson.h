/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
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
-(NSString *)nickname;
-(NSString *)username;
-(NSString *)userId;
@end

