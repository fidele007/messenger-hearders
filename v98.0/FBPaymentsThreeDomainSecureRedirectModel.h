/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface FBPaymentsThreeDomainSecureRedirectModel : FBValueObject <NSCopying> {

	NSURL* _redirectURL;
	NSURL* _successURL;
	NSURL* _failureURL;

}

@property (nonatomic,copy,readonly) NSURL * redirectURL;              //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * successURL;               //@synthesize successURL=_successURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * failureURL;               //@synthesize failureURL=_failureURL - In the implementation block
-(id)initWithRedirectURL:(id)arg1 successURL:(id)arg2 failureURL:(id)arg3 ;
-(NSURL *)successURL;
-(NSURL *)failureURL;
-(NSURL *)redirectURL;
@end

