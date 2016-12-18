/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface FBPaymentsThreeDomainSecureRedirectModel : FBValueObject <NSCopying> {

	NSURL* _redirectURL;
	NSURL* _successURL;
	NSURL* _failureURL;
	NSString* _httpMethod;
	NSString* _data;

}

@property (nonatomic,copy,readonly) NSURL * redirectURL;                //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * successURL;                 //@synthesize successURL=_successURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * failureURL;                 //@synthesize failureURL=_failureURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * httpMethod;              //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * data;                    //@synthesize data=_data - In the implementation block
-(id)initWithRedirectURL:(id)arg1 successURL:(id)arg2 failureURL:(id)arg3 httpMethod:(id)arg4 data:(id)arg5 ;
-(NSURL *)successURL;
-(NSURL *)failureURL;
-(NSString *)data;
-(NSURL *)redirectURL;
-(NSString *)httpMethod;
@end
