/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNBadgeCountUpdateWriting, NSCopying;
@interface MNBadgeCountSourceAdapter : NSObject {

	id<MNBadgeCountUpdateWriting> _writer;
	long long _source;
	id<NSCopying> _customState;
	long long _badgeCountNumber;

}

@property (copy) id<NSCopying> customState;                 //@synthesize customState=_customState - In the implementation block
@property (assign) long long badgeCountNumber;              //@synthesize badgeCountNumber=_badgeCountNumber - In the implementation block
-(void)updateBadgeCountNumber:(long long)arg1 customState:(id)arg2 ;
-(long long)badgeCountNumber;
-(void)setBadgeCountNumber:(long long)arg1 ;
-(id)initWithUpdateWriter:(id)arg1 currentState:(id)arg2 ;
-(id<NSCopying>)customState;
-(void)setCustomState:(id<NSCopying>)arg1 ;
@end

