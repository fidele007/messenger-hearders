/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsFormTextInputHandler.h>

@class FBPaymentsFormTextFieldView;

@interface FBPaymentsFormCardSecurityCodeInputHandler : FBPaymentsFormTextInputHandler {

	BOOL _cardNumberIsRequired;
	long long _association;
	FBPaymentsFormTextFieldView* _cardNumberView;

}

@property (assign,nonatomic) long long association;                                     //@synthesize association=_association - In the implementation block
@property (nonatomic,retain) FBPaymentsFormTextFieldView * cardNumberView;              //@synthesize cardNumberView=_cardNumberView - In the implementation block
-(void)setCardNumberView:(FBPaymentsFormTextFieldView *)arg1 ;
-(void)doNotRequireCardNumber;
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(BOOL)arg2 ;
-(id)processChangeFromState:(id)arg1 toState:(id)arg2 textInputEvent:(long long)arg3 ;
-(id)effectiveCharacterSet;
-(id)errorDescriptionForError:(id)arg1 ;
-(unsigned long long)expectedLengthOfEffectiveCharactersWithInputedEffectiveText:(id)arg1 ;
-(void)setAssociation:(long long)arg1 ;
-(BOOL)_isCardAssociatedWithAmericanExpress;
-(FBPaymentsFormTextFieldView *)cardNumberView;
-(BOOL)isReady;
-(id)init;
-(long long)keyboardType;
-(long long)association;
@end

