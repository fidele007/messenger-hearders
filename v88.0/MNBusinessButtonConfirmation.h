/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNBusinessButtonConfirmation : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _text;
	NSString* _ok;
	NSString* _cancel;

}

@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * ok;                  //@synthesize ok=_ok - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancel;              //@synthesize cancel=_cancel - In the implementation block
-(id)initWithTitle:(id)arg1 text:(id)arg2 ok:(id)arg3 cancel:(id)arg4 ;
-(NSString *)ok;
-(NSString *)cancel;
-(NSString *)title;
-(NSString *)text;
@end

