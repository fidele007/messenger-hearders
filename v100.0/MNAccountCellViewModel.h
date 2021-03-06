/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNAccountContext;

@interface MNAccountCellViewModel : FBValueObject <NSCopying> {

	NSString* _accountFBID;
	NSString* _accountDisplayName;
	MNAccountContext* _accountContext;

}

@property (nonatomic,copy,readonly) NSString * accountFBID;                         //@synthesize accountFBID=_accountFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountDisplayName;                  //@synthesize accountDisplayName=_accountDisplayName - In the implementation block
@property (nonatomic,copy,readonly) MNAccountContext * accountContext;              //@synthesize accountContext=_accountContext - In the implementation block
-(NSString *)accountDisplayName;
-(MNAccountContext *)accountContext;
-(id)initWithAccountFBID:(id)arg1 accountDisplayName:(id)arg2 accountContext:(id)arg3 ;
-(NSString *)accountFBID;
@end

