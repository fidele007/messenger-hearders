/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosLigerTcppingExperimentContext : FBExperimentContext {

	long long _liger_tcp_ping_tcpinfo_cache_time;
	BOOL _liger_tcp_ping_cancel_ping_on_reply;
	BOOL _liger_tcp_ping_adaptive_ping;
	long long _liger_tcp_ping_ping_retries;
	long long _liger_tcp_ping_ping_rtt_threshold;
	long long _liger_tcp_ping_ping_timeout;
	BOOL _liger_tcp_ping_ping_enabled;

}

@property (assign,nonatomic) long long liger_tcp_ping_tcpinfo_cache_time;              //@synthesize liger_tcp_ping_tcpinfo_cache_time=_liger_tcp_ping_tcpinfo_cache_time - In the implementation block
@property (assign,nonatomic) BOOL liger_tcp_ping_cancel_ping_on_reply;                 //@synthesize liger_tcp_ping_cancel_ping_on_reply=_liger_tcp_ping_cancel_ping_on_reply - In the implementation block
@property (assign,nonatomic) BOOL liger_tcp_ping_adaptive_ping;                        //@synthesize liger_tcp_ping_adaptive_ping=_liger_tcp_ping_adaptive_ping - In the implementation block
@property (assign,nonatomic) long long liger_tcp_ping_ping_retries;                    //@synthesize liger_tcp_ping_ping_retries=_liger_tcp_ping_ping_retries - In the implementation block
@property (assign,nonatomic) long long liger_tcp_ping_ping_rtt_threshold;              //@synthesize liger_tcp_ping_ping_rtt_threshold=_liger_tcp_ping_ping_rtt_threshold - In the implementation block
@property (assign,nonatomic) long long liger_tcp_ping_ping_timeout;                    //@synthesize liger_tcp_ping_ping_timeout=_liger_tcp_ping_ping_timeout - In the implementation block
@property (assign,nonatomic) BOOL liger_tcp_ping_ping_enabled;                         //@synthesize liger_tcp_ping_ping_enabled=_liger_tcp_ping_ping_enabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)liger_tcp_ping_adaptive_ping;
-(BOOL)liger_tcp_ping_cancel_ping_on_reply;
-(BOOL)liger_tcp_ping_ping_enabled;
-(long long)liger_tcp_ping_ping_retries;
-(long long)liger_tcp_ping_ping_rtt_threshold;
-(long long)liger_tcp_ping_ping_timeout;
-(long long)liger_tcp_ping_tcpinfo_cache_time;
-(void)setLiger_tcp_ping_tcpinfo_cache_time:(long long)arg1 ;
-(void)setLiger_tcp_ping_cancel_ping_on_reply:(BOOL)arg1 ;
-(void)setLiger_tcp_ping_adaptive_ping:(BOOL)arg1 ;
-(void)setLiger_tcp_ping_ping_retries:(long long)arg1 ;
-(void)setLiger_tcp_ping_ping_rtt_threshold:(long long)arg1 ;
-(void)setLiger_tcp_ping_ping_timeout:(long long)arg1 ;
-(void)setLiger_tcp_ping_ping_enabled:(BOOL)arg1 ;
@end
