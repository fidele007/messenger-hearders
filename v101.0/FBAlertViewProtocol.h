/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBAlertViewProtocol <NSObject>
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
@required
-(void)show;
-(void)setDelegate:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
-(long long)addButtonWithTitle:(id)arg1;
-(void)setCancelButtonIndex:(long long)arg1;
-(NSString *)title;
-(long long)tag;
-(void)setTag:(long long)arg1;
-(NSString *)message;
-(id)textFieldAtIndex:(long long)arg1;
-(void)setMessage:(id)arg1;
-(BOOL)isVisible;
-(long long)firstOtherButtonIndex;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(void)setAlertViewStyle:(long long)arg1;
-(id)buttonTitleAtIndex:(long long)arg1;

@end

