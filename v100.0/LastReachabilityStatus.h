/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface LastReachabilityStatus : NSObject {

	unsigned long long _status;
	NSDate* _lastChangeTime;

}

@property (nonatomic,readonly) unsigned long long status;                   //@synthesize status=_status - In the implementation block
@property (nonatomic,retain,readonly) NSDate * lastChangeTime;              //@synthesize lastChangeTime=_lastChangeTime - In the implementation block
-(id)initFromReachability:(id)arg1 ;
-(NSDate *)lastChangeTime;
-(void)dealloc;
-(unsigned long long)status;
@end

