/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface FBPaymentsFormTextInputState : FBValueObject <NSCopying> {

	NSString* _text;
	NSString* _effectiveCharacters;
	NSString* _formattedText;
	NSError* _validationError;

}

@property (nonatomic,copy,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectiveCharacters;              //@synthesize effectiveCharacters=_effectiveCharacters - In the implementation block
@property (nonatomic,copy,readonly) NSString * formattedText;                    //@synthesize formattedText=_formattedText - In the implementation block
@property (nonatomic,copy,readonly) NSError * validationError;                   //@synthesize validationError=_validationError - In the implementation block
-(NSError *)validationError;
-(id)initWithText:(id)arg1 effectiveCharacters:(id)arg2 formattedText:(id)arg3 validationError:(id)arg4 ;
-(NSString *)effectiveCharacters;
-(NSString *)text;
-(NSString *)formattedText;
@end

