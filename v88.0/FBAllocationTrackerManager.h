/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAllocationTrackerManager : NSObject
+(id)sharedManager;
-(void)enableGenerations;
-(id)instancesOfClasses:(id)arg1 ;
-(id)trackedClasses;
-(BOOL)isAllocationTrackerEnabled;
-(id)currentAllocationSummary;
-(void)startTrackingAllocations;
-(id)currentSummaryForGenerations;
-(void)markGeneration;
-(id)instancesForClass:(Class)arg1 inGeneration:(long long)arg2 ;
-(void)disableGenerations;
-(void)stopTrackingAllocations;
@end

