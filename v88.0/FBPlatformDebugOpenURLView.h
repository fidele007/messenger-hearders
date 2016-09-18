/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@class FBPlatformDebugDataView, NSURL, NSDictionary, NSString;

@interface FBPlatformDebugOpenURLView : UIView <UITextFieldDelegate> {

	FBPlatformDebugDataView* _dataView;
	FBPlatformDebugDataView* _resultView;

}

@property (nonatomic,retain) FBPlatformDebugDataView * resultView;              //@synthesize resultView=_resultView - In the implementation block
@property (nonatomic,copy) NSURL * baseURL; 
@property (nonatomic,copy) NSDictionary * bridgeArgs; 
@property (nonatomic,copy) NSDictionary * methodArgs; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryForDataView:(id)arg1 textViewLabel:(id)arg2 ;
-(void)_setDictionary:(id)arg1 forDataView:(id)arg2 textViewLabel:(id)arg3 ;
-(void)setBridgeArgs:(NSDictionary *)arg1 ;
-(void)setMethodArgs:(NSDictionary *)arg1 ;
-(void)hideResultViewAnimated:(BOOL)arg1 ;
-(void)showResultViewWithURL:(id)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)bridgeArgs;
-(NSDictionary *)methodArgs;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)dismissKeyboard;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(FBPlatformDebugDataView *)resultView;
-(void)setResultView:(FBPlatformDebugDataView *)arg1 ;
@end

