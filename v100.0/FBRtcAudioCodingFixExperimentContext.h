/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBRtcAudioCodingFixExperimentContext : FBExperimentContext {

	int __v;
	int _sync_on_miss;
	int _update_on_cng;

}

@property (nonatomic,readonly) int _v;                         //@synthesize _v=__v - In the implementation block
@property (nonatomic,readonly) int sync_on_miss;               //@synthesize sync_on_miss=_sync_on_miss - In the implementation block
@property (nonatomic,readonly) int update_on_cng;              //@synthesize update_on_cng=_update_on_cng - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(int)sync_on_miss;
-(int)update_on_cng;
-(int)_v;
@end
