/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBStarRatingsSmartTriggerData : NSObject <NSCoding, NSCopying> {

	unsigned long long _numUses;
	unsigned long long _numSignificantEvents;

}

@property (assign,nonatomic) unsigned long long numUses;                           //@synthesize numUses=_numUses - In the implementation block
@property (assign,nonatomic) unsigned long long numSignificantEvents;              //@synthesize numSignificantEvents=_numSignificantEvents - In the implementation block
-(void)setNumSignificantEvents:(unsigned long long)arg1 ;
-(unsigned long long)numUses;
-(void)setNumUses:(unsigned long long)arg1 ;
-(unsigned long long)numSignificantEvents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

