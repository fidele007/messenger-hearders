/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBDBLStoredUser : FBValueObject <NSCopying> {

	NSString* _accountID;
	NSString* _shortName;
	unsigned long long _accountType;

}

@property (nonatomic,copy,readonly) NSString * accountID;                   //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                   //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) unsigned long long accountType;              //@synthesize accountType=_accountType - In the implementation block
-(id)initWithAccountID:(id)arg1 shortName:(id)arg2 accountType:(unsigned long long)arg3 ;
-(unsigned long long)accountType;
-(NSString *)shortName;
-(NSString *)accountID;
@end

