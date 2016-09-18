/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedSecondaryAction.h>

@class FBMemNegativeFeedbackAction, FBFeedNegativeFeedbackSecondaryActionHelper, FBUserSession, NSString;

@interface FBFeedNFXHideAction : NSObject <FBFeedSecondaryAction> {

	FBMemNegativeFeedbackAction* _negativeFeedbackAction;
	FBFeedNegativeFeedbackSecondaryActionHelper* _helper;
	long long _menuPriority;
	BOOL _isSponsored;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionNameForLogging;
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(long long)menuPriority;
-(id)initWithNegativeFeedbackAction:(id)arg1 helper:(id)arg2 menuPriority:(long long)arg3 isSponsored:(BOOL)arg4 session:(id)arg5 ;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end

