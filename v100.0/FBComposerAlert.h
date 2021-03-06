/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBComposerAlertButton;

@interface FBComposerAlert : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _message;
	NSArray* _buttons;
	FBComposerAlertButton* _cancelButton;

}

@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttons;                                 //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAlertButton * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
-(id)initWithTitle:(id)arg1 message:(id)arg2 buttons:(id)arg3 cancelButton:(id)arg4 ;
-(NSString *)title;
-(NSString *)message;
-(FBComposerAlertButton *)cancelButton;
-(NSArray *)buttons;
@end

