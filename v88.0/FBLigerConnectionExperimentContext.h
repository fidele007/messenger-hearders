/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLigerBaseExperimentContext.h>

@interface FBLigerConnectionExperimentContext : FBLigerBaseExperimentContext {

	BOOL _perDomainLimitEnabled;
	BOOL _limitVideoDomain;
	long long _maxHTTPSessions;
	long long _maxSPDYSessions;
	long long _backupTimeout;
	long long _perDomainMaxRetries;

}

@property (nonatomic,readonly) long long maxHTTPSessions;                  //@synthesize maxHTTPSessions=_maxHTTPSessions - In the implementation block
@property (nonatomic,readonly) long long maxSPDYSessions;                  //@synthesize maxSPDYSessions=_maxSPDYSessions - In the implementation block
@property (nonatomic,readonly) long long backupTimeout;                    //@synthesize backupTimeout=_backupTimeout - In the implementation block
@property (nonatomic,readonly) BOOL perDomainLimitEnabled;                 //@synthesize perDomainLimitEnabled=_perDomainLimitEnabled - In the implementation block
@property (nonatomic,readonly) long long perDomainMaxRetries;              //@synthesize perDomainMaxRetries=_perDomainMaxRetries - In the implementation block
@property (nonatomic,readonly) BOOL limitVideoDomain;                      //@synthesize limitVideoDomain=_limitVideoDomain - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)maxHTTPSessions;
-(long long)maxSPDYSessions;
-(long long)backupTimeout;
-(BOOL)perDomainLimitEnabled;
-(long long)perDomainMaxRetries;
-(BOOL)limitVideoDomain;
@end

