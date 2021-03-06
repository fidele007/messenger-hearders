/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>

@interface FontKey : FBValueObject {

	double _size;
	unsigned long long _weight;
	double _multiplier;

}

@property (nonatomic,readonly) double size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long weight;              //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) double multiplier;                      //@synthesize multiplier=_multiplier - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithSize:(double)arg1 weight:(unsigned long long)arg2 multiplier:(double)arg3 ;
-(double)size;
-(double)multiplier;
-(unsigned long long)weight;
@end

