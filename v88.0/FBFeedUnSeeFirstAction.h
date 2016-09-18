/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBFeedSecondaryAction.h>

@protocol FBQueriedFeedUnitFieldsProtocol, FBQueriedActorFieldsProtocol;
@class FBMemModelObject, FBFeedSecondaryActionContext, NSString;

@interface FBFeedUnSeeFirstAction : NSObject <FBFeedSecondaryAction> {

	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _profile;
	FBFeedSecondaryActionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)initWithFeedUnit:(id)arg1 profile:(id)arg2 context:(id)arg3 ;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end

