/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIFont;

@interface MNPaymentsTransferStatusModelForTransactionHistoryCell : FBValueObject <NSCopying> {

	BOOL _shouldShowTimestamp;
	NSString* _statusText;
	UIColor* _statusTextColor;
	UIFont* _statusTextFont;

}

@property (nonatomic,copy,readonly) NSString * statusText;                  //@synthesize statusText=_statusText - In the implementation block
@property (nonatomic,copy,readonly) UIColor * statusTextColor;              //@synthesize statusTextColor=_statusTextColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * statusTextFont;                //@synthesize statusTextFont=_statusTextFont - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTimestamp;                    //@synthesize shouldShowTimestamp=_shouldShowTimestamp - In the implementation block
-(BOOL)shouldShowTimestamp;
-(UIFont *)statusTextFont;
-(id)initWithStatusText:(id)arg1 statusTextColor:(id)arg2 statusTextFont:(id)arg3 shouldShowTimestamp:(BOOL)arg4 ;
-(UIColor *)statusTextColor;
-(NSString *)statusText;
@end
