/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsMoneySenderContext : NSObject <NSCopying> {

	NSString* _transferId;
	NSString* _offlineThreadingId;

}

@property (nonatomic,copy,readonly) NSString * transferId;                      //@synthesize transferId=_transferId - In the implementation block
@property (nonatomic,copy,readonly) NSString * offlineThreadingId;              //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
+(id)contextWithTransferId:(id)arg1 offlineThreadingId:(id)arg2 ;
+(id)contextIdentifier;
-(NSString *)offlineThreadingId;
-(id)initWithTransferId:(id)arg1 offlineThreadingId:(id)arg2 ;
-(NSString *)transferId;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

