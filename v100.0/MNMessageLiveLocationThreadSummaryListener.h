/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageLiveLocationThreadSummaryListener <NSObject>
@required
-(void)updatedLiveLocationForThreadKey:(id)arg1 updatedLiveLocation:(id)arg2 allLiveLocations:(id)arg3;
-(void)threadSummaryReplacedForThreadKey:(id)arg1 originalSummary:(id)arg2 withThreadSummary:(id)arg3;
-(void)purgedAllThreadSummaries;

@end
