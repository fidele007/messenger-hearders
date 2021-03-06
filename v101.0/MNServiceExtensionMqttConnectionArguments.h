/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMQTTClientConfiguration, FBMQTTConnectionConfiguration, FBMQTTExperiments, NSString;

@interface MNServiceExtensionMqttConnectionArguments : FBValueObject <NSCoding, NSCopying> {

	FBMQTTClientConfiguration* _clientConfiguration;
	FBMQTTConnectionConfiguration* _connectionConfiguration;
	unsigned long long _clientCapabilities;
	FBMQTTExperiments* _experiments;
	NSString* _formattedUserAgentHeader;

}

@property (nonatomic,copy,readonly) FBMQTTClientConfiguration * clientConfiguration;                      //@synthesize clientConfiguration=_clientConfiguration - In the implementation block
@property (nonatomic,copy,readonly) FBMQTTConnectionConfiguration * connectionConfiguration;              //@synthesize connectionConfiguration=_connectionConfiguration - In the implementation block
@property (nonatomic,readonly) unsigned long long clientCapabilities;                                     //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
@property (nonatomic,copy,readonly) FBMQTTExperiments * experiments;                                      //@synthesize experiments=_experiments - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedUserAgentHeader;                                  //@synthesize formattedUserAgentHeader=_formattedUserAgentHeader - In the implementation block
-(id)initWithClientConfiguration:(id)arg1 connectionConfiguration:(id)arg2 clientCapabilities:(unsigned long long)arg3 experiments:(id)arg4 formattedUserAgentHeader:(id)arg5 ;
-(FBMQTTExperiments *)experiments;
-(FBMQTTConnectionConfiguration *)connectionConfiguration;
-(NSString *)formattedUserAgentHeader;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)clientCapabilities;
-(FBMQTTClientConfiguration *)clientConfiguration;
@end

