/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosLigerSslTimestampVerificationExperimentContext : FBExperimentContext {

	BOOL _liger_ssl_timestamp_verification_enabled;
	BOOL _liger_ssl_timestamp_verification_enforce_cert_key_length_verification;

}

@property (assign,nonatomic) BOOL liger_ssl_timestamp_verification_enabled;                                           //@synthesize liger_ssl_timestamp_verification_enabled=_liger_ssl_timestamp_verification_enabled - In the implementation block
@property (assign,nonatomic) BOOL liger_ssl_timestamp_verification_enforce_cert_key_length_verification;              //@synthesize liger_ssl_timestamp_verification_enforce_cert_key_length_verification=_liger_ssl_timestamp_verification_enforce_cert_key_length_verification - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)liger_ssl_timestamp_verification_enabled;
-(BOOL)liger_ssl_timestamp_verification_enforce_cert_key_length_verification;
-(void)setLiger_ssl_timestamp_verification_enabled:(BOOL)arg1 ;
-(void)setLiger_ssl_timestamp_verification_enforce_cert_key_length_verification:(BOOL)arg1 ;
@end

