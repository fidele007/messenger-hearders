/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsCollectedCredentialToken : FBValueObject <NSCopying> {

	long long _credentialTokenType;
	NSString* _credentialToken;

}

@property (nonatomic,readonly) long long credentialTokenType;                //@synthesize credentialTokenType=_credentialTokenType - In the implementation block
@property (nonatomic,copy,readonly) NSString * credentialToken;              //@synthesize credentialToken=_credentialToken - In the implementation block
-(long long)credentialTokenType;
-(NSString *)credentialToken;
-(id)initWithCredentialTokenType:(long long)arg1 credentialToken:(id)arg2 ;
@end

