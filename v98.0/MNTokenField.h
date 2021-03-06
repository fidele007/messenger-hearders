/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITextField.h>

@protocol MNTokenFieldDelegate;
@class NSObject;

@interface MNTokenField : UITextField {

	NSObject*<MNTokenFieldDelegate> _touchDelegate;

}

@property (assign,nonatomic,__weak) NSObject*<MNTokenFieldDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(NSObject*<MNTokenFieldDelegate>)touchDelegate;
-(void)setTouchDelegate:(NSObject*<MNTokenFieldDelegate>)arg1 ;
@end

