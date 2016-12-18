/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface MNThreadReadMarkValue : FBValueObject <NSCopying> {

	BOOL _shouldSendReadReceipt;
	unsigned long long _watermarkTimestamp;
	NSSet* _apnsMessageIds;

}

@property (nonatomic,readonly) unsigned long long watermarkTimestamp;              //@synthesize watermarkTimestamp=_watermarkTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL shouldSendReadReceipt;                         //@synthesize shouldSendReadReceipt=_shouldSendReadReceipt - In the implementation block
@property (nonatomic,copy,readonly) NSSet * apnsMessageIds;                        //@synthesize apnsMessageIds=_apnsMessageIds - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(unsigned long long)watermarkTimestamp;
-(NSSet *)apnsMessageIds;
-(BOOL)shouldSendReadReceipt;
-(id)initWithWatermarkTimestamp:(unsigned long long)arg1 shouldSendReadReceipt:(BOOL)arg2 apnsMessageIds:(id)arg3 ;
@end

