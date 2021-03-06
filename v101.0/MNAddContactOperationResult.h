/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNAddContactOperationResult : FBValueObject <NSCopying> {

	NSString* _contactId;
	NSString* _contactWriteId;

}

@property (nonatomic,copy,readonly) NSString * contactId;                   //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactWriteId;              //@synthesize contactWriteId=_contactWriteId - In the implementation block
-(id)initWithContactId:(id)arg1 contactWriteId:(id)arg2 ;
-(NSString *)contactWriteId;
-(NSString *)contactId;
@end

