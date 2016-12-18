/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBMobileTracePolicy.h>

@class NSString;

@interface FBConfigurableTracingPolicy : NSObject <FBMobileTracePolicy> {

	unordered_map<FBMobileTraceSite, unsigned long long, FB::HashFunctor<FBMobileTraceSite>, FB::EqualFunctor<FBMobileTraceSite>, std::__1::allocator<std::__1::pair<const FBMobileTraceSite, unsigned long long> > >* _thresholds;
	unordered_map<FBMobileTraceSite, unsigned int, FB::HashFunctor<FBMobileTraceSite>, FB::EqualFunctor<FBMobileTraceSite>, std::__1::allocator<std::__1::pair<const FBMobileTraceSite, unsigned int> > >* _rates;
	BOOL _tracingEnabled;
	unsigned long long _defaultThreshold;

}

@property (assign,nonatomic) BOOL tracingEnabled;                              //@synthesize tracingEnabled=_tracingEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long defaultThreshold;              //@synthesize defaultThreshold=_defaultThreshold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRate:(unsigned)arg1 forTraceSite:(int)arg2 ;
-(void)setThreshold:(unsigned long long)arg1 forTraceSite:(int)arg2 ;
-(void)setTracingEnabled:(BOOL)arg1 ;
-(void)setDefaultThreshold:(unsigned long long)arg1 ;
-(BOOL)tracingEnabled;
-(unsigned long long)defaultThreshold;
-(BOOL)shouldSampleForTraceSite:(int)arg1 ;
-(unsigned)sampleRateForTraceSite:(int)arg1 ;
-(unsigned long long)thresholdForTraceSite:(int)arg1 ;
@end

