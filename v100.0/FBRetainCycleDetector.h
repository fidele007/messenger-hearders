/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FBObjectGraphConfiguration;

@interface FBRetainCycleDetector : NSObject {

	NSMutableArray* _candidates;
	FBObjectGraphConfiguration* _configuration;

}
-(id)findRetainCyclesWithMaxCycleLength:(unsigned long long)arg1 ;
-(id)_findRetainCyclesInObject:(id)arg1 stackDepth:(unsigned long long)arg2 ;
-(id)_unwrapCycle:(id)arg1 ;
-(id)_shiftToUnifiedCycle:(id)arg1 ;
-(id)_shiftBufferToLowestAddress:(id)arg1 ;
-(id)_shiftToLowestLexicographically:(id)arg1 ;
-(id)_extractClassNamesFromGraphObjects:(id)arg1 ;
-(long long)_compareStringArray:(id)arg1 withArray:(id)arg2 ;
-(id)findRetainCycles;
-(id)init;
-(id)initWithConfiguration:(id)arg1 ;
-(void)addCandidate:(id)arg1 ;
@end

