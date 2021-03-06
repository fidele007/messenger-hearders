/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaSetAnalyzer : NSObject {

	double* _aspectRatios;
	unsigned long long _count;
	unsigned long long* _frequencies;
	double _dominantAspectRatio;

}

@property (nonatomic,readonly) double dominantAspectRatio;              //@synthesize dominantAspectRatio=_dominantAspectRatio - In the implementation block
-(BOOL)mediaAtIndexShouldAspectFill:(unsigned long long)arg1 ;
-(void)_calculateFrequencies;
-(unsigned long long)_numAspectRatiosWithinEpsilonOf:(double)arg1 ;
-(BOOL)_aspectRatio:(double)arg1 isCloseToAspectRatio:(double)arg2 ;
-(double)dominantAspectRatio;
-(id)initWithAspectRatios:(id)arg1 ;
-(void)dealloc;
@end

