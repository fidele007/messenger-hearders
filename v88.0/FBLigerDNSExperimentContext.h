/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLigerBaseExperimentContext.h>

@class NSString;

@interface FBLigerDNSExperimentContext : FBLigerBaseExperimentContext {

	BOOL _dnsCacheEnabled;
	BOOL _cAresEnabled;
	int _requestsOutstanding;
	NSString* _fallbackAnswers;

}

@property (assign,nonatomic) BOOL dnsCacheEnabled;                  //@synthesize dnsCacheEnabled=_dnsCacheEnabled - In the implementation block
@property (assign,nonatomic) BOOL cAresEnabled;                     //@synthesize cAresEnabled=_cAresEnabled - In the implementation block
@property (assign,nonatomic) int requestsOutstanding;               //@synthesize requestsOutstanding=_requestsOutstanding - In the implementation block
@property (nonatomic,copy) NSString * fallbackAnswers;              //@synthesize fallbackAnswers=_fallbackAnswers - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)dnsCacheEnabled;
-(void)setDnsCacheEnabled:(BOOL)arg1 ;
-(BOOL)cAresEnabled;
-(void)setCAresEnabled:(BOOL)arg1 ;
-(int)requestsOutstanding;
-(void)setRequestsOutstanding:(int)arg1 ;
-(NSString *)fallbackAnswers;
-(void)setFallbackAnswers:(NSString *)arg1 ;
@end

