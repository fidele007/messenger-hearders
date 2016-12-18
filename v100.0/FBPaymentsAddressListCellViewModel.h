/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsAddressListCellViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowCheckmark;
	NSString* _textLabelText;
	NSString* _detailTextLabelText;

}

@property (nonatomic,copy,readonly) NSString * textLabelText;                    //@synthesize textLabelText=_textLabelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailTextLabelText;              //@synthesize detailTextLabelText=_detailTextLabelText - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCheckmark;                         //@synthesize shouldShowCheckmark=_shouldShowCheckmark - In the implementation block
-(id)initWithTextLabelText:(id)arg1 detailTextLabelText:(id)arg2 shouldShowCheckmark:(BOOL)arg3 ;
-(NSString *)textLabelText;
-(NSString *)detailTextLabelText;
-(BOOL)shouldShowCheckmark;
@end

