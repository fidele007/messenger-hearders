/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface MNMontageSeenHeadsViewModel : FBValueObject <NSCopying> {

	NSArray* _seenHeads;
	UIColor* _maskColor;

}

@property (nonatomic,copy,readonly) NSArray * seenHeads;              //@synthesize seenHeads=_seenHeads - In the implementation block
@property (nonatomic,copy,readonly) UIColor * maskColor;              //@synthesize maskColor=_maskColor - In the implementation block
-(NSArray *)seenHeads;
-(id)initWithSeenHeads:(id)arg1 maskColor:(id)arg2 ;
-(UIColor *)maskColor;
@end

