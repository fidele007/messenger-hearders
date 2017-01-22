/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBServiceTransactionMutating.h>

@protocol FBServiceTransactionTokenDelegate;
@class FBServiceNetworkerRequest, NSString;

@interface FBServiceTransactionToken : NSObject <FBServiceTransactionMutating> {

	FBServiceNetworkerRequest* _request;
	id<FBServiceTransactionTokenDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 delegate:(id)arg2 ;
@end
