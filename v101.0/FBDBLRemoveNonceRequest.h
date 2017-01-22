/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBDBLRemoveNonceRequest : FBNetworkerRequest {

	NSString* _accountID;
	NSString* _nonceValue;

}

@property (nonatomic,copy) NSString * accountID;               //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSString * nonceValue;              //@synthesize nonceValue=_nonceValue - In the implementation block
-(id)networkRequest;
-(BOOL)allowRetry;
-(void)setNonceValue:(NSString *)arg1 ;
-(id)initWithAccountID:(id)arg1 nonceValue:(id)arg2 callbackPerformer:(id)arg3 ;
-(NSString *)nonceValue;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)accountID;
@end
