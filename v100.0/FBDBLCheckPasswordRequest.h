/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString;

@interface FBDBLCheckPasswordRequest : FBNetworkerRequest {

	NSString* _accountID;
	NSString* _password;

}
+(double)networkTimeoutInSec;
-(id)networkRequest;
-(BOOL)allowRetry;
-(id)initWithAccountID:(id)arg1 password:(id)arg2 callbackPerformer:(id)arg3 ;
@end

