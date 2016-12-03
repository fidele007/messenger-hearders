/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBLocationDuration : NSObject <NSCopying> {

	unsigned _coarseMS;
	unsigned _mediumMS;
	unsigned _fineMS;

}

@property (assign,nonatomic) unsigned coarseMS;              //@synthesize coarseMS=_coarseMS - In the implementation block
@property (assign,nonatomic) unsigned mediumMS;              //@synthesize mediumMS=_mediumMS - In the implementation block
@property (assign,nonatomic) unsigned fineMS;                //@synthesize fineMS=_fineMS - In the implementation block
-(id)getDifferenceFrom:(id)arg1 ;
-(unsigned)coarseMS;
-(unsigned)mediumMS;
-(unsigned)fineMS;
-(void)setCoarseMS:(unsigned)arg1 ;
-(void)setMediumMS:(unsigned)arg1 ;
-(void)setFineMS:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
