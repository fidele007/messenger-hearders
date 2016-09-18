/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedSecondaryAction.h>

@protocol FBQueriedFeedUnitFieldsProtocol;
@class FBMemModelObject, NSArray, FBFeedSecondaryActionContext, NSString;

@interface FBFeedSaveAction : NSObject <FBFeedSecondaryAction> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _unit;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _context;
	BOOL _isSave;
	BOOL _isEligibleForCaretNux;
	int _saveActionSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)saveActionForUnit:(id)arg1 trackingCodes:(id)arg2 saveActionSource:(int)arg3 context:(id)arg4 ;
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)initWithUnit:(id)arg1 trackingCodes:(id)arg2 saveActionSource:(int)arg3 context:(id)arg4 ;
-(void)_updateSaveInfoStory:(id)arg1 withAction:(int)arg2 ;
-(void)logSaveInfoEvent:(long long)arg1 ;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end
