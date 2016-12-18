/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPSBookingMessageInputModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	NSString* _placeholder;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 placeholder:(id)arg3 ;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)placeholder;
@end

